// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IonicSparkGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IONICSPARK_IonicSparkGameInstance_generated_h
#error "IonicSparkGameInstance.generated.h already included, missing '#pragma once' in IonicSparkGameInstance.h"
#endif
#define IONICSPARK_IonicSparkGameInstance_generated_h

#define FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_18_SPARSE_DATA
#define FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateMouseSens); \
	DECLARE_FUNCTION(execToggleOptionsMenu); \
	DECLARE_FUNCTION(execLoadMainMenu);


#define FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateMouseSens); \
	DECLARE_FUNCTION(execToggleOptionsMenu); \
	DECLARE_FUNCTION(execLoadMainMenu);


#define FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_18_ACCESSORS
#define FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIonicSparkGameInstance(); \
	friend struct Z_Construct_UClass_UIonicSparkGameInstance_Statics; \
public: \
	DECLARE_CLASS(UIonicSparkGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IonicSpark"), NO_API) \
	DECLARE_SERIALIZER(UIonicSparkGameInstance)


#define FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUIonicSparkGameInstance(); \
	friend struct Z_Construct_UClass_UIonicSparkGameInstance_Statics; \
public: \
	DECLARE_CLASS(UIonicSparkGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IonicSpark"), NO_API) \
	DECLARE_SERIALIZER(UIonicSparkGameInstance)


#define FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIonicSparkGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIonicSparkGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIonicSparkGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIonicSparkGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIonicSparkGameInstance(UIonicSparkGameInstance&&); \
	NO_API UIonicSparkGameInstance(const UIonicSparkGameInstance&); \
public: \
	NO_API virtual ~UIonicSparkGameInstance();


#define FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIonicSparkGameInstance(UIonicSparkGameInstance&&); \
	NO_API UIonicSparkGameInstance(const UIonicSparkGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIonicSparkGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIonicSparkGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIonicSparkGameInstance) \
	NO_API virtual ~UIonicSparkGameInstance();


#define FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_15_PROLOG
#define FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_18_SPARSE_DATA \
	FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_18_RPC_WRAPPERS \
	FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_18_ACCESSORS \
	FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_18_INCLASS \
	FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_18_SPARSE_DATA \
	FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_18_ACCESSORS \
	FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_18_INCLASS_NO_PURE_DECLS \
	FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IONICSPARK_API UClass* StaticClass<class UIonicSparkGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS