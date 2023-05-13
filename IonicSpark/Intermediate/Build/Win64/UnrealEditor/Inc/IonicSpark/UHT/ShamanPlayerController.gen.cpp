// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IonicSpark/PlayerClasses/ShamanPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShamanPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	IONICSPARK_API UClass* Z_Construct_UClass_AShamanPlayerController();
	IONICSPARK_API UClass* Z_Construct_UClass_AShamanPlayerController_NoRegister();
	IONICSPARK_API UClass* Z_Construct_UClass_UIonicSparkGameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IonicSpark();
// End Cross Module References
	DEFINE_FUNCTION(AShamanPlayerController::execNavigateMenus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NavigateMenus();
		P_NATIVE_END;
	}
	void AShamanPlayerController::StaticRegisterNativesAShamanPlayerController()
	{
		UClass* Class = AShamanPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NavigateMenus", &AShamanPlayerController::execNavigateMenus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShamanPlayerController_NavigateMenus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShamanPlayerController_NavigateMenus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerClasses/ShamanPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShamanPlayerController_NavigateMenus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShamanPlayerController, nullptr, "NavigateMenus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShamanPlayerController_NavigateMenus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShamanPlayerController_NavigateMenus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShamanPlayerController_NavigateMenus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShamanPlayerController_NavigateMenus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShamanPlayerController);
	UClass* Z_Construct_UClass_AShamanPlayerController_NoRegister()
	{
		return AShamanPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AShamanPlayerController_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShamanPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_IonicSpark,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShamanPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShamanPlayerController_NavigateMenus, "NavigateMenus" }, // 2733235671
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShamanPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerClasses/ShamanPlayerController.h" },
		{ "ModuleRelativePath", "PlayerClasses/ShamanPlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShamanPlayerController_Statics::NewProp_GameInstance_MetaData[] = {
		{ "ModuleRelativePath", "PlayerClasses/ShamanPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShamanPlayerController_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShamanPlayerController, GameInstance), Z_Construct_UClass_UIonicSparkGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShamanPlayerController_Statics::NewProp_GameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShamanPlayerController_Statics::NewProp_GameInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShamanPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShamanPlayerController_Statics::NewProp_GameInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShamanPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShamanPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShamanPlayerController_Statics::ClassParams = {
		&AShamanPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShamanPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShamanPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShamanPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShamanPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShamanPlayerController()
	{
		if (!Z_Registration_Info_UClass_AShamanPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShamanPlayerController.OuterSingleton, Z_Construct_UClass_AShamanPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShamanPlayerController.OuterSingleton;
	}
	template<> IONICSPARK_API UClass* StaticClass<AShamanPlayerController>()
	{
		return AShamanPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShamanPlayerController);
	AShamanPlayerController::~AShamanPlayerController() {}
	struct Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_PlayerClasses_ShamanPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_PlayerClasses_ShamanPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShamanPlayerController, AShamanPlayerController::StaticClass, TEXT("AShamanPlayerController"), &Z_Registration_Info_UClass_AShamanPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShamanPlayerController), 379502756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_PlayerClasses_ShamanPlayerController_h_908356022(TEXT("/Script/IonicSpark"),
		Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_PlayerClasses_ShamanPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_PlayerClasses_ShamanPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
