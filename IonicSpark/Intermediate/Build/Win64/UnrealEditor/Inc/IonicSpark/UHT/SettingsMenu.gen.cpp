// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IonicSpark/UI/SettingsMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingsMenu() {}
// Cross Module References
	IONICSPARK_API UClass* Z_Construct_UClass_UIonicSparkGameInstance_NoRegister();
	IONICSPARK_API UClass* Z_Construct_UClass_USettingsMenu();
	IONICSPARK_API UClass* Z_Construct_UClass_USettingsMenu_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_IonicSpark();
// End Cross Module References
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
			{ "OnBackButtonPressed", &USettingsMenu::execOnBackButtonPressed },
			{ "SetMouseSens", &USettingsMenu::execSetMouseSens },
			{ "SetMusicVolume", &USettingsMenu::execSetMusicVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USettingsMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_IonicSpark,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USettingsMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USettingsMenu_OnBackButtonPressed, "OnBackButtonPressed" }, // 1545276693
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
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USettingsMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_GameInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_BackButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_MouseSensSlider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsMenu_Statics::NewProp_MusicVolumeSlider,
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
		{ Z_Construct_UClass_USettingsMenu, USettingsMenu::StaticClass, TEXT("USettingsMenu"), &Z_Registration_Info_UClass_USettingsMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettingsMenu), 3419494291U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_2551908831(TEXT("/Script/IonicSpark"),
		Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
