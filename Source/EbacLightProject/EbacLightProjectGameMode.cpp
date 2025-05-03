// Copyright Epic Games, Inc. All Rights Reserved.

#include "EbacLightProjectGameMode.h"
#include "EbacLightProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEbacLightProjectGameMode::AEbacLightProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
