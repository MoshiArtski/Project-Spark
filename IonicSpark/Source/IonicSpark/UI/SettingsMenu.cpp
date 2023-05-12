// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/Slider.h"
#include "IonicSpark/IonicSparkGameInstance.h"
#include "Components/Button.h"

#include "SettingsMenu.h"


bool USettingsMenu::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success) return false;


	//Bind Widgets
	if (MouseSensSlider == nullptr) return false;
	MouseSensSlider->OnMouseCaptureEnd.AddDynamic(this, &USettingsMenu::SetMouseSens);

	if (BackButton == nullptr) return false;
	BackButton->OnClicked.AddDynamic(this, &USettingsMenu::OnBackButtonPressed);
	//

	GameInstance = Cast<UIonicSparkGameInstance>(GetGameInstance());


	return true;
}

void USettingsMenu::SetMouseSens()
{
	if (GameInstance == nullptr) return;
	GameInstance->UpdateMouseSens(MouseSensSlider->GetValue());
}


void USettingsMenu::OnBackButtonPressed()
{
	if (GameInstance == nullptr) return;
	GameInstance->ToggleSettingsMenu();
}
