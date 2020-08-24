// Copyright Epic Games, Inc. All Rights Reserved.

#include "cppTest13GameMode.h"
#include "cppTest13Character.h"
#include "UObject/ConstructorHelpers.h"

AcppTest13GameMode::AcppTest13GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
