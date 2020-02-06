// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "MyTriggerVolume.generated.h"

/**
 * 
 */
UCLASS()
class THESCREENING_API AMyTriggerVolume : public ATriggerVolume
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere)
	ATriggerVolume* PressurePlate;
};
