// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GasRPG/Player/GPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPlayerState() {}
// Cross Module References
	GASRPG_API UClass* Z_Construct_UClass_AGPlayerState_NoRegister();
	GASRPG_API UClass* Z_Construct_UClass_AGPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_GasRPG();
// End Cross Module References
	DEFINE_FUNCTION(AGPlayerState::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGPlayerState::execAddScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AddScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddScore(Z_Param_AddScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGPlayerState::execAddGold)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Gold);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGold(Z_Param_Gold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGPlayerState::execAddKills)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddKills();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGPlayerState::execGetPlayerScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGPlayerState::execGetPlayerNumKills)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerNumKills();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGPlayerState::execGetPlayerGold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerGold();
		P_NATIVE_END;
	}
	void AGPlayerState::StaticRegisterNativesAGPlayerState()
	{
		UClass* Class = AGPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGold", &AGPlayerState::execAddGold },
			{ "AddKills", &AGPlayerState::execAddKills },
			{ "AddScore", &AGPlayerState::execAddScore },
			{ "GetPlayerGold", &AGPlayerState::execGetPlayerGold },
			{ "GetPlayerNumKills", &AGPlayerState::execGetPlayerNumKills },
			{ "GetPlayerScore", &AGPlayerState::execGetPlayerScore },
			{ "Reset", &AGPlayerState::execReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGPlayerState_AddGold_Statics
	{
		struct GPlayerState_eventAddGold_Parms
		{
			int32 Gold;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Gold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGPlayerState_AddGold_Statics::NewProp_Gold = { "Gold", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GPlayerState_eventAddGold_Parms, Gold), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGPlayerState_AddGold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGPlayerState_AddGold_Statics::NewProp_Gold,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGPlayerState_AddGold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGPlayerState_AddGold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGPlayerState, nullptr, "AddGold", nullptr, nullptr, sizeof(GPlayerState_eventAddGold_Parms), Z_Construct_UFunction_AGPlayerState_AddGold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGPlayerState_AddGold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGPlayerState_AddGold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGPlayerState_AddGold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGPlayerState_AddGold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGPlayerState_AddGold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGPlayerState_AddKills_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGPlayerState_AddKills_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGPlayerState_AddKills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGPlayerState, nullptr, "AddKills", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGPlayerState_AddKills_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGPlayerState_AddKills_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGPlayerState_AddKills()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGPlayerState_AddKills_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGPlayerState_AddScore_Statics
	{
		struct GPlayerState_eventAddScore_Parms
		{
			int32 AddScore;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGPlayerState_AddScore_Statics::NewProp_AddScore = { "AddScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GPlayerState_eventAddScore_Parms, AddScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGPlayerState_AddScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGPlayerState_AddScore_Statics::NewProp_AddScore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGPlayerState_AddScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGPlayerState_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGPlayerState, nullptr, "AddScore", nullptr, nullptr, sizeof(GPlayerState_eventAddScore_Parms), Z_Construct_UFunction_AGPlayerState_AddScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGPlayerState_AddScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGPlayerState_AddScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGPlayerState_AddScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGPlayerState_AddScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGPlayerState_AddScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGPlayerState_GetPlayerGold_Statics
	{
		struct GPlayerState_eventGetPlayerGold_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGPlayerState_GetPlayerGold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GPlayerState_eventGetPlayerGold_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGPlayerState_GetPlayerGold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGPlayerState_GetPlayerGold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGPlayerState_GetPlayerGold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGPlayerState_GetPlayerGold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGPlayerState, nullptr, "GetPlayerGold", nullptr, nullptr, sizeof(GPlayerState_eventGetPlayerGold_Parms), Z_Construct_UFunction_AGPlayerState_GetPlayerGold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGPlayerState_GetPlayerGold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGPlayerState_GetPlayerGold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGPlayerState_GetPlayerGold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGPlayerState_GetPlayerGold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGPlayerState_GetPlayerGold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGPlayerState_GetPlayerNumKills_Statics
	{
		struct GPlayerState_eventGetPlayerNumKills_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGPlayerState_GetPlayerNumKills_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GPlayerState_eventGetPlayerNumKills_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGPlayerState_GetPlayerNumKills_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGPlayerState_GetPlayerNumKills_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGPlayerState_GetPlayerNumKills_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGPlayerState_GetPlayerNumKills_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGPlayerState, nullptr, "GetPlayerNumKills", nullptr, nullptr, sizeof(GPlayerState_eventGetPlayerNumKills_Parms), Z_Construct_UFunction_AGPlayerState_GetPlayerNumKills_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGPlayerState_GetPlayerNumKills_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGPlayerState_GetPlayerNumKills_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGPlayerState_GetPlayerNumKills_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGPlayerState_GetPlayerNumKills()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGPlayerState_GetPlayerNumKills_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGPlayerState_GetPlayerScore_Statics
	{
		struct GPlayerState_eventGetPlayerScore_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGPlayerState_GetPlayerScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GPlayerState_eventGetPlayerScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGPlayerState_GetPlayerScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGPlayerState_GetPlayerScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGPlayerState_GetPlayerScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGPlayerState_GetPlayerScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGPlayerState, nullptr, "GetPlayerScore", nullptr, nullptr, sizeof(GPlayerState_eventGetPlayerScore_Parms), Z_Construct_UFunction_AGPlayerState_GetPlayerScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGPlayerState_GetPlayerScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGPlayerState_GetPlayerScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGPlayerState_GetPlayerScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGPlayerState_GetPlayerScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGPlayerState_GetPlayerScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGPlayerState_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGPlayerState_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGPlayerState_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGPlayerState, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGPlayerState_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGPlayerState_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGPlayerState_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGPlayerState_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGPlayerState_NoRegister()
	{
		return AGPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AGPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumKills_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumKills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerGold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerGold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_GasRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGPlayerState_AddGold, "AddGold" }, // 3229832721
		{ &Z_Construct_UFunction_AGPlayerState_AddKills, "AddKills" }, // 3392737769
		{ &Z_Construct_UFunction_AGPlayerState_AddScore, "AddScore" }, // 1701810707
		{ &Z_Construct_UFunction_AGPlayerState_GetPlayerGold, "GetPlayerGold" }, // 4069465905
		{ &Z_Construct_UFunction_AGPlayerState_GetPlayerNumKills, "GetPlayerNumKills" }, // 1692623275
		{ &Z_Construct_UFunction_AGPlayerState_GetPlayerScore, "GetPlayerScore" }, // 2654783875
		{ &Z_Construct_UFunction_AGPlayerState_Reset, "Reset" }, // 1876560590
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/GPlayerState.h" },
		{ "ModuleRelativePath", "Player/GPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGPlayerState_Statics::NewProp_NumKills_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Player/GPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGPlayerState_Statics::NewProp_NumKills = { "NumKills", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGPlayerState, NumKills), METADATA_PARAMS(Z_Construct_UClass_AGPlayerState_Statics::NewProp_NumKills_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGPlayerState_Statics::NewProp_NumKills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGPlayerState_Statics::NewProp_PlayerGold_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Player/GPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGPlayerState_Statics::NewProp_PlayerGold = { "PlayerGold", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGPlayerState, PlayerGold), METADATA_PARAMS(Z_Construct_UClass_AGPlayerState_Statics::NewProp_PlayerGold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGPlayerState_Statics::NewProp_PlayerGold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGPlayerState_Statics::NewProp_PlayerScore_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Player/GPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGPlayerState_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGPlayerState, PlayerScore), METADATA_PARAMS(Z_Construct_UClass_AGPlayerState_Statics::NewProp_PlayerScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGPlayerState_Statics::NewProp_PlayerScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGPlayerState_Statics::NewProp_NumKills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGPlayerState_Statics::NewProp_PlayerGold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGPlayerState_Statics::NewProp_PlayerScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGPlayerState_Statics::ClassParams = {
		&AGPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGPlayerState, 2028812422);
	template<> GASRPG_API UClass* StaticClass<AGPlayerState>()
	{
		return AGPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGPlayerState(Z_Construct_UClass_AGPlayerState, &AGPlayerState::StaticClass, TEXT("/Script/GasRPG"), TEXT("AGPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
