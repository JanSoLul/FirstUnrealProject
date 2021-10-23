// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatingPlatform.h"
#include "Components/StaticMeshComponent.h"
#include "TimerManager.h"

// Sets default values
AFloatingPlatform::AFloatingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	StartPoint = FVector(0.f);
	EndPoint = FVector(0.f);

	InterpSpeed = 1.f;
	InterpTime = 1.f;

	bInterp = false;
	Distance = 0.f;
}

// Called when the game starts or when spawned
void AFloatingPlatform::BeginPlay()
{
	Super::BeginPlay();
	
	StartPoint = GetActorLocation();
	EndPoint += StartPoint;

	Distance = (EndPoint - StartPoint).Size();

	GetWorldTimerManager().SetTimer(InterpTimer, this, &AFloatingPlatform::ToggleInterp, InterpTime);
}

// Called every frame
void AFloatingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bInterp) {
		FVector CurLocation = GetActorLocation();
		FVector Interp = FMath::VInterpTo(CurLocation, EndPoint, DeltaTime, InterpSpeed);
		SetActorLocation(Interp);

		float CurDistance = (GetActorLocation() - StartPoint).Size();
		// platform이 끝지점 도달하면 반대로 이동하게 바꿈
		if ((Distance - CurDistance) <= 1.f) {
			ToggleInterp();
			GetWorldTimerManager().SetTimer(InterpTimer, this, &AFloatingPlatform::ToggleInterp, InterpTime);
			SwapVectors(StartPoint, EndPoint);
		}
	}
}

void AFloatingPlatform::ToggleInterp() {
	bInterp = !bInterp;
}

void AFloatingPlatform::SwapVectors(FVector& VecA, FVector& VecB) {
	FVector Tmp = VecA;
	VecA = VecB;
	VecB = Tmp;
}
