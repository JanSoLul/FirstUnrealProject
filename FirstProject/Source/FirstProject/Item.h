// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class FIRSTPROJECT_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

	/** 충돌 기본 모양 */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Item | Collision")
	class USphereComponent* CollisionVolume;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Item | Mesh")
	class UStaticMeshComponent* Mesh;

	/** 항상 재생되는 효과 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Particles")
	class UParticleSystemComponent* IdleParticleComponent;

	/** 캐릭터와 겹쳤을 때 재생되는 효과 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Particles")
	class UParticleSystem* OverlapParticle;

	/** 캐릭터와 겹쳤을 때 재생되는 효과음 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Sounds")
	class USoundCue* OverlapSound;

	/** 회전할 것인지 체크 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | ItemProperties")
	bool bIsRotate;

	/** 회전 속도 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | ItemProperties")
	float RotationRate;

private:
	/** 총 진행된 시간 */
	float RunningTime;
	/** 아래/위 움직임 가중치 */
	float Weight;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	virtual void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

};