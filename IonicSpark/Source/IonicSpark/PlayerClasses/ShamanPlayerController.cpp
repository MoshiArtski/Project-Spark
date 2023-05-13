// Fill out your copyright notice in the Description page of Project Settings.


#include "ShamanPlayerController.h"
#include "IonicSpark/IonicSparkGameInstance.h"
#include "IonicSpark/UI/MainMenu.h"


AShamanPlayerController::AShamanPlayerController(const FObjectInitializer& ObjectInitializer)
{

}

void AShamanPlayerController::BeginPlay()
{
	Super::BeginPlay();

	GameInstance = Cast<UIonicSparkGameInstance>(GetGameInstance());
}



void AShamanPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	FInputActionBinding& NavigateMenus = InputComponent->BindAction(TEXT("NavigateMenus"), IE_Pressed, this, &AShamanPlayerController::NavigateMenus);
	NavigateMenus.bExecuteWhenPaused = true;
}

void AShamanPlayerController::NavigateMenus()
{
	UE_LOG(LogTemp, Error, TEXT("exiting menu"));
	if (GameInstance == nullptr) { return; }


	if (GameInstance->bSettingsMenuActive)
	{
		GameInstance->ToggleSettingsMenu();
		
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("exiting menu"));
		GameInstance->MainMenu->ToggleMenuSwitcher();
	}
	
}
