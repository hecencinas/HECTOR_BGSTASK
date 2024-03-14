// Copyright Epic Games, Inc. All Rights Reserved.

#include "HECTOR_BGSTASKGameMode.h"
#include "HECTOR_BGSTASKCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHECTOR_BGSTASKGameMode::AHECTOR_BGSTASKGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
