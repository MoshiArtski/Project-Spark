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
	//PlayerController = GetWorld()->GetFirstPlayerController();
}

void UIonicSparkGameInstance::LoadMainMenu()
{
	UE_LOG(LogTemp, Error, TEXT(" LOADING"));
	if (MainMenuClass == nullptr) { UE_LOG(LogTemp, Error, TEXT("NOT LOADING")); return; }



	MainMenu = CreateWidget<UMainMenu>(this, MainMenuClass);

	if (!ensure(MainMenu != nullptr)) { return; }
	UE_LOG(LogTemp, Error, TEXT(" LOADING MainMenu"));
	MainMenu->AddToViewport();



	if (PlayerController)
	{
		FInputModeUIOnly InputMode;
		InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::LockOnCapture);
		PlayerController->SetInputMode(InputMode);

		PlayerController->bShowMouseCursor = true;
	}
}

void UIonicSparkGameInstance::ToggleSettingsMenu()
{

	if (!bSettingsMenuActive)
	{
		if (SettingsMenuClass == nullptr) { return; }


		SettingsMenu = CreateWidget<USettingsMenu>(this, SettingsMenuClass);

		if (!ensure(SettingsMenu != nullptr)) { return; }
		SettingsMenu->AddToViewport();

		if (PlayerController)
		{
			FInputModeUIOnly InputMode;
			//InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
			PlayerController->SetInputMode(InputMode);

			PlayerController->bShowMouseCursor = true;
		}
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