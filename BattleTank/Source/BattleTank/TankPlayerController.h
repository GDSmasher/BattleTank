// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"//.generated Must be the last include


/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ATank* GetControlledTank() const;

	virtual void Tick(float DeltaSeconds) override;

	virtual void BeginPlay() override;

private:
	//Start the movement of the barrel with the aiming dot
	void AimTowardsCrossHair();

	bool GetSightRayHitLocation(FVector& HitLocation) const;
};


