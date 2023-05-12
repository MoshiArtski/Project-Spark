// Fill out your copyright notice in the Description page of Project Settings.

#include "MainMenu.h"
#include "IonicSpark/IonicSparkGameInstance.h"



UMainMenu::UMainMenu(const FObjectInitializer& ObjectInitializer) :UUserWidget(ObjectInitializer)
{

}

bool UMainMenu::Initialize()
{
	bool Success = Super::Initialize();

	if (!Success) return false;

	if (PlayButton == nullptr) return false;
	PlayButton->OnClicked.AddDynamic(this, &UMainMenu::PlayButtonPressed);

	if (QuitButton == nullptr) return false;
	QuitButton->OnClicked.AddDynamic(this, &UMainMenu::QuitButtonPressed);

	if (SettingsButton == nullptr) return false;
	SettingsButton->OnClicked.AddDynamic(this, &UMainMenu::SettingsButtonPressed);

	if (BackButton == nullptr) return false;
	BackButton->OnClicked.AddDynamic(this, &UMainMenu::BackButtonPressed);

	GameInstance = Cast<UIonicSparkGameInstance>(GetGameInstance());

	return true;
}

void UMainMenu::PlayButtonPressed()
{
	MenuSwitcher->SetActiveWidget(LobbyMenu);
}


void UMainMenu::SettingsButtonPressed()
{
	GameInstance->ToggleOptionsMenu();
}


void UMainMenu::QuitButtonPressed()
{
	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!ensure(PlayerController != nullptr)) return;

	PlayerController->ConsoleCommand("quit");
}



void UMainMenu::BackButtonPressed()
{
	MenuSwitcher->SetActiveWidget(MainMenu);
}