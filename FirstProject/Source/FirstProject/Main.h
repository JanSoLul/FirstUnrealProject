// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Main.generated.h"

UENUM(BlueprintType)
enum class EMovementStatus : uint8 {
	EMS_Normal UMETA(DisplayName = "Normal"),
	EMS_Sprinting UMETA(DisplayName = "Sprinting"),

	EMS_MAX UMETA(DisplayName = "DefaultMax")
};

UENUM(BlueprintType)
enum class EStaminaStatus : uint8 {
	ESS_Normal UMETA(DisplayName = "Normal"),
	ESS_Exhuasted UMETA(DisplayName = "Exhuasted"),

	ESS_MAX UMETA(DisplayName = "DefaultMax"),
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

	/** Camera Boom -> Player 뒤에 카메라를 위치시킨다. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Camera Boom에 따라오는 Camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

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

	/** Coin 수 증가 함수 */
	void IncrementCoin();

	/** 캐릭터가 죽었는지 체크 */
	void Die();

	/** 캐릭터 운동 상태와 Running 속도 설정 */
	void SetMovementStatus(EMovementStatus Status);

	/** Shift키 눌러져 있을 경우 */
	void ShiftKeyPressed();

	/** Shift키 뗐을 경우 */
	void ShiftKeyReleased();

	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};
