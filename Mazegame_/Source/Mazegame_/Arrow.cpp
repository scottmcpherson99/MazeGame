// Fill out your copyright notice in the Description page of Project Settings.


#include "Arrow.h"
#include "Gameframework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerCharacter.h"

// Sets default values
AArrow::AArrow()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));

	collisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	RootComponent = collisionSphere;

	arrow = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Arrow"));
	arrow->SetupAttachment(collisionSphere);
}

// Called when the game starts or when spawned
void AArrow::BeginPlay()
{
	Super::BeginPlay();
	
	collisionSphere->OnComponentBeginOverlap.AddDynamic(this, &AArrow::OnComponentOverlap);
}

void AArrow::OnComponentOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	if (playerCharacter)
	{
		UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, true);
	}
}

// Called every frame
void AArrow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

