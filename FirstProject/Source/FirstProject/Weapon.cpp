// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"

AWeapon::AWeapon() {
	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	SkeletalMesh->SetupAttachment(GetRootComponent());
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