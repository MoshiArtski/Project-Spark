// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/MainMenu.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IONICSPARK_MainMenu_generated_h
#error "MainMenu.generated.h already included, missing '#pragma once' in MainMenu.h"
#endif
#define IONICSPARK_MainMenu_generated_h

#define FID_IonicSpark_Source_IonicSpark_UI_MainMenu_h_18_SPARSE_DATA
#define FID_IonicSpark_Source_IonicSpark_UI_MainMenu_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBackButtonPressed); \
	DECLARE_FUNCTION(execQuitButtonPressed); \
	DECLARE_FUNCTION(execSettingsButtonPressed); \
	DECLARE_FUNCTION(execPlayButtonPressed); \
	DECLARE_FUNCTION(execHostButtonPressed);


#define FID_IonicSpark_Source_IonicSpark_UI_MainMenu_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBackButtonPressed); \
	DECLARE_FUNCTION(execQuitButtonPressed); \
	DECLARE_FUNCTION(execSettingsButtonPressed); \
	DECLARE_FUNCTION(execPlayButtonPressed); \
	DECLARE_FUNCTION(execHostButtonPressed);


#define FID_IonicSpark_Source_IonicSpark_UI_MainMenu_h_18_ACCESSORS
#define FID_IonicSpark_Source_IonicSpark_UI_MainMenu_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IonicSpark"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define FID_IonicSpark_Source_IonicSpark_UI_MainMenu_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IonicSpark"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define FID_IonicSpark_Source_IonicSpark_UI_MainMenu_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu(UMainMenu&&); \
	NO_API UMainMenu(const UMainMenu&); \
public: \
	NO_API virtual ~UMainMenu();


#define FID_IonicSpark_Source_IonicSpark_UI_MainMenu_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu(UMainMenu&&); \
	NO_API UMainMenu(const UMainMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu) \
	NO_API virtual ~UMainMenu();


#define FID_IonicSpark_Source_IonicSpark_UI_MainMenu_h_15_PROLOG
#define FID_IonicSpark_Source_IonicSpark_UI_MainMenu_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IonicSpark_Source_IonicSpark_UI_MainMenu_h_18_SPARSE_DATA \
	FID_IonicSpark_Source_IonicSpark_UI_MainMenu_h_18_RPC_WRAPPERS \
	FID_IonicSpark_Source_IonicSpark_UI_MainMenu_h_18_ACCESSORS \
	FID_IonicSpark_Source_IonicSpark_UI_MainMenu_h_18_INCLASS \
	FID_IonicSpark_Source_IonicSpark_UI_MainMenu_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_IonicSpark_Source_IonicSpark_UI_MainMenu_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IonicSpark_Source_IonicSpark_UI_MainMenu_h_18_SPARSE_DATA \
	FID_IonicSpark_Source_IonicSpark_UI_MainMenu_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_IonicSpark_Source_IonicSpark_UI_MainMenu_h_18_ACCESSORS \
	FID_IonicSpark_Source_IonicSpark_UI_MainMenu_h_18_INCLASS_NO_PURE_DECLS \
	FID_IonicSpark_Source_IonicSpark_UI_MainMenu_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IONICSPARK_API UClass* StaticClass<class UMainMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IonicSpark_Source_IonicSpark_UI_MainMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
