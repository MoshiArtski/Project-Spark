// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/Slider.h"
#include "IonicSpark/IonicSparkGameInstance.h"

#include "SettingsMenu.h"


bool USettingsMenu::Initialize()
{

	if (MouseSensSlider == nullptr) return false;
	MouseSensSlider->OnMouseCaptureEnd.AddDynamic(this, &USettingsMenu::SetMouseSens);


	GameInstance = Cast<UIonicSparkGameInstance>(GetGameInstance());


	return true;
}

void USettingsMenu::SetMouseSens()
{
	GameInstance->UpdateMouseSens(MouseSensSlider->Value);
}

