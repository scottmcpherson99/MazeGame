// Fill out your copyright notice in the Description page of Project Settings.


#include "KeyPlatform.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
AKeyPlatform::AKeyPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	RootComponent = SceneComponent;

	platformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));
	platformMesh->SetupAttachment(SceneComponent);

	TriggerVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerVolume"));
	TriggerVolume->SetupAttachment(platformMesh);
	TriggerVolume->SetCollisionProfileName(TEXT("OverlapAllDynamic"));

	keyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeyMesh"));
	keyMesh->SetupAttachment(SceneComponent);
}

// Called when the game starts or when spawned
void AKeyPlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKeyPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

