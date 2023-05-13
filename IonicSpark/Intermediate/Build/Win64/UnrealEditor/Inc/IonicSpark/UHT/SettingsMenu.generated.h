// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/SettingsMenu.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionKeyMapping;
struct FInputChord;
#ifdef IONICSPARK_SettingsMenu_generated_h
#error "SettingsMenu.generated.h already included, missing '#pragma once' in SettingsMenu.h"
#endif
#define IONICSPARK_SettingsMenu_generated_h

#define FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_15_SPARSE_DATA
#define FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNoKeySpecifiedText); \
	DECLARE_FUNCTION(execGetInputActionMap); \
	DECLARE_FUNCTION(execRemapActionKey); \
	DECLARE_FUNCTION(execOnMenuNavigationKeySlected); \
	DECLARE_FUNCTION(execSetMusicVolume); \
	DECLARE_FUNCTION(execSetMouseSens); \
	DECLARE_FUNCTION(execOnBackButtonPressed);


#define FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNoKeySpecifiedText); \
	DECLARE_FUNCTION(execGetInputActionMap); \
	DECLARE_FUNCTION(execRemapActionKey); \
	DECLARE_FUNCTION(execOnMenuNavigationKeySlected); \
	DECLARE_FUNCTION(execSetMusicVolume); \
	DECLARE_FUNCTION(execSetMouseSens); \
	DECLARE_FUNCTION(execOnBackButtonPressed);


#define FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_15_ACCESSORS
#define FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSettingsMenu(); \
	friend struct Z_Construct_UClass_USettingsMenu_Statics; \
public: \
	DECLARE_CLASS(USettingsMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IonicSpark"), NO_API) \
	DECLARE_SERIALIZER(USettingsMenu)


#define FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSettingsMenu(); \
	friend struct Z_Construct_UClass_USettingsMenu_Statics; \
public: \
	DECLARE_CLASS(USettingsMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IonicSpark"), NO_API) \
	DECLARE_SERIALIZER(USettingsMenu)


#define FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USettingsMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USettingsMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettingsMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettingsMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USettingsMenu(USettingsMenu&&); \
	NO_API USettingsMenu(const USettingsMenu&); \
public: \
	NO_API virtual ~USettingsMenu();


#define FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USettingsMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USettingsMenu(USettingsMenu&&); \
	NO_API USettingsMenu(const USettingsMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettingsMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettingsMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USettingsMenu) \
	NO_API virtual ~USettingsMenu();


#define FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_12_PROLOG
#define FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_15_SPARSE_DATA \
	FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_15_RPC_WRAPPERS \
	FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_15_ACCESSORS \
	FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_15_INCLASS \
	FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_15_SPARSE_DATA \
	FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_15_ACCESSORS \
	FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_15_INCLASS_NO_PURE_DECLS \
	FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IONICSPARK_API UClass* StaticClass<class USettingsMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IonicSpark_Source_IonicSpark_UI_SettingsMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
