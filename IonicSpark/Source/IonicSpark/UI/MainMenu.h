// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenu.generated.h"

/**
 *
 */
UCLASS()
class IONICSPARK_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()


public:

	UMainMenu(const FObjectInitializer& ObjectInitializer);

protected:


	virtual bool Initialize();

private:

	UPROPERTY()
		class UIonicSparkGameInstance* GameInstance;


	UPROPERTY(meta = (BindWidget))
		class UButton* PlayButton;

	UPROPERTY(meta = (BindWidget))
		class UButton* QuitButton;

	UPROPERTY(meta = (BindWidget))
		class UButton* SettingsButton;

	UPROPERTY(meta = (BindWidget))
		class UWidgetSwitcher* MenuSwitcher;

	UPROPERTY(meta = (BindWidget))
		class UWidget* MainMenu;


	//Lobby Menu
	UPROPERTY(meta = (BindWidget))
		class UWidget* LobbyMenu;

	UPROPERTY(meta = (BindWidget))
		class UButton* BackButton;
	//



	UFUNCTION()
		void PlayButtonPressed();

	UFUNCTION()
		void SettingsButtonPressed();

	UFUNCTION()
		void QuitButtonPressed();


	UFUNCTION()
		void BackButtonPressed();

};
