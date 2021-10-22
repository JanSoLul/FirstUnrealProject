// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnVolume.generated.h"

UCLASS()
class FIRSTPROJECT_API ASpawnVolume : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnVolume();

	/** Spawn할 Pawn */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning")
	TSubclassOf<class ACritter> PawnToSpawn;

	/** 몬스터 스폰하는 범위 박스 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning")
	class UBoxComponent* SpawningBox;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Spawn 위치 */
	UFUNCTION(BlueprintPure, Category = "Spawning")
	FVector GetSpawnPoint();

	/** 몬스터 스폰 함수 
	* BlueprintNativeEvent: C++로 기본 작동 방식이 프로그래밍 되어있지만, Blueprint Graph로 덮어써서 보조 or 대체 가능하다
	*/
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Spawning")
	void SpawnPawns(UClass* ToSpawn, const FVector& Location);
	virtual void SpawnPawns_Implementation(UClass* ToSpawn, const FVector& Location);
};
