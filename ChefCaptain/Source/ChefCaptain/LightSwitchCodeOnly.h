// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LightSwitchCodeOnly.generated.h"

UCLASS()
class CHEFCAPTAIN_API ALightSwitchCodeOnly : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = "Switch Components")
	class UPointLightComponent* PointLight1;

	UPROPERTY(VisibleAnywhere, Category = "Switch Components")
	class USphereComponent* Sphere1;

	UPROPERTY(VisibleAnywhere, Category = "Switch Variables", meta = (DisplayName = "TESTIntensity", UIMin = "0.0", UIMax = "20.0", ShouldShowInViewport = true))
		float DesiredIntensity;

	// Sets default values for this actor's properties
	ALightSwitchCodeOnly();

	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent *OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
		void ToggleLight();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
