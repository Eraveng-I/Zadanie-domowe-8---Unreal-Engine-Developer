// Copyright Epic Games, Inc. All Rights Reserved.

#include "NiszczycielGameMode.h"
#include "NiszczycielCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANiszczycielGameMode::ANiszczycielGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
