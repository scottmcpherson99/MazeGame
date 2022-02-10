// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "HeadsUpDisplay.generated.h"

/**
 * 
 */
UCLASS()
class MAZEGAME__API UHeadsUpDisplay : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(BlueprintReadWrite, meta = (Bindwidget))
		class UTextBlock* HealthBox;
public:
	void UpdateHealth();
};
