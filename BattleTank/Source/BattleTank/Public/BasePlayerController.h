// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"
#include "BasePlayerController.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class BATTLETANK_API ABasePlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	void SetPawn(APawn* InPawn) override;

	UFUNCTION(BlueprintImplementableEvent)
	void OnSetPawn_BP(APawn* InPawn);

	UFUNCTION(BlueprintCallable)
	void StartSpectatingOnly() override;
	
	
};
