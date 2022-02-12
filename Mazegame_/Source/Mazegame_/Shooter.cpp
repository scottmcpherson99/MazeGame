// Fill out your copyright notice in the Description page of Project Settings.


#include "Shooter.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "PlayerCharacter.h"
#include "Arrow.h"

// Sets default values
AShooter::AShooter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	RootComponent = SceneComponent;

	shooterMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShooterMesh"));
	shooterMesh->SetupAttachment(SceneComponent);


	ArrowSpawn = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowSpawn"));
	ArrowSpawn->SetupAttachment(shooterMesh);

	bDoOnce = true;
}

// Called when the game starts or when spawned
void AShooter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AShooter::ShootArrow()
{
	
	AArrow* arrow_ = GetWorld()->SpawnActor<AArrow>(arrow, ArrowSpawn->GetComponentTransform());
	bDoOnce = false;
	GetWorldTimerManager().SetTimer(resetDoOnce, this, &AShooter::ResetDoOncetimer, 2.0f, false);
	
	GetWorldTimerManager().ClearTimer(shootArrowTimer);
}

void AShooter::ResetDoOncetimer()
{
	bDoOnce = true;
	GetWorldTimerManager().ClearTimer(resetDoOnce);
}

// Called every frame
void AShooter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TArray<AActor*> Tarrows;
	FHitResult hitActor;

	FVector shooterMeshSource = FVector(shooterMesh->GetComponentLocation().X, shooterMesh->GetComponentLocation().Y + 50.f, shooterMesh->GetComponentLocation().Z + 130.f);

	UKismetSystemLibrary::SphereTraceSingle(GetWorld(), ArrowSpawn->GetComponentLocation(), ArrowSpawn->GetComponentLocation() + (UKismetMathLibrary::GetForwardVector(ArrowSpawn->GetComponentRotation()) * 3000.f), 10.0f, UEngineTypes::ConvertToTraceType(ECC_Camera), false, Tarrows, EDrawDebugTrace::None, hitActor, true);
	
	if (hitActor.GetActor() == UGameplayStatics::GetPlayerCharacter(GetWorld(), 0))
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerLocated"));

		if (bDoOnce == true)
		{
			GetWorldTimerManager().SetTimer(shootArrowTimer, this, &AShooter::ShootArrow, 0.01f, false);
		}
	}
}

