// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"//.generated Must be the last include

class ATank;


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
	UPROPERTY(EditDefaultsOnly)
	float CroosHairXLocation = 0.5;

	UPROPERTY(EditDefaultsOnly)
	float CroosHairYLocation = 0.3333;

	UPROPERTY(EditDefaultsOnly)
	float LineTraceRange = 1000000;

	//Start the movement of the barrel with the aiming dot
	void AimTowardsCrossHair();

	bool GetSightRayHitLocation(FVector& HitLocation) const;

	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;

	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;
};


