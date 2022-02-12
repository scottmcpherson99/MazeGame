// Fill out your copyright notice in the Description page of Project Settings.


#include "GoalPlatform.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "PlayerCharacter.h"
#include "Kismet/KismetSystemlibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"


// Sets default values
AGoalPlatform::AGoalPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	RootComponent = SceneComponent;

	Platform = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Platform"));
	Platform->SetupAttachment(SceneComponent);

	collisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	collisionSphere->SetupAttachment(Platform);
}

// Called when the game starts or when spawned
void AGoalPlatform::BeginPlay()
{
	Super::BeginPlay();
	collisionSphere->OnComponentBeginOverlap.AddDynamic(this, &AGoalPlatform::OnComponentOverlap);
}

void AGoalPlatform::OnComponentOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	if (playerCharacter)
	{
		UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, true);
	}
}

// Called every frame
void AGoalPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

