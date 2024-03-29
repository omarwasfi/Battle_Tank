// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"

ATank* ATankPlayerController::GetControlledTank() const {

	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::BeginPlay(){
	Super::BeginPlay();
	auto ControlledTank = GetControlledTank();
	if (!ControlledTank) 
		UE_LOG(LogTemp, Error, TEXT("Player Controller not possesing a tank ! "))
	else
		UE_LOG(LogTemp,Warning,TEXT("Player Controller possessing: %s"), *ControlledTank->GetName())
}
