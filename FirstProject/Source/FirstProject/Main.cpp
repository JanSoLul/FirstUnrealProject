// Fill out your copyright notice in the Description page of Project Settings.


#include "Main.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Weapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "Animation/AnimInstance.h"


// Sets default values
AMain::AMain()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Camera Boom 생성 (충돌이 있을 경우 플레이어를 향해 당긴다.)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetRelativeRotation(FRotator(-30.f, 0.f, 0.f));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 250.f;											// 이 거리만큼 카메라가 따라온다.
	CameraBoom->bUsePawnControlRotation = true;										// 플레이어를 기준으로 회전


	// 충돌을 위한 capsule 크기 설정
	GetCapsuleComponent()->SetCapsuleSize(48.f, 92.f);

	/*
	Follow Camera 생성
	-> Follow Camera를 Camera Boom 끝에 부착하고 Camera Boom이 Controller 방향에 맞게 조정되도록 한다.
	*/ 
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);		// SocketName -> Socket을 통해 Object를 붙일 수 있다. ex) 캐릭터의 손(Skeleton)에 무기를 붙이듯

	FollowCamera->bUsePawnControlRotation = false;									// Follow Camera는 SpringArm에 붙어서 움직이기 때문에 회전하기 윈하지 않는다.

	// Camera 회전 속도 설정
	BaseTurnRate = 65.f;
	BaseLookUpRate = 65.f;

	// Controller가 회전할때 회전 X
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	/* 캐릭터 움직임 구성 */
	GetCharacterMovement()->bOrientRotationToMovement = true;						// true -> Character가 자동으로 direction 방향으로 향함
	GetCharacterMovement()->JumpZVelocity = 500.f;									// 점프의 높이, 속도
	GetCharacterMovement()->AirControl = 0.2f;										// AirControl -> 공중에 있는 동안 캐릭터를 약간 움직일 수 있음

	MaxHealth = 100.f;
	Health = 65.f;
	MaxStamina = 300.f;
	Stamina = 150.f;
	Coins = 0;

	SkillCool = 5.f;
	SkillCoolDown = 5.f;

	RunningSpeed = 650.f;
	SprintingSpeed = 1200.f;

	MovementStatus = EMovementStatus::EMS_Normal;
	StaminaStatus = EStaminaStatus::ESS_Normal;

	StaminaDrainRate = 25.f;
	StaminaRecoveryRate = 15.f;
	MinSprintStamina = 150.f;
	bIsLeftMouseButtonPressed = false;
	bIsEquipped = false;
	bAttacking = false;
	bIsCoolDown = false;
}

// Called when the game starts or when spawned
void AMain::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMain::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float DeltaStaminaDrain = StaminaDrainRate * DeltaTime;
	float DeltaStaminaRecovery = StaminaRecoveryRate * DeltaTime;
	switch (StaminaStatus) {
		UE_LOG(LogTemp, Warning, TEXT("test"));
	case EStaminaStatus::ESS_Normal:
		if (MovementStatus == EMovementStatus::EMS_Sprinting) {
			Stamina -= DeltaStaminaDrain;
			if (Stamina <= 0.f) {
				Stamina = 0.f;
				StaminaStatus = EStaminaStatus::ESS_Exhuasted;
				MovementStatus = EMovementStatus::EMS_Normal;
			}
		}
		else {
			if (Stamina < MaxStamina) {
				Stamina += DeltaStaminaRecovery;
				if (Stamina > MaxStamina) {
					Stamina = MaxStamina;
				}
			}
		}
		break;

	case EStaminaStatus::ESS_Exhuasted:
		if (Stamina < MaxStamina) {
			Stamina += DeltaStaminaRecovery;
			if (Stamina > MaxStamina) {
				Stamina = MaxStamina;
			}
		}
		else {
			StaminaStatus = EStaminaStatus::ESS_Normal;
		}
		break;
	}
	if (bIsCoolDown) {
		SkillCoolDown += DeltaTime;
		if (SkillCoolDown >= SkillCool) {
			SkillCoolDown = SkillCool;
			bIsCoolDown = true;
		}
	}
}

// Called to bind functionality to input
void AMain::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	// 각 입력을 Mapping 

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AMain::ShiftKeyPressed);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AMain::ShiftKeyReleased);

	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &AMain::LeftMouseButtonPressed);
	PlayerInputComponent->BindAction("Attack", IE_Released, this, &AMain::LeftMouseButtonReleased);


	PlayerInputComponent->BindAction("AttackQ", IE_Pressed, this, &AMain::AttackQ);
	PlayerInputComponent->BindAction("AttackQ", IE_Released, this, &AMain::AttackReleased);

	PlayerInputComponent->BindAction("AttackE", IE_Pressed, this, &AMain::AttackE);
	PlayerInputComponent->BindAction("AttackE", IE_Released, this, &AMain::AttackReleased);

	PlayerInputComponent->BindAction("AttackR", IE_Pressed, this, &AMain::AttackR);
	PlayerInputComponent->BindAction("AttackR", IE_Released, this, &AMain::AttackReleased);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMain::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMain::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAxis("TurnRate", this, &AMain::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMain::LookUpAtRate);
}

// 앞, 뒤 입력 -> 이동
void AMain::MoveForward(float Value) {
	if (Controller != nullptr && Value != 0.f && !bAttacking) {
		// 앞쪽 방향이 어느 방향인지 찾는다.
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

// 좌, 우 입력 -> 이동
void AMain::MoveRight(float Value) {
	if (Controller != nullptr && Value != 0.f && !bAttacking) {
		// 앞쪽 방향이 어느 방향인지 찾는다.
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);
	}
}

void AMain::TurnAtRate(float Rate) {
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AMain::LookUpAtRate(float Rate) {
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AMain::DecrementHealth(float Amount) {
	if (Health - Amount <= 0.f) {
		Health = 0.f;
		Die();
	}
	else {
		Health -= Amount;
	}
}


void AMain::Die() {

}

void AMain::IncrementCoin() {
	Coins++;
}

void AMain::SetMovementStatus(EMovementStatus Status) {
	MovementStatus = Status;
	if (MovementStatus == EMovementStatus::EMS_Sprinting) {
		GetCharacterMovement()->MaxWalkSpeed = SprintingSpeed;
	}
	else {
		GetCharacterMovement()->MaxWalkSpeed = RunningSpeed;
	}
}



void AMain::ShiftKeyPressed() {
	if (StaminaStatus == EStaminaStatus::ESS_Normal)
		if (Stamina >= MinSprintStamina)
			MovementStatus = EMovementStatus::EMS_Sprinting;
}

void AMain::ShiftKeyReleased() {
	MovementStatus = EMovementStatus::EMS_Normal;
}

void AMain::LeftMouseButtonPressed() {
	bIsLeftMouseButtonPressed = true;
	if (ActiveOverlappingItem) {
		AWeapon* Weapon = Cast<AWeapon>(ActiveOverlappingItem);
		if (Weapon) {
			Weapon->Equip(this);
			bIsEquipped = true;
		}
		SetActiveOverlappingItem(nullptr);
	}
	else if (bIsEquipped){
		Attack();
	}
}

void AMain::LeftMouseButtonReleased() {
	bIsLeftMouseButtonPressed = false;
}

void AMain::Attack() {
	if (!bAttacking) {
		bAttacking = true;
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		if (AnimInstance && CombatMontage) {
			AnimInstance->Montage_Play(CombatMontage, 1.35f);
			AnimInstance->Montage_JumpToSection(FName("NormalAttack"), CombatMontage);
		}
	}
}

void AMain::AttackQ() {
	if (bIsEquipped) {
		if (SkillCoolDown >= SkillCool) {
			bIsCoolDown = true;
			SkillCoolDown = 0.f;
			bAttacking = true;
			UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
			if (AnimInstance && CombatMontage) {
				AnimInstance->Montage_Play(CombatMontage, 1.5f);
				AnimInstance->Montage_JumpToSection(FName("AttackQ"), CombatMontage);
			}
		}
	}
}

void AMain::AttackE() {
	if (bIsEquipped) {
		bAttacking = true;
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		if (AnimInstance && CombatMontage) {
			AnimInstance->Montage_Play(CombatMontage, 1.35f);
			AnimInstance->Montage_JumpToSection(FName("AttackE"), CombatMontage);
		}
	}
}

void AMain::AttackR() {
	if (bIsEquipped) {
		bAttacking = true;
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		if (AnimInstance && CombatMontage) {
			AnimInstance->Montage_Play(CombatMontage, 1.35f);
			AnimInstance->Montage_JumpToSection(FName("AttackR"), CombatMontage);
		}
	}
}

void AMain::AttackEnd() {
	bAttacking = false;
	if (bIsLeftMouseButtonPressed) {
		Attack();
	}
}


void AMain::AttackReleased() {
}

