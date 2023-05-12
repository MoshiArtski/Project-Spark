// Fill out your copyright notice in the Description page of Project Settings.


// Fill out your copyright notice in the Description page of Project Settings.

#include "IonicSparkGameInstance.h"
#include "Blueprint/UserWidget.h"
#include "UI/MainMenu.h"
#include "UI/SettingsMenu.h"




UIonicSparkGameInstance::UIonicSparkGameInstance(const FObjectInitializer& ObjectInitializer)
{
	//Finds the MainMenu BP and sets it as var
	ConstructorHelpers::FClassFinder<UUserWidget> MainMenuBPClass(TEXT("/Game/Blueprints/UI/WBP_MainMenu"));
	if (!ensure(MainMenuBPClass.Class != nullptr)) return;

	MainMenuClass = MainMenuBPClass.Class;

	ConstructorHelpers::FClassFinder<UUserWidget> SettingsMenuBPClass(TEXT("/Game/Blueprints/UI/WBP_SettingsMenu"));
	if (!ensure(SettingsMenuBPClass.Class != nullptr)) return;

	SettingsMenuClass = SettingsMenuBPClass.Class;
}

void UIonicSparkGameInstance::Init()
{
	Super::Init();
}

void UIonicSparkGameInstance::LoadMainMenu()
{
	if (MainMenuClass == nullptr) { return; }

	MainMenu = CreateWidget<UMainMenu>(this, MainMenuClass);

	if (!ensure(MainMenu != nullptr)) { return; }
	MainMenu->AddToViewport();



	LockMouseCursor();
}

void UIonicSparkGameInstance::ToggleSettingsMenu()
{
	

	
	UE_LOG(LogTemp, Error, TEXT("Toggling settings menu"));
	if (!bSettingsMenuActive)
	{
		if (SettingsMenuClass == nullptr) { return; }
		SettingsMenu = CreateWidget<USettingsMenu>(this, SettingsMenuClass);

		if (!ensure(SettingsMenu != nullptr)) { return; }
		SettingsMenu->AddToViewport();

		bSettingsMenuActive = true;

		LockMouseCursor();

		UE_LOG(LogTemp, Error, TEXT("true"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("false"));
		SettingsMenu->RemoveFromViewport();

		bSettingsMenuActive = false;
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

void UIonicSparkGameInstance::LockMouseCursor()
{
	if (PlayerController)
	{
		FInputModeUIOnly InputMode;
		PlayerController->SetInputMode(InputMode);

		PlayerController->bShowMouseCursor = true;
	}
	else
	{
		PlayerController = GetWorld()->GetFirstPlayerController();
		LockMouseCursor();
	}
}