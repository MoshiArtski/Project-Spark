// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IonicSpark/IonicSparkGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIonicSparkGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	IONICSPARK_API UClass* Z_Construct_UClass_AIonicSparkGameModeBase();
	IONICSPARK_API UClass* Z_Construct_UClass_AIonicSparkGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IonicSpark();
// End Cross Module References
	void AIonicSparkGameModeBase::StaticRegisterNativesAIonicSparkGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIonicSparkGameModeBase);
	UClass* Z_Construct_UClass_AIonicSparkGameModeBase_NoRegister()
	{
		return AIonicSparkGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AIonicSparkGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIonicSparkGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_IonicSpark,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIonicSparkGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "IonicSparkGameModeBase.h" },
		{ "ModuleRelativePath", "IonicSparkGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIonicSparkGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIonicSparkGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIonicSparkGameModeBase_Statics::ClassParams = {
		&AIonicSparkGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AIonicSparkGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIonicSparkGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIonicSparkGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AIonicSparkGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIonicSparkGameModeBase.OuterSingleton, Z_Construct_UClass_AIonicSparkGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIonicSparkGameModeBase.OuterSingleton;
	}
	template<> IONICSPARK_API UClass* StaticClass<AIonicSparkGameModeBase>()
	{
		return AIonicSparkGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIonicSparkGameModeBase);
	AIonicSparkGameModeBase::~AIonicSparkGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_IonicSparkGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_IonicSparkGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIonicSparkGameModeBase, AIonicSparkGameModeBase::StaticClass, TEXT("AIonicSparkGameModeBase"), &Z_Registration_Info_UClass_AIonicSparkGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIonicSparkGameModeBase), 1216878806U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_IonicSparkGameModeBase_h_797691098(TEXT("/Script/IonicSpark"),
		Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_IonicSparkGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_IonicSparkGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
