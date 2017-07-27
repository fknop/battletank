// Fill out your copyright notice in the Description page of Project Settings.

#include "TankMovementComponent.h"



void UTankMovementComponent::RequestDirectMove(const FVector& MoveVelocity, bool bForceMaxSpeed) {
	this->OnRequestDirectMove(MoveVelocity, bForceMaxSpeed);
}

