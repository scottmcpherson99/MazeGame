// Fill out your copyright notice in the Description page of Project Settings.


#include "KeyPlatform.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "PlayerCharacter.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

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
	TriggerVolume->OnComponentBeginOverlap.AddDynamic(this, &AKeyPlatform::OnComponentOverlap);
	TriggerVolume->OnComponentEndOverlap.AddDynamic(this, &AKeyPlatform::OnComponentEndOverlap);
}

void AKeyPlatform::OnComponentOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	if (playerCharacter)
	{
		playerCharacter->currentKey = this;

		UE_LOG(LogTemp, Warning, TEXT("Player Begun Overlap"));
	}
}

void AKeyPlatform::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	if (playerCharacter)
	{
		playerCharacter->currentKey = NULL;
		UE_LOG(LogTemp, Warning, TEXT("Player End Overlap"));

	}
}

// Called every frame
void AKeyPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AKeyPlatform::DestroyKey()
{
	UE_LOG(LogTemp, Warning, TEXT("Input Worked!"));

	if (keyMesh != nullptr)
	{
		keyMesh->DestroyComponent(false);
		keyMesh = nullptr;
		return true;
	}	
	else
	{
		return false;
	}
}

