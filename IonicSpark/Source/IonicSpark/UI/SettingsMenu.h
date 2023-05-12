// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SettingsMenu.generated.h"

/**
 *
 */
UCLASS()
class IONICSPARK_API USettingsMenu : public UUserWidget
{
	GENERATED_BODY()


protected:

	virtual bool Initialize();

private:

	UPROPERTY()
	class UIonicSparkGameInstance* GameInstance;


	//Back Button
	UPROPERTY(meta = (BindWidget))
	class UButton* BackButton;

	UFUNCTION()
	void OnBackButtonPressed();
	//



	//Mouse sens slider
	UPROPERTY(meta = (BindWidget))
	class USlider* MouseSensSlider;

	UFUNCTION()
	void SetMouseSens();
	//

};