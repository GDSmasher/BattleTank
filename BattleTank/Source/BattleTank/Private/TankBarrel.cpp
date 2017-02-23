// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankBarrel.h"


void UTankBarrel::Elevate(float DegreesPerSecond)
{
	UE_LOG(LogTemp, Warning, TEXT("Deu Bom: %f"), DegreesPerSecond);

	//Move the barrel the right amount in this frame
	//Give a max elevation speed, at the frame time
}

