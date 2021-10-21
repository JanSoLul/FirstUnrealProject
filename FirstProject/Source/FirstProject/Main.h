// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Main.generated.h"

UCLASS()
class FIRSTPROJECT_API AMain : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMain();

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
	* @param Rate: Normalize�� Rate, 1.0�� 100%�� ȸ������ �ǹ��Ѵ�.
	*/
	void TurnAtRate(float Rate);

	/** �־��� Rate��ŭ �Ʒ�/���� ���� ���� Input�� ���� ȣ��ȴ�.
	* @param Rate: Normalize�� Rate, 1.0�� 100%�� ȸ������ �ǹ��Ѵ�.
	*/
	void LookUpAtRate(float Rate);

	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};
