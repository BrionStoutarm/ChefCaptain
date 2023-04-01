// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GridCell.h"
#include <string>
#include "Engine/World.h"
#include "MapGenerator.generated.h"



using namespace::std;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CHEFCAPTAIN_API UMapGenerator : public UActorComponent
{
	GENERATED_BODY()


public:	
	// Sets default values for this component's properties
	UMapGenerator();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
