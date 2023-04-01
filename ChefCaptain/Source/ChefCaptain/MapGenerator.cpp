// Fill out your copyright notice in the Description page of Project Settings.


#include "MapGenerator.h"

// Sets default values for this component's properties
UMapGenerator::UMapGenerator()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMapGenerator::BeginPlay()
{
	for (auto i = 0; i < 5; i++) {
		for (auto j = 0; j < 5; j++) {
			FVector spawnLoc = FVector(i * 10, j*10, 0);
			FRotator spawnRot = FRotator(0);
			GetWorld()->SpawnActor<AGridCell>(AGridCell::StaticClass(), spawnLoc,spawnRot);
			//AGridCell* newCell = NewObject<AGridCell>(this, FName(TEXT("GridCell")));
		}
	}
	
}


// Called every frame
void UMapGenerator::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{

	// ...
}

