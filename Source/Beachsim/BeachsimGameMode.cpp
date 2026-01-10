// Copyright Epic Games, Inc. All Rights Reserved.

#include "BeachsimGameMode.h"
#include "BeachsimCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABeachsimGameMode::ABeachsimGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
