// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DeveloperMenu.generated.h"

/**
 * 
 */
UCLASS()
class IONICSPARK_API UDeveloperMenu : public UUserWidget
{
	GENERATED_BODY()
	

protected:

	virtual bool Initialize();

private:

	UPROPERTY()
	class UIonicSparkGameInstance* GameInstance;

	UPROPERTY(meta = (BindWidget))
	class UButton* SoundTestButton;

	UPROPERTY(EditAnywhere)
	USoundBase* TestSound;

	UFUNCTION()
	void SoundTestButtonPressed();

};
