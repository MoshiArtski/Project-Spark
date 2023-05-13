// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ShamanPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class IONICSPARK_API AShamanPlayerController : public APlayerController
{
	GENERATED_BODY()
	

public:

	AShamanPlayerController(const FObjectInitializer& ObjectInitializer);

protected:

	virtual void SetupInputComponent() override;

	virtual void BeginPlay() override;

private:

	UPROPERTY()
	class UIonicSparkGameInstance* GameInstance;

	UFUNCTION()
	void NavigateMenus();
};
