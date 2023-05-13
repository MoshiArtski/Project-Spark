// Fill out your copyright notice in the Description page of Project Settings.

#include "IonicSpark/UI/MainMenu.h"
#include "IonicSpark/IonicSparkGameInstance.h"
#include "Components/Button.h"



UMainMenu::UMainMenu(const FObjectInitializer& ObjectInitializer) :UUserWidget(ObjectInitializer)
{

}

bool UMainMenu::Initialize()
{
	bool Success = Super::Initialize();

	if (!Success) { UE_LOG(LogTemp,Error,TEXT("MainMenu failed to initialize")) return false; }

	if (PlayButton == nullptr) return false;
	PlayButton->OnClicked.AddDynamic(this, &UMainMenu::PlayButtonPressed);

	if (QuitButton == nullptr) return false;
	QuitButton->OnClicked.AddDynamic(this, &UMainMenu::QuitButtonPressed);

	if (SettingsButton == nullptr) return false;
	SettingsButton->OnClicked.AddDynamic(this, &UMainMenu::SettingsButtonPressed);

	if (BackButton == nullptr) return false;
	BackButton->OnClicked.AddDynamic(this, &UMainMenu::BackButtonPressed);

	if (HostButton == nullptr) return false;
	HostButton->OnClicked.AddDynamic(this, &UMainMenu::HostButtonPressed);

	GameInstance = Cast<UIonicSparkGameInstance>(GetGameInstance());




	MenuSwitcher->RemoveChildAt(1);

	// Insert the widget at the new index
	MenuSwitcher->InsertChildAt(2, LobbyMenu);



	return true;
}



void UMainMenu::PlayButtonPressed()
{
	MenuSwitcher->SetActiveWidget(LobbyMenu);
}

void UMainMenu::HostButtonPressed()
{
	if (GameInstance == nullptr) { return; }
	GameInstance->Host();
}

void UMainMenu::SettingsButtonPressed()
{
	GameInstance->ToggleSettingsMenu();
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


void UMainMenu::ToggleMenuSwitcher()
{
	UE_LOG(LogTemp, Warning, TEXT("Switching widgets"));
	MenuSwitcher->SetActiveWidgetIndex(MenuSwitcher->GetActiveWidgetIndex() / 2);
}
