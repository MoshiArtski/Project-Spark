// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "OnlineSubsystem.h"
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


	//Networking

	UFUNCTION()
	void Host();

	//



	UFUNCTION(BlueprintCallable)
	void LoadMainMenu(); //Gets called by the level blueprint 

	UFUNCTION()
		void ToggleSettingsMenu();


	//Geters

	float GetMusicVolume() const { return MusicVolume; }


protected:

	virtual void Init() override;

private:

	//Networking

	IOnlineSessionPtr SessionInterface;


	

	UFUNCTION()
	void CreateSession();

	UFUNCTION()
	void OnCreateSessionComplete(FName CreatedSessionName, bool Success);

	UFUNCTION()
	void OnDestroySessionComplete(FName DestroyedSessionName, bool Success);


	//


	APlayerController* PlayerController;


	TSubclassOf<class UUserWidget> MainMenuClass;

	UPROPERTY(EditAnywhere)
	class UMainMenu* MainMenu;





	UFUNCTION()
	void LockMouseCursor(); //Locks mouse cursor so it dosent dissapear when clicking on widgets




	//Settings Menu
	TSubclassOf<class UUserWidget> SettingsMenuClass;

	UPROPERTY()
		class USettingsMenu* SettingsMenu;

	UPROPERTY()
		bool bSettingsMenuActive = false;

	
	//


	
	//Settings

public:

	UFUNCTION()
	void UpdateMusicVolume(float NewVolume);

	UFUNCTION()
	void UpdateMouseSens(float NewMouseSens);

private:

	UPROPERTY()
	float MusicVolume = 1.f;

	UPROPERTY()
	float MouseSens =1.f;






	//Console Commands




	// Dev menu
	UFUNCTION(exec)
	void DevMenu();

	TSubclassOf<class UUserWidget> DeveloperMenuClass;

	UPROPERTY()
	class UDeveloperMenu* DeveloperMenu;

	UPROPERTY()
	bool bDevMenuActive = false;



	//

};
