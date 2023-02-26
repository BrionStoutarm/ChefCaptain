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

void AChefCaptainGameMode::MakeGridCells() {
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 10; k++) {
			AGridCell* newCell = NewObject(this,FName("GridCell"));
		}
	}
}