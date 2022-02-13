// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class MAZEGAME__API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* camera;

	bool bDoOnce;

	void ResetDoOnce();

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float value_);

	void MoveRight(float value_);

	void Turn(float value_);

	void LookUp(float value_);

	void CollectKey();


	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Health")
		float health;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Keys")
		float NumberOfKeys;

	UPROPERTY()
		FTimerHandle resetDoOnce;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
		USoundBase* footstepSoundBase;

	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	float GetHealth();

	void DecrementHealth(float value_);

	void ChangeKeyValue(float value_);

	class AActor* currentKey;
};
