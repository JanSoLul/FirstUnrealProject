// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingPlatform.generated.h"

UCLASS()
class FIRSTPROJECT_API AFloatingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloatingPlatform();

	/** Platform Mesh */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Platform")
	class UStaticMeshComponent* Mesh;


	UPROPERTY(EditAnywhere)
	FVector StartPoint;
	UPROPERTY(EditAnywhere, meta = (MakeEditWidget = "true"))
	FVector EndPoint;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Platform")
	float InterpSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Platform")
	float InterpTime;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Platform")
	bool bInterp;

	float Distance;

private:
	FTimerHandle InterpTimer;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void ToggleInterp();
	void SwapVectors(FVector& VecA, FVector& VecB);
};
