// Copyright Epic Games, Inc. All Rights Reserved.

#include "first_proGameMode.h"
#include "first_proCharacter.h"
#include "UObject/ConstructorHelpers.h"

Afirst_proGameMode::Afirst_proGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
