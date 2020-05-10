// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MortemGameMode.h"
#include "MortemHUD.h"
#include "MortemCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMortemGameMode::AMortemGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	//DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMortemHUD::StaticClass();
}
