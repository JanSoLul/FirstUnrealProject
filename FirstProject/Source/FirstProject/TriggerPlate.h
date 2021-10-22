// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TriggerPlate.generated.h"

UCLASS()
class FIRSTPROJECT_API ATriggerPlate : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATriggerPlate();

	/** Trigger 기능 */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Trigger Plate")
	class UBoxComponent* TriggerBox;

	/** 캐릭터가 밟으면 Trigger 작동 */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Trigger Plate")
	class UStaticMeshComponent* TriggerPlate;

	/** 발판 trigger가 발동 되면 열리는 문 */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Trigger Plate")
	UStaticMeshComponent* Door;

	UPROPERTY(BlueprintReadWrite, Category = "Trigger Plate")
	FVector InitialDoorLocation;

	UPROPERTY(BlueprintReadWrite, Category = "Trigger Plate")
	FVector InitialPlateLocation;

	FTimerHandle SwitchHandle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Trigger Plate")
	float SwitchTime;

	bool bCharacterOnPlate;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION(BlueprintImplementableEvent, Category = "Trigger Plate")
	void UpperDoor();

	UFUNCTION(BlueprintImplementableEvent, Category = "Trigger Plate")
	void LowerDoor();

	UFUNCTION(BlueprintImplementableEvent, Category = "Trigger Plate")
	void UpperPlate();

	UFUNCTION(BlueprintImplementableEvent, Category = "Trigger Plate")
	void LowerPlate();

	UFUNCTION(BlueprintCallable, Category = "Trigger Plate")
	void UpdateDoorLocation(float Z);

	UFUNCTION(BlueprintCallable, Category = "Trigger Plate")
	void UpdatePlateLocation(float Z);

	void CloseDoor();
};
