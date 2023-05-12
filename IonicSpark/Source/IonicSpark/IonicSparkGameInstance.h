// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UI/MainMenu.h"
#include "UI/OptionsMenu.h"

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "IonicSparkGameInstance.generated.h"

/**
 *
 */
UCLASS()
class IONICSPARK_API UIonicSparkGameInstance : public UGameInstance
{
	GENERATED_BODY()

		UIonicSparkGameInstance(const FObjectInitializer& ObjectInitializer);

public:

	UFUNCTION(BlueprintCallable)
		void LoadMainMenu(); //Gets called by the level blueprint 


	UFUNCTION()
		void ToggleOptionsMenu();

	UFUNCTION()
		void UpdateMouseSens(float NewMouseSens);

protected:

	virtual void Init() override;

private:

	APlayerController* PlayerController;


	TSubclassOf<class UUserWidget> MainMenuClass;

	UPROPERTY()
	class UMainMenu* MainMenu;



	//Settings Menu
	TSubclassOf<class UOptionsMenu> OptionsMenuClass;

	UPROPERTY()
	class UOptionsMenu* OptionsMenu;

	UPROPERTY()
	bool bOptionsMenuActive = false;

	UPROPERTY()
		float MouseSens;




};
