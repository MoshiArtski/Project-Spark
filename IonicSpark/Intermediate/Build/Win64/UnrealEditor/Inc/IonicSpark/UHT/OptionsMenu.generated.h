// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/OptionsMenu.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IONICSPARK_OptionsMenu_generated_h
#error "OptionsMenu.generated.h already included, missing '#pragma once' in OptionsMenu.h"
#endif
#define IONICSPARK_OptionsMenu_generated_h

#define FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_15_SPARSE_DATA
#define FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMouseSens);


#define FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMouseSens);


#define FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_15_ACCESSORS
#define FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptionsMenu(); \
	friend struct Z_Construct_UClass_UOptionsMenu_Statics; \
public: \
	DECLARE_CLASS(UOptionsMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IonicSpark"), NO_API) \
	DECLARE_SERIALIZER(UOptionsMenu)


#define FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUOptionsMenu(); \
	friend struct Z_Construct_UClass_UOptionsMenu_Statics; \
public: \
	DECLARE_CLASS(UOptionsMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IonicSpark"), NO_API) \
	DECLARE_SERIALIZER(UOptionsMenu)


#define FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptionsMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptionsMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptionsMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptionsMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOptionsMenu(UOptionsMenu&&); \
	NO_API UOptionsMenu(const UOptionsMenu&); \
public: \
	NO_API virtual ~UOptionsMenu();


#define FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptionsMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOptionsMenu(UOptionsMenu&&); \
	NO_API UOptionsMenu(const UOptionsMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptionsMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptionsMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptionsMenu) \
	NO_API virtual ~UOptionsMenu();


#define FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_12_PROLOG
#define FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_15_SPARSE_DATA \
	FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_15_RPC_WRAPPERS \
	FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_15_ACCESSORS \
	FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_15_INCLASS \
	FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_15_SPARSE_DATA \
	FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_15_ACCESSORS \
	FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_15_INCLASS_NO_PURE_DECLS \
	FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IONICSPARK_API UClass* StaticClass<class UOptionsMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IonicSpark_Source_IonicSpark_UI_OptionsMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
