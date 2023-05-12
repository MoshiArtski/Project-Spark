// Fill out your copyright notice in the Description page of Project Settings.


// Fill out your copyright notice in the Description page of Project Settings.

#include "IonicSparkGameInstance.h"
#include "Blueprint/UserWidget.h"




UIonicSparkGameInstance::UIonicSparkGameInstance(const FObjectInitializer& ObjectInitializer)
{
	//Finds the MainMenu BP and sets it as var
	ConstructorHelpers::FClassFinder<UUserWidget> MainMenuBPClass(TEXT("/Game/Blueprints/UI/WBP_MainMenu"));
	if (!ensure(MainMenuBPClass.Class != nullptr)) return;

	MainMenuClass = MainMenuBPClass.Class;

	ConstructorHelpers::FClassFinder<UUserWidget> OptionsMenuBPClass(TEXT("/Game/Blueprints/UI/WBP_OptionsMenu"));
	if (!ensure(OptionsMenuBPClass.Class != nullptr)) return;

	OptionsMenuClass = OptionsMenuBPClass.Class;
}

void UIonicSparkGameInstance::Init()
{
	PlayerController = GetWorld()->GetFirstPlayerController();
}

void UIonicSparkGameInstance::LoadMainMenu()
{
	if (MainMenuClass == nullptr) { return; }



	MainMenu = CreateWidget<UMainMenu>(this, MainMenuClass);

	if (!ensure(MainMenu != nullptr)) { return; }
	MainMenu->AddToViewport();


	if (PlayerController)
	{
		FInputModeUIOnly InputMode;
		InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
		PlayerController->SetInputMode(InputMode);

		PlayerController->bShowMouseCursor = true;
	}
}

void UIonicSparkGameInstance::ToggleOptionsMenu()
{

	if (!bOptionsMenuActive)
	{
		if (OptionsMenuClass == nullptr) { return; }


		OptionsMenu = CreateWidget<UOptionsMenu>(this, OptionsMenuClass);

		if (!ensure(OptionsMenu != nullptr)) { return; }
		OptionsMenu->AddToViewport();
	}
	return;
}

void UIonicSparkGameInstance::UpdateMouseSens(float NewMouseSens)
{
	if (PlayerController)
	{
		PlayerController->PlayerInput->SetMouseSensitivity(NewMouseSens); //Sets the speed of the actual cursor
	}
}