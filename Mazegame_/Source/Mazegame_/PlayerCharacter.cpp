// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

void APlayerCharacter::ResetDoOnce()
{
	if (resetDoOnce.IsValid())
	{
		GetWorldTimerManager().ClearTimer(resetDoOnce);
	}
	bDoOnce = true;
}

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	camera->bUsePawnControlRotation = false;
	camera->SetupAttachment(GetRootComponent());

	health = 100;
	bDoOnce = true;
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}


void APlayerCharacter::MoveForward(float value_)
{
	AddMovementInput(camera->GetForwardVector(), value_);

	if (value_ != 0.0f)
	{
		if (bDoOnce)
		{
			GetWorldTimerManager().SetTimer(resetDoOnce, this, &APlayerCharacter::ResetDoOnce, 0.5f, false);
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), footstepSoundBase, camera->GetComponentLocation());
			bDoOnce = false;
		}
	}
}

void APlayerCharacter::MoveRight(float value_)
{
	if (value_ != 0.0f)
	{
		AddMovementInput(camera->GetRightVector(), value_);
		if (bDoOnce)
		{
			GetWorldTimerManager().SetTimer(resetDoOnce, this, &APlayerCharacter::ResetDoOnce, 0.5f, false);
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), footstepSoundBase, camera->GetComponentLocation());
			bDoOnce = false;
		}
	}
}

void APlayerCharacter::Turn(float value_)
{
	AddControllerYawInput(value_);
}

void APlayerCharacter::LookUp(float value_)
{
	AddControllerPitchInput(value_);
}

float APlayerCharacter::GetHealth()
{
	return health;
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APlayerCharacter::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &APlayerCharacter::LookUp);
}

