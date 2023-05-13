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

public:



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



	//Sliders
	UPROPERTY(meta = (BindWidget))
	class USlider* MouseSensSlider;

	UFUNCTION()
	void SetMouseSens();

	UPROPERTY(meta = (BindWidget))
	class USlider* MusicVolumeSlider;

	UFUNCTION()
	void SetMusicVolume();
	//






	//=====================Controls & Key Selectors======================//
																		 //
	class UInputSettings* InputSettings;								 //
																		 //
	UPROPERTY(meta = (BindWidget))										 //
	class UInputKeySelector* MenuNavigationKeySelector;					 //
																		 //
																		 //
																		 //
																		 //
																		 //
																		 //
																		 //
	UFUNCTION()															 //
	void OnMenuNavigationKeySlected(FInputChord SelectedKey);			 //
																		 //
	UFUNCTION()															 //
	void RemapActionKey(FInputChord SelectedKey, FName ActionName);		 //
																		 //
	UFUNCTION()															 //
	FInputActionKeyMapping GetInputActionMap(FName ActionName);			 //
																		 //
	UFUNCTION()															 //
	FText GetNoKeySpecifiedText(FString ActionString);					 //
																		 //
	//===================================================================//

};