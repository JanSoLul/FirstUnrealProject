// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Trap.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTPROJECT_API ATrap : public AItem
{
	GENERATED_BODY()

public:
	/** 함정 피격 데미지 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float Damage;

public:

	ATrap();

	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	virtual void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;
};
