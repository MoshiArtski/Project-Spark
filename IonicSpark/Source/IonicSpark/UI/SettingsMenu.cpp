// Fill out your copyright notice in the Description page of Project Settings.


#include "IonicSpark/IonicSparkGameInstance.h"


#include "Components/Slider.h"
#include "Components/Button.h"
#include "Components/InputKeySelector.h"

#include "GameFramework/InputSettings.h"
#include "Framework/Commands/InputChord.h"

#include "SettingsMenu.h"



bool USettingsMenu::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success) return false;


	//Bind Widgets
	if (MouseSensSlider == nullptr) return false;
	MouseSensSlider->OnMouseCaptureEnd.AddDynamic(this, &USettingsMenu::SetMouseSens);

	if (MusicVolumeSlider == nullptr) return false;
	MusicVolumeSlider->OnMouseCaptureEnd.AddDynamic(this, &USettingsMenu::SetMusicVolume);

	if (BackButton == nullptr) return false;
	BackButton->OnClicked.AddDynamic(this, &USettingsMenu::OnBackButtonPressed);
	//


	//========================================Key selectors===============================================//
																										  //
	InputSettings = UInputSettings::GetInputSettings();													  //
																										  //
	if (MenuNavigationKeySelector == nullptr) return false;												  //
	MenuNavigationKeySelector->OnKeySelected.AddDynamic(this, &USettingsMenu::OnMenuNavigationKeySlected);//
																										  //
	MenuNavigationKeySelector->SetNoKeySpecifiedText(GetNoKeySpecifiedText("NavigateMenus"));		      //
																								          //
	//====================================================================================================//


	GameInstance = Cast<UIonicSparkGameInstance>(GetGameInstance());


	return true;
}


void USettingsMenu::SetMouseSens()
{
	if (GameInstance == nullptr) return;
	GameInstance->UpdateMouseSens(MouseSensSlider->GetValue());
}


void USettingsMenu::SetMusicVolume()
{
	if (GameInstance == nullptr) return;
	GameInstance->UpdateMusicVolume(MusicVolumeSlider->GetValue());
}


void USettingsMenu::OnBackButtonPressed()
{
	if (GameInstance == nullptr) return;
	GameInstance->ToggleSettingsMenu();
}







//===========================================================Input Key selector functions=========================================

void USettingsMenu::OnMenuNavigationKeySlected(FInputChord SelectedKey)
{
	FName NavigateMenus = "NavigateMenus";
	RemapActionKey(SelectedKey,NavigateMenus); //Call RemapActionKey with action to remap as a string,second param
}


void USettingsMenu::RemapActionKey(FInputChord SelectedKey, FName ActionName)
{


	FInputActionKeyMapping ActionToRemap = GetInputActionMap(ActionName);//Store the specific action


	InputSettings->RemoveActionMapping(ActionToRemap); // Remove Mapping
	ActionToRemap.Key = SelectedKey.Key; // Switch the key
	InputSettings->AddActionMapping(ActionToRemap); // Re-Add the Mapping
	InputSettings->ForceRebuildKeymaps();// Rebuild all Mappings
}

FText USettingsMenu::GetNoKeySpecifiedText(FString ActionString)
{
	FName ActionName = FName(ActionString);
	FText NoKeySpecifiedText = FText::FromString(GetInputActionMap(ActionName).Key.ToString());

	return NoKeySpecifiedText;
}


FInputActionKeyMapping USettingsMenu::GetInputActionMap(FName ActionName)
{
	if (InputSettings == nullptr) { return FInputActionKeyMapping(); }
	TArray<FInputActionKeyMapping> ActionMappingArray;

	InputSettings->GetActionMappingByName(ActionName, ActionMappingArray); // look for action by name & store in TArray


	if (ActionMappingArray.Num() >= 0)
	{
		return ActionMappingArray[0];
	}
	else
	{
		return FInputActionKeyMapping();
	}
}