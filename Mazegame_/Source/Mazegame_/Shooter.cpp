// Fill out your copyright notice in the Description page of Project Settings.


#include "Shooter.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

// Sets default values
AShooter::AShooter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	RootComponent = SceneComponent;

	shooterMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShooterMesh"));
	shooterMesh->SetupAttachment(SceneComponent);

	ArrowSource = CreateDefaultSubobject<USceneComponent>(TEXT("ArrowSource"));
}

// Called when the game starts or when spawned
void AShooter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShooter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

