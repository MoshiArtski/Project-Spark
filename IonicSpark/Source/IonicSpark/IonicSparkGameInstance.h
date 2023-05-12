// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


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
		void ToggleSettingsMenu();

	UFUNCTION()
		void UpdateMouseSens(float NewMouseSens);

protected:

	virtual void Init() override;

private:

	APlayerController* PlayerController;


	TSubclassOf<class UUserWidget> MainMenuClass;

	UPROPERTY(EditAnywhere)
	class UMainMenu* MainMenu;



	//Settings Menu
	TSubclassOf<class UUserWidget> SettingsMenuClass;

	UPROPERTY()
	class USettingsMenu* SettingsMenu;

	UPROPERTY()
	bool bSettingsMenuActive = false;

	UPROPERTY()
	float MouseSens;




};
