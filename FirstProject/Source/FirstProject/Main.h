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

	/** Camera Boom -> Player �ڿ� ī�޶� ��ġ��Ų��. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Camera Boom�� ������� Camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	/** Camera�� �⺻ ȸ�� �ӵ� */
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

	/** �Ϲ� �޸��� ���ǵ� */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Running")
	float RunningSpeed;

	/** ���� ���� ���ǵ� */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Running")
	float SprintingSpeed;

	/** ���� ������ �� �Ҹ�Ǵ� Stamina */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Running")
	float StaminaDrainRate;

	/** ���� �����ϱ� ���� �ʿ��� �ּ� Stamina */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Running")
	float MinSprintStamina;

	/** �ð��� �ڵ����� ȸ���Ǵ� Stamina */
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

	/** �� / �� �Է� �޴� �Լ� */
	void MoveForward(float Value);

	/** �� / �� �Է� �޴� �Լ� */
	void MoveRight(float Value);

	/** �־��� Rate��ŭ ȸ���ϱ� ���� Input�� ���� ȣ��ȴ�. 
	/* @param Rate: Normalize�� Rate, 1.0�� 100%�� ȸ������ �ǹ��Ѵ�.
	*/
	void TurnAtRate(float Rate);

	/** �־��� Rate��ŭ �Ʒ�/���� ���� ���� Input�� ���� ȣ��ȴ�.
	/* @param Rate: Normalize�� Rate, 1.0�� 100%�� ȸ������ �ǹ��Ѵ�.
	*/
	void LookUpAtRate(float Rate);

	/** ü�� Amount ��ŭ ���� */
	void DecrementHealth(float Amount);

	/** Coin �� ���� �Լ� */
	void IncrementCoin();

	/** ĳ���Ͱ� �׾����� üũ */
	void Die();

	/** ĳ���� � ���¿� Running �ӵ� ���� */
	void SetMovementStatus(EMovementStatus Status);

	/** ShiftŰ ������ ���� ��� */
	void ShiftKeyPressed();

	/** ShiftŰ ���� ��� */
	void ShiftKeyReleased();

	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};
