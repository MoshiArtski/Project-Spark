// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IonicSpark/UI/OptionsMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptionsMenu() {}
// Cross Module References
	IONICSPARK_API UClass* Z_Construct_UClass_UIonicSparkGameInstance_NoRegister();
	IONICSPARK_API UClass* Z_Construct_UClass_UOptionsMenu();
	IONICSPARK_API UClass* Z_Construct_UClass_UOptionsMenu_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_IonicSpark();
// End Cross Module References
	DEFINE_FUNCTION(UOptionsMenu::execSetMouseSens)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMouseSens();
		P_NATIVE_END;
	}
	void UOptionsMenu::StaticRegisterNativesUOptionsMenu()
	{
		UClass* Class = UOptionsMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMouseSens", &UOptionsMenu::execSetMouseSens },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOptionsMenu_SetMouseSens_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptionsMenu_SetMouseSens_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/OptionsMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptionsMenu_SetMouseSens_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptionsMenu, nullptr, "SetMouseSens", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptionsMenu_SetMouseSens_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptionsMenu_SetMouseSens_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptionsMenu_SetMouseSens()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptionsMenu_SetMouseSens_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptionsMenu);
	UClass* Z_Construct_UClass_UOptionsMenu_NoRegister()
	{
		return UOptionsMenu::StaticClass();
	}
	struct Z_Construct_UClass_UOptionsMenu_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensSlider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseSensSlider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptionsMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_IonicSpark,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOptionsMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOptionsMenu_SetMouseSens, "SetMouseSens" }, // 684968715
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptionsMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "UI/OptionsMenu.h" },
		{ "ModuleRelativePath", "UI/OptionsMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptionsMenu_Statics::NewProp_GameInstance_MetaData[] = {
		{ "ModuleRelativePath", "UI/OptionsMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionsMenu_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptionsMenu, GameInstance), Z_Construct_UClass_UIonicSparkGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptionsMenu_Statics::NewProp_GameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsMenu_Statics::NewProp_GameInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptionsMenu_Statics::NewProp_MouseSensSlider_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/OptionsMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOptionsMenu_Statics::NewProp_MouseSensSlider = { "MouseSensSlider", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptionsMenu, MouseSensSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptionsMenu_Statics::NewProp_MouseSensSlider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsMenu_Statics::NewProp_MouseSensSlider_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptionsMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsMenu_Statics::NewProp_GameInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptionsMenu_Statics::NewProp_MouseSensSlider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptionsMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptionsMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptionsMenu_Statics::ClassParams = {
		&UOptionsMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOptionsMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptionsMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptionsMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptionsMenu()
	{
		if (!Z_Registration_Info_UClass_UOptionsMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptionsMenu.OuterSingleton, Z_Construct_UClass_UOptionsMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptionsMenu.OuterSingleton;
	}
	template<> IONICSPARK_API UClass* StaticClass<UOptionsMenu>()
	{
		return UOptionsMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptionsMenu);
	UOptionsMenu::~UOptionsMenu() {}
	struct Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptionsMenu, UOptionsMenu::StaticClass, TEXT("UOptionsMenu"), &Z_Registration_Info_UClass_UOptionsMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptionsMenu), 271587701U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_2327498394(TEXT("/Script/IonicSpark"),
		Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
