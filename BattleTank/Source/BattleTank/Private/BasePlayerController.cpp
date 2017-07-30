// Fill out your copyright notice in the Description page of Project Settings.

#include "BasePlayerController.h"



void ABasePlayerController::SetPawn(APawn* InPawn) {
	Super::SetPawn(InPawn);
	OnSetPawn_BP(InPawn);
}

void ABasePlayerController::StartSpectatingOnly() {
	Super::StartSpectatingOnly();
}

