// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IonicSpark/UI/SettingsMenu.h"
#include "Engine/Classes/GameFramework/PlayerInput.h"
#include "Slate/Public/Framework/Commands/InputChord.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingsMenu() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
	IONICSPARK_API UClass* Z_Construct_UClass_UIonicSparkGameInstance_NoRegister();
	IONICSPARK_API UClass* Z_Construct_UClass_USettingsMenu();
	IONICSPARK_API UClass* Z_Construct_UClass_USettingsMenu_NoRegister();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UInputKeySelector_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_IonicSpark();
// End Cross Module References
	DEFINE_FUNCTION(USettingsMenu::execGetNoKeySpecifiedText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ActionString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetNoKeySpecifiedText(Z_Param_ActionString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsMenu::execGetInputActionMap)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputActionKeyMapping*)Z_Param__Result=P_THIS->GetInputActionMap(Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsMenu::execRemapActionKey)
	{
		P_GET_STRUCT(FInputChord,Z_Param_SelectedKey);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemapActionKey(Z_Param_SelectedKey,Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsMenu::execOnMenuNavigationKeySlected)
	{
		P_GET_STRUCT(FInputChord,Z_Param_SelectedKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMenuNavigationKeySlected(Z_Param_SelectedKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsMenu::execSetMusicVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMusicVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsMenu::execSetMouseSens)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMouseSens();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsMenu::execOnBackButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackButtonPressed();
		P_NATIVE_END;
	}
	void USettingsMenu::StaticRegisterNativesUSettingsMenu()
	{
		UClass* Class = USettingsMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInputActionMap", &USettingsMenu::execGetInputActionMap },
			{ "GetNoKeySpecifiedText", &USettingsMenu::execGetNoKeySpecifiedText },
			{ "OnBackButtonPressed", &USettingsMenu::execOnBackButtonPressed },
			{ "OnMenuNavigationKeySlected", &USettingsMenu::execOnMenuNavigationKeySlected },
			{ "RemapActionKey", &USettingsMenu::execRemapActionKey },
			{ "SetMouseSens", &USettingsMenu::execSetMouseSens },
			{ "SetMusicVolume", &USettingsMenu::execSetMusicVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USettingsMenu_GetInputActionMap_Statics
	{
		struct SettingsMenu_eventGetInputActionMap_Parms
		{
			FName ActionName;
			FInputActionKeyMapping ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USettingsMenu_GetInputActionMap_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SettingsMenu_eventGetInputActionMap_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USettingsMenu_GetInputActionMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SettingsMenu_eventGetInputActionMap_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) }; // 1282624095
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsMenu_GetInputActionMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsMenu_GetInputActionMap_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsMenu_GetInputActionMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsMenu_GetInputActionMap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n//\n//\n" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsMenu_GetInputActionMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsMenu, nullptr, "GetInputActionMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_USettingsMenu_GetInputActionMap_Statics::SettingsMenu_eventGetInputActionMap_Parms), Z_Construct_UFunction_USettingsMenu_GetInputActionMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsMenu_GetInputActionMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsMenu_GetInputActionMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsMenu_GetInputActionMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsMenu_GetInputActionMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsMenu_GetInputActionMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsMenu_GetNoKeySpecifiedText_Statics
	{
		struct SettingsMenu_eventGetNoKeySpecifiedText_Parms
		{
			FString ActionString;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActionString;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsMenu_GetNoKeySpecifiedText_Statics::NewProp_ActionString = { "ActionString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SettingsMenu_eventGetNoKeySpecifiedText_Parms, ActionString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USettingsMenu_GetNoKeySpecifiedText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SettingsMenu_eventGetNoKeySpecifiedText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsMenu_GetNoKeySpecifiedText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsMenu_GetNoKeySpecifiedText_Statics::NewProp_ActionString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsMenu_GetNoKeySpecifiedText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsMenu_GetNoKeySpecifiedText_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n//\n//\n" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsMenu_GetNoKeySpecifiedText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsMenu, nullptr, "GetNoKeySpecifiedText", nullptr, nullptr, sizeof(Z_Construct_UFunction_USettingsMenu_GetNoKeySpecifiedText_Statics::SettingsMenu_eventGetNoKeySpecifiedText_Parms), Z_Construct_UFunction_USettingsMenu_GetNoKeySpecifiedText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsMenu_GetNoKeySpecifiedText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsMenu_GetNoKeySpecifiedText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsMenu_GetNoKeySpecifiedText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsMenu_GetNoKeySpecifiedText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsMenu_GetNoKeySpecifiedText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsMenu_OnBackButtonPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsMenu_OnBackButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsMenu_OnBackButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsMenu, nullptr, "OnBackButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsMenu_OnBackButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsMenu_OnBackButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsMenu_OnBackButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsMenu_OnBackButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsMenu_OnMenuNavigationKeySlected_Statics
	{
		struct SettingsMenu_eventOnMenuNavigationKeySlected_Parms
		{
			FInputChord SelectedKey;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USettingsMenu_OnMenuNavigationKeySlected_Statics::NewProp_SelectedKey = { "SelectedKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SettingsMenu_eventOnMenuNavigationKeySlected_Parms, SelectedKey), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) }; // 2392822822
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsMenu_OnMenuNavigationKeySlected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsMenu_OnMenuNavigationKeySlected_Statics::NewProp_SelectedKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsMenu_OnMenuNavigationKeySlected_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n//\n//\n//\n//\n//\n//\n//\n//\n" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsMenu_OnMenuNavigationKeySlected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsMenu, nullptr, "OnMenuNavigationKeySlected", nullptr, nullptr, sizeof(Z_Construct_UFunction_USettingsMenu_OnMenuNavigationKeySlected_Statics::SettingsMenu_eventOnMenuNavigationKeySlected_Parms), Z_Construct_UFunction_USettingsMenu_OnMenuNavigationKeySlected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsMenu_OnMenuNavigationKeySlected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsMenu_OnMenuNavigationKeySlected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsMenu_OnMenuNavigationKeySlected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsMenu_OnMenuNavigationKeySlected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsMenu_OnMenuNavigationKeySlected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsMenu_RemapActionKey_Statics
	{
		struct SettingsMenu_eventRemapActionKey_Parms
		{
			FInputChord SelectedKey;
			FName ActionName;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedKey;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USettingsMenu_RemapActionKey_Statics::NewProp_SelectedKey = { "SelectedKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SettingsMenu_eventRemapActionKey_Parms, SelectedKey), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) }; // 2392822822
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USettingsMenu_RemapActionKey_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SettingsMenu_eventRemapActionKey_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsMenu_RemapActionKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsMenu_RemapActionKey_Statics::NewProp_SelectedKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsMenu_RemapActionKey_Statics::NewProp_ActionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsMenu_RemapActionKey_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n//\n//\n" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsMenu_RemapActionKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsMenu, nullptr, "RemapActionKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_USettingsMenu_RemapActionKey_Statics::SettingsMenu_eventRemapActionKey_Parms), Z_Construct_UFunction_USettingsMenu_RemapActionKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsMenu_RemapActionKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsMenu_RemapActionKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsMenu_RemapActionKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsMenu_RemapActionKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsMenu_RemapActionKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsMenu_SetMouseSens_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsMenu_SetMouseSens_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsMenu_SetMouseSens_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsMenu, nullptr, "SetMouseSens", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsMenu_SetMouseSens_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsMenu_SetMouseSens_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsMenu_SetMouseSens()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsMenu_SetMouseSens_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsMenu_SetMusicVolume_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsMenu_SetMusicVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsMenu_SetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsMenu, nullptr, "SetMusicVolume", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsMenu_SetMusicVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsMenu_SetMusicVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsMenu_SetMusicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsMenu_SetMusicVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USettingsMenu);
	UClass* Z_Construct_UClass_USettingsMenu_NoRegister()
	{
		return USettingsMenu::StaticClass();
	}
	struct Z_Construct_UClass_USettingsMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensSlider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseSensSlider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MusicVolumeSlider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MusicVolumeSlider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuNavigationKeySelector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuNavigationKeySelector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USettingsMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_IonicSpark,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USettingsMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USettingsMenu_GetInputActionMap, "GetInputActionMap" }, // 1418586180
		{ &Z_Construct_UFunction_USettingsMenu_GetNoKeySpecifiedText, "GetNoKeySpecifiedText" }, // 2807756157
		{ &Z_Construct_UFunction_USettingsMenu_OnBackButtonPressed, "OnBackButtonPressed" }, // 1545276693
		{ &Z_Construct_UFunction_USettingsMenu_OnMenuNavigationKeySlected, "OnMenuNavigationKeySlected" }, // 2806645024
		{ &Z_Construct_UFunction_USettingsMenu_RemapActionKey, "RemapActionKey" }, // 2287951502
		{ &Z_Construct_UFunction_USettingsMenu_SetMouseSens, "SetMouseSens" }, // 408362021
		{ &Z_Construct_UFunction_USettingsMenu_SetMusicVolume, "SetMusicVolume" }, // 3660381578
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "UI/SettingsMenu.h" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsMenu_Statics::NewProp_GameInstance_MetaData[] = {
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettingsMenu_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USettingsMenu, GameInstance), Z_Construct_UClass_UIonicSparkGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USettingsMenu_Statics::NewProp_GameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenu_Statics::NewProp_GameInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsMenu_Statics::NewProp_BackButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "//Back Button\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
		{ "ToolTip", "Back Button" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettingsMenu_Statics::NewProp_BackButton = { "BackButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USettingsMenu, BackButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USettingsMenu_Statics::NewProp_BackButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenu_Statics::NewProp_BackButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsMenu_Statics::NewProp_MouseSensSlider_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "//Sliders\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
		{ "ToolTip", "Sliders" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettingsMenu_Statics::NewProp_MouseSensSlider = { "MouseSensSlider", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USettingsMenu, MouseSensSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USettingsMenu_Statics::NewProp_MouseSensSlider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenu_Statics::NewProp_MouseSensSlider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsMenu_Statics::NewProp_MusicVolumeSlider_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettingsMenu_Statics::NewProp_MusicVolumeSlider = { "MusicVolumeSlider", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USettingsMenu, MusicVolumeSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USettingsMenu_Statics::NewProp_MusicVolumeSlider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenu_Statics::NewProp_MusicVolumeSlider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsMenu_Statics::NewProp_MenuNavigationKeySelector_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "//\n//\n//\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/SettingsMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USettingsMenu_Statics::NewProp_MenuNavigationKeySelector = { "MenuNavigationKeySelector", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USettingsMenu, MenuNavigationKeySelector), Z_Construct_UClass_UInputKeySelector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USettingsMenu_Statics::NewProp_MenuNavigationKeySelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenu_Statics::NewProp_MenuNavigationKeySelector_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USettingsMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_GameInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_BackButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_MouseSensSlider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_MusicVolumeSlider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_MenuNavigationKeySelector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USettingsMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingsMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USettingsMenu_Statics::ClassParams = {
		&USettingsMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USettingsMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USettingsMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USettingsMenu()
	{
		if (!Z_Registration_Info_UClass_USettingsMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USettingsMenu.OuterSingleton, Z_Construct_UClass_USettingsMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USettingsMenu.OuterSingleton;
	}
	template<> IONICSPARK_API UClass* StaticClass<USettingsMenu>()
	{
		return USettingsMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USettingsMenu);
	USettingsMenu::~USettingsMenu() {}
	struct Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USettingsMenu, USettingsMenu::StaticClass, TEXT("USettingsMenu"), &Z_Registration_Info_UClass_USettingsMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettingsMenu), 443882107U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_2358850995(TEXT("/Script/IonicSpark"),
		Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
