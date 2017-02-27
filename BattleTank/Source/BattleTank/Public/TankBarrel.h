// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

class ATank;
/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), hidecategories = ("Collision"))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	void Elevate(float DegreesPerSecond);

	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxDegreesPerSecond = 5;//TODO set

	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxElevationDegrees = 40;//TODO set

	UPROPERTY(EditAnywhere, Category = Setup)
	float MinElevationDegrees = 0;//TODO set
};