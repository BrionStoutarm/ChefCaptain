// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridCell.generated.h"

UCLASS()
class CHEFCAPTAIN_API AGridCell : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AGridCell();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//might make virtual later (i.e. subclassing special grid cells)
	void GetStaticMesh();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
