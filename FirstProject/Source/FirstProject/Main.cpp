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

	// Camera Boom ���� (�浹�� ���� ��� �÷��̾ ���� ����.)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetRelativeRotation(FRotator(-30.f, 0.f, 0.f));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 250.f;											// �� �Ÿ���ŭ ī�޶� ����´�.
	CameraBoom->bUsePawnControlRotation = true;										// �÷��̾ �������� ȸ��


	// �浹�� ���� capsule ũ�� ����
	GetCapsuleComponent()->SetCapsuleSize(48.f, 92.f);

	/*
	Follow Camera ����
	-> Follow Camera�� Camera Boom ���� �����ϰ� Camera Boom�� Controller ���⿡ �°� �����ǵ��� �Ѵ�.
	*/ 
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);		// SocketName -> Socket�� ���� Object�� ���� �� �ִ�. ex) ĳ������ ��(Skeleton)�� ���⸦ ���̵�

	FollowCamera->bUsePawnControlRotation = false;									// Follow Camera�� SpringArm�� �پ �����̱� ������ ȸ���ϱ� ������ �ʴ´�.

	// Camera ȸ�� �ӵ� ����
	BaseTurnRate = 65.f;
	BaseLookUpRate = 65.f;

	// Controller�� ȸ���Ҷ� ȸ�� X
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	/* ĳ���� ������ ���� */
	GetCharacterMovement()->bOrientRotationToMovement = true;						// true -> Character�� �ڵ����� direction �������� ����
	GetCharacterMovement()->JumpZVelocity = 500.f;									// ������ ����, �ӵ�
	GetCharacterMovement()->AirControl = 0.2f;										// AirControl -> ���߿� �ִ� ���� ĳ���͸� �ణ ������ �� ����

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

	// �� �Է��� Mapping 

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

// ��, �� �Է� -> �̵�
void AMain::MoveForward(float Value) {
	if (Controller != nullptr && Value != 0.f && !bAttacking) {
		// ���� ������ ��� �������� ã�´�.
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

// ��, �� �Է� -> �̵�
void AMain::MoveRight(float Value) {
	if (Controller != nullptr && Value != 0.f && !bAttacking) {
		// ���� ������ ��� �������� ã�´�.
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

