// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FierceFightingGameMode.h"
#include "FierceFightingHUD.h"
#include "FierceFightingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFierceFightingGameMode::AFierceFightingGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFierceFightingHUD::StaticClass();
}
