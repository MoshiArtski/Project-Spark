// Fill out your copyright notice in the Description page of Project Settings.


#include "DeveloperMenu.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "IonicSpark/IonicSparkGameInstance.h"

bool UDeveloperMenu::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success) {return false; }

	if (SoundTestButton == nullptr) return false;
	SoundTestButton->OnClicked.AddDynamic(this, &UDeveloperMenu::SoundTestButtonPressed);

	GameInstance = Cast<UIonicSparkGameInstance>(GetGameInstance());


	return true;
}


void UDeveloperMenu::SoundTestButtonPressed()
{
	if (GameInstance == nullptr) return;
	UGameplayStatics::PlaySound2D(GetWorld(),TestSound,GameInstance->GetMusicVolume());

	UE_LOG(LogTemp, Warning, TEXT("Playing Music at %f Volume"), GameInstance->GetMusicVolume());
}