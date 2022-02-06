// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	RootComponent = SceneComponent;

	doorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	doorMesh->SetupAttachment(SceneComponent);

	Keyhole = CreateDefaultSubobject<USceneComponent>(TEXT("Keyhole"));
	Keyhole->SetupAttachment(doorMesh);

	TriggerVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerVolume"));
	TriggerVolume->SetupAttachment(SceneComponent);
	TriggerVolume->SetBoxExtent(FVector(5.0f, 5.25f, 6.25f));
	TriggerVolume->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

