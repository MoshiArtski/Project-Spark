// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/Slider.h"
#include "IonicSpark/IonicSparkGameInstance.h"
#include "OptionsMenu.h"



bool UOptionsMenu::Initialize()
{

	if (MouseSensSlider == nullptr) return false;
	MouseSensSlider->OnMouseCaptureEnd.AddDynamic(this, &UOptionsMenu::SetMouseSens);


	GameInstance = Cast<UIonicSparkGameInstance>(GetGameInstance());


	return true;
}

void UOptionsMenu::SetMouseSens()
{
	if (GameInstance == nullptr) { return; }
	GameInstance->UpdateMouseSens(MouseSensSlider->Value);
}
