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

	/** Spawn�� Pawn */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawning")
	TSubclassOf<class ACritter> PawnToSpawn;

	/** ���� �����ϴ� ���� �ڽ� */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning")
	class UBoxComponent* SpawningBox;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Spawn ��ġ */
	UFUNCTION(BlueprintPure, Category = "Spawning")
	FVector GetSpawnPoint();

	/** ���� ���� �Լ� 
	* BlueprintNativeEvent: C++�� �⺻ �۵� ����� ���α׷��� �Ǿ�������, Blueprint Graph�� ����Ἥ ���� or ��ü �����ϴ�
	*/
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Spawning")
	void SpawnPawns(UClass* ToSpawn, const FVector& Location);
	virtual void SpawnPawns_Implementation(UClass* ToSpawn, const FVector& Location);
};
