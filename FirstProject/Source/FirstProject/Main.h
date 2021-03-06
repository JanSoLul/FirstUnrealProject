// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Main.generated.h"

UENUM(BlueprintType)
enum class EMovementStatus : uint8 {
	EMS_Normal		UMETA(DisplayName = "Normal"),
	EMS_Sprinting	UMETA(DisplayName = "Sprinting"),

	EMS_MAX			UMETA(DisplayName = "DefaultMax")
};

UENUM(BlueprintType)
enum class EStaminaStatus : uint8 {
	ESS_Normal		UMETA(DisplayName = "Normal"),
	ESS_Exhuasted	UMETA(DisplayName = "Exhuasted"),

	ESS_MAX			UMETA(DisplayName = "DefaultMax"),
};

UENUM(BlueprintType)
enum class EAttackStatus : uint8 {
	EAS_DontAttack		UMETA(DisplayName = "DontAttack"),
	EAS_NormalAttack	UMETA(DisplayName = "NormalAttack"),
	EAS_AttackQ			UMETA(DisplayName = "AttackQ"),
	EAS_AttackE			UMETA(DisplayName = "AttackE"),
	EAS_AttackR			UMETA(DisplayName = "AttackR"),

	EAS_MAX				UMETA(DisplayName = "DefaultMax"),
};

UCLASS()
class FIRSTPROJECT_API AMain : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMain();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Enums")
	EMovementStatus MovementStatus;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Enums")
	EStaminaStatus StaminaStatus;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Enums")
	EAttackStatus AttackStatus;

	class TMap<FString, float> DamageCoefficientMap;

	/** Camera Boom -> Player 뒤에 카메라를 위치시킨다. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Camera Boom에 따라오는 Camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	class UParticleSystem* BloodParticles;

	/** Camera의 기본 회전 속도 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseTurnRate;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float BaseLookUpRate;

	/**
	/* Player Stats
	*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Stats")
	float MaxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
	float Health;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Stats")
	float MaxStamina;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
	float Stamina;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player Stats")
	int32 Coins;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	float QSkillCoolDown;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player Stats")
	float QSkillCool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	float ESkillCoolDown;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player Stats")
	float ESkillCool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
	float RSkillCoolDown;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player Stats")
	float RSkillCool;

	/** 일반 달리기 스피드 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Running")
	float RunningSpeed;

	/** 전력 질주 스피드 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Running")
	float SprintingSpeed;

	/** 전력 질주할 때 소모되는 Stamina */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Running")
	float StaminaDrainRate;

	/** 전력 질주하기 위해 필요한 최소 Stamina */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Running")
	float MinSprintStamina;

	/** 시간당 자동으로 회복되는 Stamina */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Running")
	float StaminaRecoveryRate;

	/** 장착한 무기 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Items")
	class AWeapon* EquippedWeapon;

	/** 장착한 무기 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Items")
	class AItem* ActiveOverlappingItem;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Anims")
	class UAnimMontage* CombatMontage;

	bool bIsLeftMouseButtonPressed;

	/** 무기 장착했는지 체크 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Items")
	bool bIsEquipped;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Anims")
	bool bAttacking;

	bool bIsQSkillCoolDown;
	bool bIsESkillCoolDown;
	bool bIsRSkillCoolDown;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** 앞 / 뒤 입력 받는 함수 */
	void MoveForward(float Value);

	/** 좌 / 우 입력 받는 함수 */
	void MoveRight(float Value);

	/** 주어진 Rate만큼 회전하기 위해 Input을 통해 호출된다. 
	/* @param Rate: Normalize된 Rate, 1.0은 100%의 회전율을 의미한다.
	*/
	void TurnAtRate(float Rate);

	/** 주어진 Rate만큼 아래/위로 보기 위해 Input을 통해 호출된다.
	/* @param Rate: Normalize된 Rate, 1.0은 100%의 회전율을 의미한다.
	*/
	void LookUpAtRate(float Rate);

	/** 체력 Amount 만큼 감소 */
	void DecrementHealth(float Amount);

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const & DamageEvent, class AController * EventInstigator, AActor * DamageCauser) override;

	/** Coin 수 증가 함수 */
	void IncrementCoin();

	/** 캐릭터가 죽었을 때 */
	void Die();

	/** 캐릭터 운동 상태와 Running 속도 설정 */
	void SetMovementStatus(EMovementStatus Status);

	/** Shift키 눌러져 있을 경우 */
	void ShiftKeyPressed();

	/** Shift키 뗐을 경우 */
	void ShiftKeyReleased();

	void LeftMouseButtonPressed();
	void LeftMouseButtonReleased();

	/** 기본 공격 */
	void Attack();

	/** Q 눌렀을 때의 공격 */
	void AttackQ();

	/** E 눌렀을 때의 공격 */
	void AttackE();

	/** R 눌렀을 때의 공격 */
	void AttackR();

	/** 공격 끝났을 때 호출 */
	UFUNCTION(BlueprintCallable)
	void AttackEnd();

	void AttackReleased();

	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	FORCEINLINE void SetEquippedWeapon(AWeapon* WeaponToSet) { EquippedWeapon = WeaponToSet; }
	FORCEINLINE AWeapon* GetEquippedWeapon() { return EquippedWeapon; }
	FORCEINLINE void SetActiveOverlappingItem(AItem* ItemToSet) { ActiveOverlappingItem = ItemToSet; }
	FORCEINLINE bool GetIsEquipped() { return bIsEquipped; }
};
