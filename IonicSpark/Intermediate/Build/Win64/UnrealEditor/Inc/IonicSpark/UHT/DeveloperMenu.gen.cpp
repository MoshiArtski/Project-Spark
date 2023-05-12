// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IonicSpark/UI/DeveloperMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeveloperMenu() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	IONICSPARK_API UClass* Z_Construct_UClass_UDeveloperMenu();
	IONICSPARK_API UClass* Z_Construct_UClass_UDeveloperMenu_NoRegister();
	IONICSPARK_API UClass* Z_Construct_UClass_UIonicSparkGameInstance_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_IonicSpark();
// End Cross Module References
	DEFINE_FUNCTION(UDeveloperMenu::execSoundTestButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SoundTestButtonPressed();
		P_NATIVE_END;
	}
	void UDeveloperMenu::StaticRegisterNativesUDeveloperMenu()
	{
		UClass* Class = UDeveloperMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SoundTestButtonPressed", &UDeveloperMenu::execSoundTestButtonPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDeveloperMenu_SoundTestButtonPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeveloperMenu_SoundTestButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/DeveloperMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeveloperMenu_SoundTestButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeveloperMenu, nullptr, "SoundTestButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeveloperMenu_SoundTestButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeveloperMenu_SoundTestButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeveloperMenu_SoundTestButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeveloperMenu_SoundTestButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeveloperMenu);
	UClass* Z_Construct_UClass_UDeveloperMenu_NoRegister()
	{
		return UDeveloperMenu::StaticClass();
	}
	struct Z_Construct_UClass_UDeveloperMenu_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundTestButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundTestButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TestSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeveloperMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_IonicSpark,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDeveloperMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDeveloperMenu_SoundTestButtonPressed, "SoundTestButtonPressed" }, // 2246056659
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeveloperMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/DeveloperMenu.h" },
		{ "ModuleRelativePath", "UI/DeveloperMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeveloperMenu_Statics::NewProp_GameInstance_MetaData[] = {
		{ "ModuleRelativePath", "UI/DeveloperMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeveloperMenu_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeveloperMenu, GameInstance), Z_Construct_UClass_UIonicSparkGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDeveloperMenu_Statics::NewProp_GameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeveloperMenu_Statics::NewProp_GameInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeveloperMenu_Statics::NewProp_SoundTestButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/DeveloperMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeveloperMenu_Statics::NewProp_SoundTestButton = { "SoundTestButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeveloperMenu, SoundTestButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDeveloperMenu_Statics::NewProp_SoundTestButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeveloperMenu_Statics::NewProp_SoundTestButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeveloperMenu_Statics::NewProp_TestSound_MetaData[] = {
		{ "Category", "DeveloperMenu" },
		{ "ModuleRelativePath", "UI/DeveloperMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeveloperMenu_Statics::NewProp_TestSound = { "TestSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeveloperMenu, TestSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDeveloperMenu_Statics::NewProp_TestSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeveloperMenu_Statics::NewProp_TestSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeveloperMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeveloperMenu_Statics::NewProp_GameInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeveloperMenu_Statics::NewProp_SoundTestButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeveloperMenu_Statics::NewProp_TestSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeveloperMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeveloperMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeveloperMenu_Statics::ClassParams = {
		&UDeveloperMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDeveloperMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeveloperMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDeveloperMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeveloperMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeveloperMenu()
	{
		if (!Z_Registration_Info_UClass_UDeveloperMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeveloperMenu.OuterSingleton, Z_Construct_UClass_UDeveloperMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDeveloperMenu.OuterSingleton;
	}
	template<> IONICSPARK_API UClass* StaticClass<UDeveloperMenu>()
	{
		return UDeveloperMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeveloperMenu);
	UDeveloperMenu::~UDeveloperMenu() {}
	struct Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_UI_DeveloperMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_UI_DeveloperMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDeveloperMenu, UDeveloperMenu::StaticClass, TEXT("UDeveloperMenu"), &Z_Registration_Info_UClass_UDeveloperMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeveloperMenu), 986925474U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_UI_DeveloperMenu_h_1734496955(TEXT("/Script/IonicSpark"),
		Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_UI_DeveloperMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_UI_DeveloperMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
