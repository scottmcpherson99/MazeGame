// Fill out your copyright notice in the Description page of Project Settings.


#include "Arrow.h"
#include "Gameframework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerCharacter.h"
#include "Shooter.h"
#include "GameFramework/DamageType.h"

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

void AArrow::DestroyArrow()
{
	this->Destroy();
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
		if (playerCharacter->GetHealth() > 0)
		{
			playerCharacter->LaunchCharacter((FVector(arrow->ComponentVelocity.X, arrow->ComponentVelocity.Y + 200, arrow->ComponentVelocity.Z)), false, false);

			playerCharacter->DecrementHealth(30);
			DestroyArrow();
			if (arrowHitSoundBase)
			{
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), arrowHitSoundBase, playerCharacter->GetActorLocation());
			}
		}
	}

	else if (OtherActor->IsA(Shooter))
	{

	}
	else
	{
		ProjectileMovement->SetVelocityInLocalSpace(FVector(0.0f, 0.0f, 0.0f));
		GetWorldTimerManager().SetTimer(DestroyActorTimer, this, &AArrow::DestroyArrow, 1.5f);
	}
}

// Called every frame
void AArrow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

