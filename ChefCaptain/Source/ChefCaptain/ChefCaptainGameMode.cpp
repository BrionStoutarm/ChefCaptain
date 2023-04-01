// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChefCaptainGameMode.h"
#include "ChefCaptainCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "GridCell.h"

AChefCaptainGameMode::AChefCaptainGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
