// Copyright Epic Games, Inc. All Rights Reserved.

#include "RPG_GASGameMode.h"
#include "RPG_GASCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARPG_GASGameMode::ARPG_GASGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
