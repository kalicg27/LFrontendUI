// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LFrontendPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class LFRONTENDUI_API ALFrontendPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	//~ Begin APlayerController Interface;
	virtual void OnPossess(APawn* aPawn) override;
	//~ End APlayerController Interface;
};
