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
	IONICSPARK_API UClass* Z_Construct_UClass_UDeveloperMenu_NoRegister();
	IONICSPARK_API UClass* Z_Construct_UClass_UIonicSparkGameInstance();
	IONICSPARK_API UClass* Z_Construct_UClass_UIonicSparkGameInstance_NoRegister();
	IONICSPARK_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
	IONICSPARK_API UClass* Z_Construct_UClass_USettingsMenu_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IonicSpark();
// End Cross Module References
	DEFINE_FUNCTION(UIonicSparkGameInstance::execDevMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DevMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIonicSparkGameInstance::execUpdateMouseSens)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMouseSens);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMouseSens(Z_Param_NewMouseSens);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIonicSparkGameInstance::execUpdateMusicVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMusicVolume(Z_Param_NewVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIonicSparkGameInstance::execLockMouseCursor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LockMouseCursor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIonicSparkGameInstance::execOnDestroySessionComplete)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_DestroyedSessionName);
		P_GET_UBOOL(Z_Param_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDestroySessionComplete(Z_Param_DestroyedSessionName,Z_Param_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIonicSparkGameInstance::execOnCreateSessionComplete)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_CreatedSessionName);
		P_GET_UBOOL(Z_Param_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCreateSessionComplete(Z_Param_CreatedSessionName,Z_Param_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIonicSparkGameInstance::execCreateSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIonicSparkGameInstance::execToggleSettingsMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleSettingsMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIonicSparkGameInstance::execLoadMainMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadMainMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIonicSparkGameInstance::execHost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Host();
		P_NATIVE_END;
	}
	void UIonicSparkGameInstance::StaticRegisterNativesUIonicSparkGameInstance()
	{
		UClass* Class = UIonicSparkGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSession", &UIonicSparkGameInstance::execCreateSession },
			{ "DevMenu", &UIonicSparkGameInstance::execDevMenu },
			{ "Host", &UIonicSparkGameInstance::execHost },
			{ "LoadMainMenu", &UIonicSparkGameInstance::execLoadMainMenu },
			{ "LockMouseCursor", &UIonicSparkGameInstance::execLockMouseCursor },
			{ "OnCreateSessionComplete", &UIonicSparkGameInstance::execOnCreateSessionComplete },
			{ "OnDestroySessionComplete", &UIonicSparkGameInstance::execOnDestroySessionComplete },
			{ "ToggleSettingsMenu", &UIonicSparkGameInstance::execToggleSettingsMenu },
			{ "UpdateMouseSens", &UIonicSparkGameInstance::execUpdateMouseSens },
			{ "UpdateMusicVolume", &UIonicSparkGameInstance::execUpdateMusicVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIonicSparkGameInstance_CreateSession_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIonicSparkGameInstance_CreateSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "IonicSparkGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIonicSparkGameInstance_CreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIonicSparkGameInstance, nullptr, "CreateSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIonicSparkGameInstance_CreateSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIonicSparkGameInstance_CreateSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIonicSparkGameInstance_CreateSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIonicSparkGameInstance_CreateSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIonicSparkGameInstance_DevMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIonicSparkGameInstance_DevMenu_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Dev menu\n" },
		{ "ModuleRelativePath", "IonicSparkGameInstance.h" },
		{ "ToolTip", "Dev menu" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIonicSparkGameInstance_DevMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIonicSparkGameInstance, nullptr, "DevMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIonicSparkGameInstance_DevMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIonicSparkGameInstance_DevMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIonicSparkGameInstance_DevMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIonicSparkGameInstance_DevMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIonicSparkGameInstance_Host_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIonicSparkGameInstance_Host_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Networking\n" },
		{ "ModuleRelativePath", "IonicSparkGameInstance.h" },
		{ "ToolTip", "Networking" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIonicSparkGameInstance_Host_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIonicSparkGameInstance, nullptr, "Host", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIonicSparkGameInstance_Host_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIonicSparkGameInstance_Host_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIonicSparkGameInstance_Host()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIonicSparkGameInstance_Host_Statics::FuncParams);
		}
		return ReturnFunction;
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
		{ "Comment", "//\n" },
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
	struct Z_Construct_UFunction_UIonicSparkGameInstance_LockMouseCursor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIonicSparkGameInstance_LockMouseCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "IonicSparkGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIonicSparkGameInstance_LockMouseCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIonicSparkGameInstance, nullptr, "LockMouseCursor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIonicSparkGameInstance_LockMouseCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIonicSparkGameInstance_LockMouseCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIonicSparkGameInstance_LockMouseCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIonicSparkGameInstance_LockMouseCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIonicSparkGameInstance_OnCreateSessionComplete_Statics
	{
		struct IonicSparkGameInstance_eventOnCreateSessionComplete_Parms
		{
			FName CreatedSessionName;
			bool Success;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_CreatedSessionName;
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIonicSparkGameInstance_OnCreateSessionComplete_Statics::NewProp_CreatedSessionName = { "CreatedSessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IonicSparkGameInstance_eventOnCreateSessionComplete_Parms, CreatedSessionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIonicSparkGameInstance_OnCreateSessionComplete_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((IonicSparkGameInstance_eventOnCreateSessionComplete_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIonicSparkGameInstance_OnCreateSessionComplete_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IonicSparkGameInstance_eventOnCreateSessionComplete_Parms), &Z_Construct_UFunction_UIonicSparkGameInstance_OnCreateSessionComplete_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIonicSparkGameInstance_OnCreateSessionComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIonicSparkGameInstance_OnCreateSessionComplete_Statics::NewProp_CreatedSessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIonicSparkGameInstance_OnCreateSessionComplete_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIonicSparkGameInstance_OnCreateSessionComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "IonicSparkGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIonicSparkGameInstance_OnCreateSessionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIonicSparkGameInstance, nullptr, "OnCreateSessionComplete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIonicSparkGameInstance_OnCreateSessionComplete_Statics::IonicSparkGameInstance_eventOnCreateSessionComplete_Parms), Z_Construct_UFunction_UIonicSparkGameInstance_OnCreateSessionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIonicSparkGameInstance_OnCreateSessionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIonicSparkGameInstance_OnCreateSessionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIonicSparkGameInstance_OnCreateSessionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIonicSparkGameInstance_OnCreateSessionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIonicSparkGameInstance_OnCreateSessionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIonicSparkGameInstance_OnDestroySessionComplete_Statics
	{
		struct IonicSparkGameInstance_eventOnDestroySessionComplete_Parms
		{
			FName DestroyedSessionName;
			bool Success;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_DestroyedSessionName;
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIonicSparkGameInstance_OnDestroySessionComplete_Statics::NewProp_DestroyedSessionName = { "DestroyedSessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IonicSparkGameInstance_eventOnDestroySessionComplete_Parms, DestroyedSessionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIonicSparkGameInstance_OnDestroySessionComplete_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((IonicSparkGameInstance_eventOnDestroySessionComplete_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIonicSparkGameInstance_OnDestroySessionComplete_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IonicSparkGameInstance_eventOnDestroySessionComplete_Parms), &Z_Construct_UFunction_UIonicSparkGameInstance_OnDestroySessionComplete_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIonicSparkGameInstance_OnDestroySessionComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIonicSparkGameInstance_OnDestroySessionComplete_Statics::NewProp_DestroyedSessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIonicSparkGameInstance_OnDestroySessionComplete_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIonicSparkGameInstance_OnDestroySessionComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "IonicSparkGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIonicSparkGameInstance_OnDestroySessionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIonicSparkGameInstance, nullptr, "OnDestroySessionComplete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIonicSparkGameInstance_OnDestroySessionComplete_Statics::IonicSparkGameInstance_eventOnDestroySessionComplete_Parms), Z_Construct_UFunction_UIonicSparkGameInstance_OnDestroySessionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIonicSparkGameInstance_OnDestroySessionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIonicSparkGameInstance_OnDestroySessionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIonicSparkGameInstance_OnDestroySessionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIonicSparkGameInstance_OnDestroySessionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIonicSparkGameInstance_OnDestroySessionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIonicSparkGameInstance_ToggleSettingsMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIonicSparkGameInstance_ToggleSettingsMenu_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Gets called by the level blueprint \n" },
		{ "ModuleRelativePath", "IonicSparkGameInstance.h" },
		{ "ToolTip", "Gets called by the level blueprint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIonicSparkGameInstance_ToggleSettingsMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIonicSparkGameInstance, nullptr, "ToggleSettingsMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIonicSparkGameInstance_ToggleSettingsMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIonicSparkGameInstance_ToggleSettingsMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIonicSparkGameInstance_ToggleSettingsMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIonicSparkGameInstance_ToggleSettingsMenu_Statics::FuncParams);
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
	struct Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMusicVolume_Statics
	{
		struct IonicSparkGameInstance_eventUpdateMusicVolume_Parms
		{
			float NewVolume;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMusicVolume_Statics::NewProp_NewVolume = { "NewVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IonicSparkGameInstance_eventUpdateMusicVolume_Parms, NewVolume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMusicVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMusicVolume_Statics::NewProp_NewVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMusicVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "IonicSparkGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIonicSparkGameInstance, nullptr, "UpdateMusicVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMusicVolume_Statics::IonicSparkGameInstance_eventUpdateMusicVolume_Parms), Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMusicVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMusicVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMusicVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMusicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMusicVolume_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingsMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSettingsMenuActive_MetaData[];
#endif
		static void NewProp_bSettingsMenuActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSettingsMenuActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MusicVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MusicVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseSens_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSens;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeveloperMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeveloperMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDevMenuActive_MetaData[];
#endif
		static void NewProp_bDevMenuActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDevMenuActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIonicSparkGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_IonicSpark,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIonicSparkGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIonicSparkGameInstance_CreateSession, "CreateSession" }, // 3893976457
		{ &Z_Construct_UFunction_UIonicSparkGameInstance_DevMenu, "DevMenu" }, // 835070261
		{ &Z_Construct_UFunction_UIonicSparkGameInstance_Host, "Host" }, // 3012066615
		{ &Z_Construct_UFunction_UIonicSparkGameInstance_LoadMainMenu, "LoadMainMenu" }, // 547625637
		{ &Z_Construct_UFunction_UIonicSparkGameInstance_LockMouseCursor, "LockMouseCursor" }, // 63483336
		{ &Z_Construct_UFunction_UIonicSparkGameInstance_OnCreateSessionComplete, "OnCreateSessionComplete" }, // 1959275110
		{ &Z_Construct_UFunction_UIonicSparkGameInstance_OnDestroySessionComplete, "OnDestroySessionComplete" }, // 4031127458
		{ &Z_Construct_UFunction_UIonicSparkGameInstance_ToggleSettingsMenu, "ToggleSettingsMenu" }, // 2481471958
		{ &Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMouseSens, "UpdateMouseSens" }, // 2010125840
		{ &Z_Construct_UFunction_UIonicSparkGameInstance_UpdateMusicVolume, "UpdateMusicVolume" }, // 916379068
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
		{ "Category", "IonicSparkGameInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IonicSparkGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MainMenu = { "MainMenu", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIonicSparkGameInstance, MainMenu), Z_Construct_UClass_UMainMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MainMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MainMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_SettingsMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IonicSparkGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_SettingsMenu = { "SettingsMenu", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIonicSparkGameInstance, SettingsMenu), Z_Construct_UClass_USettingsMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_SettingsMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_SettingsMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_bSettingsMenuActive_MetaData[] = {
		{ "ModuleRelativePath", "IonicSparkGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_bSettingsMenuActive_SetBit(void* Obj)
	{
		((UIonicSparkGameInstance*)Obj)->bSettingsMenuActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_bSettingsMenuActive = { "bSettingsMenuActive", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIonicSparkGameInstance), &Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_bSettingsMenuActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_bSettingsMenuActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_bSettingsMenuActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MusicVolume_MetaData[] = {
		{ "ModuleRelativePath", "IonicSparkGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MusicVolume = { "MusicVolume", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIonicSparkGameInstance, MusicVolume), METADATA_PARAMS(Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MusicVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MusicVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MouseSens_MetaData[] = {
		{ "ModuleRelativePath", "IonicSparkGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MouseSens = { "MouseSens", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIonicSparkGameInstance, MouseSens), METADATA_PARAMS(Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MouseSens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MouseSens_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_DeveloperMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IonicSparkGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_DeveloperMenu = { "DeveloperMenu", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIonicSparkGameInstance, DeveloperMenu), Z_Construct_UClass_UDeveloperMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_DeveloperMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_DeveloperMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_bDevMenuActive_MetaData[] = {
		{ "ModuleRelativePath", "IonicSparkGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_bDevMenuActive_SetBit(void* Obj)
	{
		((UIonicSparkGameInstance*)Obj)->bDevMenuActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_bDevMenuActive = { "bDevMenuActive", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIonicSparkGameInstance), &Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_bDevMenuActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_bDevMenuActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_bDevMenuActive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIonicSparkGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MainMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_SettingsMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_bSettingsMenuActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MusicVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_MouseSens,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_DeveloperMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIonicSparkGameInstance_Statics::NewProp_bDevMenuActive,
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
		{ Z_Construct_UClass_UIonicSparkGameInstance, UIonicSparkGameInstance::StaticClass, TEXT("UIonicSparkGameInstance"), &Z_Registration_Info_UClass_UIonicSparkGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIonicSparkGameInstance), 4099502594U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_3197473496(TEXT("/Script/IonicSpark"),
		Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IonicSpark_Source_IonicSpark_IonicSparkGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
