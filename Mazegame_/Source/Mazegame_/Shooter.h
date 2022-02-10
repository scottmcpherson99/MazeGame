// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ArrowComponent.h"
#include "Shooter.generated.h"

UCLASS()
class MAZEGAME__API AShooter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShooter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		class USceneComponent* SceneComponent;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "ShooterMesh")
		class UStaticMeshComponent* shooterMesh;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		UArrowComponent* ArrowSpawn;

	void ShootArrow();

	void ResetDoOncetimer();

	bool bDoOnce;

	UPROPERTY()
		FTimerHandle resetDoOnce;

	UPROPERTY()
		FTimerHandle shootArrowTimer;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Arrow")
		TSubclassOf<class AArrow> arrow;
};
