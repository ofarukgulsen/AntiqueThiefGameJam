// Copyright Epic Games, Inc. All Rights Reserved.

#include "AntiqueThiefGameMode.h"
#include "AntiqueThiefCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAntiqueThiefGameMode::AAntiqueThiefGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
