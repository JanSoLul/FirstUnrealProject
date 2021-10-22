// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerPlate.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ATriggerPlate::ATriggerPlate()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	RootComponent = TriggerBox;
	TriggerBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);			// 충돌 계산 없이 overlap 체크
	TriggerBox->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);
	TriggerBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);								// 모든 Channel에 대한 충돌 response 무시
	TriggerBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);	// -> Pawn에 대한 충돌만 응답하도록 설정

	TriggerBox->SetBoxExtent(FVector(50.f, 50.f, 30.f));

	TriggerPlate = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TriggerPlate"));
	TriggerPlate->SetupAttachment(GetRootComponent());

	Door = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door"));
	Door->SetupAttachment(GetRootComponent());

	SwitchTime = 2.5f;

	bCharacterOnPlate = false;
}

// Called when the game starts or when spawned
void ATriggerPlate::BeginPlay()
{
	Super::BeginPlay();

	// 이벤트 설정
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ATriggerPlate::OnOverlapBegin);
	TriggerBox->OnComponentEndOverlap.AddDynamic(this, &ATriggerPlate::OnOverlapEnd);

	InitialDoorLocation = Door->GetComponentLocation();
	InitialPlateLocation = TriggerPlate->GetComponentLocation();
}

// Called every frame
void ATriggerPlate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATriggerPlate::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	UE_LOG(LogTemp, Warning, TEXT("Overlap Begin."));
	if (!bCharacterOnPlate)
		bCharacterOnPlate = true;
	UpperDoor();
	LowerPlate();
}

// overlap 끝나면 Timer 설정
void ATriggerPlate::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
	UE_LOG(LogTemp, Warning, TEXT("Overlap End."));
	if (bCharacterOnPlate)
		bCharacterOnPlate = false;
	GetWorldTimerManager().SetTimer(SwitchHandle, this, &ATriggerPlate::CloseDoor, SwitchTime);
}

void ATriggerPlate::UpdateDoorLocation(float Z) {
	FVector NewLocation = InitialDoorLocation + FVector(0.f, 0.f, Z);
	Door->SetWorldLocation(NewLocation);
}

void ATriggerPlate::UpdatePlateLocation(float Z) {
	FVector NewLocation = InitialPlateLocation + FVector(0.f, 0.f, Z);
	TriggerPlate->SetWorldLocation(NewLocation);
}

void ATriggerPlate::CloseDoor() {
	if (!bCharacterOnPlate) {
		LowerDoor();
		UpperPlate();
	}
}


