// Fill out your copyright notice in the Description page of Project Settings.


// Fill out your copyright notice in the Description page of Project Settings.

#include "IonicSparkGameInstance.h"
#include "Blueprint/UserWidget.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "OnlineSessionSettings.h"

#include "UI/MainMenu.h"
#include "UI/SettingsMenu.h"
#include "UI/DeveloperMenu.h"


const static FName SessionName = TEXT("Ionic Session");

UIonicSparkGameInstance::UIonicSparkGameInstance(const FObjectInitializer& ObjectInitializer)
{
	//Finds the MainMenu BP and sets it as var
	ConstructorHelpers::FClassFinder<UUserWidget> MainMenuBPClass(TEXT("/Game/Blueprints/UI/WBP_MainMenu"));
	if (!ensure(MainMenuBPClass.Class != nullptr)) return;

	MainMenuClass = MainMenuBPClass.Class;

	ConstructorHelpers::FClassFinder<UUserWidget> SettingsMenuBPClass(TEXT("/Game/Blueprints/UI/WBP_SettingsMenu"));
	if (!ensure(SettingsMenuBPClass.Class != nullptr)) return;

	SettingsMenuClass = SettingsMenuBPClass.Class;

	ConstructorHelpers::FClassFinder<UUserWidget> DeveloperMenuBPClass(TEXT("/Game/Blueprints/UI/WBP_DeveloperMenu"));
	if (!ensure(DeveloperMenuBPClass.Class != nullptr)) return;

	DeveloperMenuClass = DeveloperMenuBPClass.Class;
}

void UIonicSparkGameInstance::Init()
{
	Super::Init();

	IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get();

	if (Subsystem != nullptr) {

		SessionInterface = Subsystem->GetSessionInterface();

		if (SessionInterface.IsValid())
		{

			SessionInterface->OnCreateSessionCompleteDelegates.AddUObject(this, &UIonicSparkGameInstance::OnCreateSessionComplete);
			SessionInterface->OnDestroySessionCompleteDelegates.AddUObject(this, &UIonicSparkGameInstance::OnDestroySessionComplete);

		}
	}
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
		SettingsMenu->RemoveFromParent();

		bSettingsMenuActive = false;
	}
	return;
}

//Locks the mouse cursor so it cannot disappear when clicking on a widget.
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


void UIonicSparkGameInstance::Host()
{
	if (SessionInterface.IsValid())
	{
		auto ExistingSession = SessionInterface->GetNamedSession(SessionName);
		if (ExistingSession != nullptr)
		{
			SessionInterface->DestroySession(SessionName);
		}
		else
		{
			CreateSession();
		}

	}
}


void UIonicSparkGameInstance::OnCreateSessionComplete(FName CreatedSessionName, bool Success)
{
	if (MainMenu == nullptr)
	{
		return;
	}

	MainMenu->RemoveFromParent();

	UEngine* Engine = GetEngine();
	if (!ensure(Engine != nullptr)) return;

	Engine->AddOnScreenDebugMessage(0, 2, FColor::Green, TEXT("Hosting"));

	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	World->ServerTravel("/Game/Maps/TestLevel?listen");

}


void UIonicSparkGameInstance::OnDestroySessionComplete(FName DestroyedSessionName, bool Success)
{
	if (Success)
	{
		CreateSession();
	}
}


void UIonicSparkGameInstance::CreateSession()
{
	if (SessionInterface.IsValid())
	{
		FOnlineSessionSettings SessionSettings;

		SessionSettings.bIsLANMatch = true;
		SessionSettings.NumPublicConnections = 4;
		SessionSettings.bShouldAdvertise = true;

		SessionInterface->CreateSession(0, SessionName, SessionSettings);
	}

}








// Settings 

void UIonicSparkGameInstance::UpdateMusicVolume(float NewVolume)
{
	MusicVolume = NewVolume;
}

void UIonicSparkGameInstance::UpdateMouseSens(float NewMouseSens)
{
	if (PlayerController)
	{
		PlayerController->PlayerInput->SetMouseSensitivity(NewMouseSens); //Sets the speed of the actual cursor
	}
}





//Console Commands

void UIonicSparkGameInstance::DevMenu()
{
	if (!bDevMenuActive)
	{

		if (DeveloperMenuClass == nullptr) { return; }
		DeveloperMenu = CreateWidget<UDeveloperMenu>(this, DeveloperMenuClass);

		if (!ensure(DeveloperMenu != nullptr)) { return; }
		DeveloperMenu->AddToViewport();

	}
	else
	{
		DeveloperMenu->RemoveFromParent();
	}
	
}