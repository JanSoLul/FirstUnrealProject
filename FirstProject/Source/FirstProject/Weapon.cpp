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
		SkeletalMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);		// ī�޶�� �浹 x
		SkeletalMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);		// ĳ���Ϳ� �浹 x
		SkeletalMesh->SetSimulatePhysics(false);
		
		const USkeletalMeshSocket* RightHandSocket = Character->GetMesh()->GetSocketByName("RightHandSocket");
		if (RightHandSocket) {
			RightHandSocket->AttachActor(this, Character->GetMesh());
			// �̹� Weapon ������ �־����� ���� Weapon ����
			if (Character->GetIsEquipped()) {
				Character->GetEquippedWeapon()->Destroy();
			}
			// Character�� �ش� weapon ����
			Character->SetEquippedWeapon(this);
			Super::bIsRotate = false;
			Super::bIsFloating = false;
			// Weapon ���� Sound
			if (EquipSound) {
				UGameplayStatics::PlaySound2D(this, EquipSound);
			}
			// Weapon�� �ִ� particle ����
			Super::IdleParticleComponent->Deactivate();
		}
	}
}