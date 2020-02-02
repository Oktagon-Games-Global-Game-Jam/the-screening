// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "thescreeningGameMode.h"
#include "thescreeningPlayerController.h"
#include "thescreeningCharacter.h"
#include "UObject/ConstructorHelpers.h"

AthescreeningGameMode::AthescreeningGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AthescreeningPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		// DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}