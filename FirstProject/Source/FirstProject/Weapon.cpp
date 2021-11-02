// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/BoxComponent.h"
#include "Enemy.h"
#include "Main.h"

AWeapon::AWeapon() {
	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	SkeletalMesh->SetupAttachment(GetRootComponent());

	CombatCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("CombatCollision"));
	CombatCollision->SetupAttachment(GetRootComponent());
	CombatCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	CombatCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	CombatCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	CombatCollision->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);	// Pawn에만 충돌 응답하도록 설정

	Damage = 25.f;

	Master = nullptr;
}

void AWeapon::BeginPlay() {
	Super::BeginPlay();

	CombatCollision->OnComponentBeginOverlap.AddDynamic(this, &AWeapon::CombatOnOverlapBegin);
	CombatCollision->OnComponentEndOverlap.AddDynamic(this, &AWeapon::CombatOnOverlapEnd);
}

void AWeapon::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	Super::OnOverlapBegin(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	if (OtherActor) {
		AMain* MainPlayer = Cast<AMain>(OtherActor);
		if (MainPlayer) {
			MainPlayer->SetActiveOverlappingItem(this);
		}
	}
}

void AWeapon::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
	Super::OnOverlapEnd(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);
	if (OtherActor) {
		AMain* MainPlayer = Cast<AMain>(OtherActor);
		if (MainPlayer) {
			MainPlayer->SetActiveOverlappingItem(nullptr);
		}
	}
}

void AWeapon::Equip(class AMain* Character) {
	if (Character) {
		Master = Character;
		SetInstigator(Character->GetController());

		SkeletalMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);		// 카메라와 충돌 x
		SkeletalMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);		// 캐릭터와 충돌 x
		SkeletalMesh->SetSimulatePhysics(false);
		
		const USkeletalMeshSocket* RightHandSocket = Character->GetMesh()->GetSocketByName("RightHandSocket");
		if (RightHandSocket) {
			RightHandSocket->AttachActor(this, Character->GetMesh());
			// 이미 Weapon 가지고 있었으면 이전 Weapon 삭제
			if (Character->GetIsEquipped()) {
				Character->GetEquippedWeapon()->Destroy();
			}
			// Character에 해당 weapon 장착
			Character->SetEquippedWeapon(this);
			Super::bIsRotate = false;
			Super::bIsFloating = false;
			// Weapon 장착 Sound
			if (EquipSound) {
				UGameplayStatics::PlaySound2D(this, EquipSound);
			}
			// Weapon에 있던 particle 제거
			Super::IdleParticleComponent->Deactivate();
		}
	}
}

void AWeapon::CombatOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	if (OtherActor) {
		AEnemy* Enemy = Cast<AEnemy>(OtherActor);
		if (Enemy) {
			if (Enemy->BloodParticles) {
				const USkeletalMeshSocket* WeaponSocket = SkeletalMesh->GetSocketByName("WeaponSocket");
				if (WeaponSocket) {
					FVector SocketLocation = WeaponSocket->GetSocketLocation(SkeletalMesh);
					UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Enemy->BloodParticles, SocketLocation, FRotator(0.f), true);
				}
			}
			if (DamageTypeClass) {
				float AttackDamage = Damage;
				switch (Master->AttackStatus){
				case EAttackStatus::EAS_NormalAttack:
					AttackDamage *= Master->DamageCoefficientMap["NormalAttack"];
					break;
				case EAttackStatus::EAS_AttackQ:
					AttackDamage *= Master->DamageCoefficientMap["AttackQ"];
					break;
				case EAttackStatus::EAS_AttackE:
					AttackDamage *= Master->DamageCoefficientMap["AttackE"];
					break;
				case EAttackStatus::EAS_AttackR:
					AttackDamage *= Master->DamageCoefficientMap["AttackR"];
					break;
				}
				UE_LOG(LogTemp, Warning, TEXT("Damage: %f"), AttackDamage);
				UGameplayStatics::ApplyDamage(Enemy, AttackDamage, WeaponInstigator, this, DamageTypeClass);
			}
		}
	}
}

void AWeapon::CombatOnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {

}
void AWeapon::ActivateCollison() {
	CombatCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
}

void AWeapon::DeactivateCollison() {
	CombatCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}