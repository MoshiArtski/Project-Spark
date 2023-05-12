// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IonicSpark/IonicSparkGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIonicSparkGameInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	IONICSPARK_API UClass* Z_Construct_UClass_UIonicSparkGameInstance();
	IONICSPARK_API UClass* Z_Construct_UClass_UIonicSparkGameInstance_NoRegister();
	IONICSPARK_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
	IONICSPARK_API UClass* Z_Construct_UClass_UOptionsMenu_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IonicSpark();
// End Cross Module References
	DEFINE_FUNCTION(UIonicSparkGameInstance::execUpdateMouseSens)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMouseSens);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMouseSens(Z_Param_NewMouseSens);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIonicSparkGameInstance::execToggleOptionsMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleOptionsMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIonicSparkGameInstance::execLoadMainMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadMainMenu();
		P_NATIVE_END;
	}
	void UIonicSparkGameInstance::StaticRegisterNativesUIonicSparkGameInstance()
	{
		UClass* Class = UIonicSparkGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadMainMenu", &UIonicSparkGameInstance::execLoadMainMenu },
			{ "ToggleOptionsMenu", &UIonicSparkGameInstance::execToggleOptionsMenu },
			{ "UpdateMouseSens", &UIonicSparkGameInstance::execUpdateMouseSens },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIonicSparkGameInstance_LoadMainMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIonicSparkGameInstance_LoadMainMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "IonicSparkGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIonicSparkGameInstance_LoadMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIonicSparkGameInstance, nullptr, "LoadMainMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIonicSparkGameInstance_LoadMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIonicSparkGameInstance_LoadMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIonicSparkGameInstance_LoadMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIonicSparkGameInstance_LoadMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIonicSparkGameInstance_ToggleOptionsMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIonicSparkGameInstance_ToggleOptionsMenu_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Gets called by the level blueprint \n" },
		{ "ModuleRelativePath", "IonicSparkGameInstance.h" },
		{ "ToolTip", "Gets called by the level blueprint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIonicSparkGameInstance_ToggleOptionsMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIonicSparkGameInstance, nullptr, "ToggleOptionsMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIonicSparkGameInstance_ToggleOptionsMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIonicSparkGameInstance_ToggleOptionsMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIonicSparkGameInstance_ToggleOptionsMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIonicSparkGameInstance_ToggleOptionsMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMouseSens_Statics
	{
		struct IonicSparkGameInstance_eventUpdateMouseSens_Parms
		{
			float NewMouseSens;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMouseSens;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMouseSens_Statics::NewProp_NewMouseSens = { "NewMouseSens", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IonicSparkGameInstance_eventUpdateMouseSens_Parms, NewMouseSens), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMouseSens_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMouseSens_Statics::NewProp_NewMouseSens,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMouseSens_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "IonicSparkGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMouseSens_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIonicSparkGameInstance, nullptr, "UpdateMouseSens", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMouseSens_Statics::IonicSparkGameInstance_eventUpdateMouseSens_Parms), Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMouseSens_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMouseSens_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMouseSens_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMouseSens_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMouseSens()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMouseSens_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIonicSparkGameInstance);
	UClass* Z_Construct_UClass_UIonicSparkGameInstance_NoRegister()
	{
		return UIonicSparkGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UIonicSparkGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionsMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionsMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOptionsMenuActive_MetaData[];
#endif
		static void NewProp_bOptionsMenuActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptionsMenuActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseSens_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSens;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIonicSparkGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_IonicSpark,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIonicSparkGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIonicSparkGameInstance_LoadMainMenu, "LoadMainMenu" }, // 2391286032
		{ &Z_Construct_UFunction_UIonicSparkGameInstance_ToggleOptionsMenu, "ToggleOptionsMenu" }, // 2022745230
		{ &Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMouseSens, "UpdateMouseSens" }, // 2010125840
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIonicSparkGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "IonicSparkGameInstance.h" },
		{ "ModuleRelativePath", "IonicSparkGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MainMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IonicSparkGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MainMenu = { "MainMenu", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIonicSparkGameInstance, MainMenu), Z_Construct_UClass_UMainMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MainMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MainMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_OptionsMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IonicSparkGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_OptionsMenu = { "OptionsMenu", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIonicSparkGameInstance, OptionsMenu), Z_Construct_UClass_UOptionsMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_OptionsMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_OptionsMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_bOptionsMenuActive_MetaData[] = {
		{ "ModuleRelativePath", "IonicSparkGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_bOptionsMenuActive_SetBit(void* Obj)
	{
		((UIonicSparkGameInstance*)Obj)->bOptionsMenuActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_bOptionsMenuActive = { "bOptionsMenuActive", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIonicSparkGameInstance), &Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_bOptionsMenuActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_bOptionsMenuActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_bOptionsMenuActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MouseSens_MetaData[] = {
		{ "ModuleRelativePath", "IonicSparkGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MouseSens = { "MouseSens", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIonicSparkGameInstance, MouseSens), METADATA_PARAMS(Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MouseSens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MouseSens_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIonicSparkGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MainMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_OptionsMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_bOptionsMenuActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MouseSens,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIonicSparkGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIonicSparkGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIonicSparkGameInstance_Statics::ClassParams = {
		&UIonicSparkGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIonicSparkGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIonicSparkGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UIonicSparkGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIonicSparkGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIonicSparkGameInstance()
	{
		if (!Z_Registration_Info_UClass_UIonicSparkGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIonicSparkGameInstance.OuterSingleton, Z_Construct_UClass_UIonicSparkGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIonicSparkGameInstance.OuterSingleton;
	}
	template<> IONICSPARK_API UClass* StaticClass<UIonicSparkGameInstance>()
	{
		return UIonicSparkGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIonicSparkGameInstance);
	UIonicSparkGameInstance::~UIonicSparkGameInstance() {}
	struct Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIonicSparkGameInstance, UIonicSparkGameInstance::StaticClass, TEXT("UIonicSparkGameInstance"), &Z_Registration_Info_UClass_UIonicSparkGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIonicSparkGameInstance), 4069444990U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_521455837(TEXT("/Script/IonicSpark"),
		Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
