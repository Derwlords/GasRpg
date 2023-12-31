// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GasRPG/GasRPGGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGasRPGGameModeBase() {}
// Cross Module References
	GASRPG_API UClass* Z_Construct_UClass_AGasRPGGameModeBase_NoRegister();
	GASRPG_API UClass* Z_Construct_UClass_AGasRPGGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GasRPG();
// End Cross Module References
	void AGasRPGGameModeBase::StaticRegisterNativesAGasRPGGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGasRPGGameModeBase_NoRegister()
	{
		return AGasRPGGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGasRPGGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGasRPGGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GasRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGasRPGGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GasRPGGameModeBase.h" },
		{ "ModuleRelativePath", "GasRPGGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGasRPGGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGasRPGGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGasRPGGameModeBase_Statics::ClassParams = {
		&AGasRPGGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGasRPGGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGasRPGGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGasRPGGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGasRPGGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGasRPGGameModeBase, 2347288038);
	template<> GASRPG_API UClass* StaticClass<AGasRPGGameModeBase>()
	{
		return AGasRPGGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGasRPGGameModeBase(Z_Construct_UClass_AGasRPGGameModeBase, &AGasRPGGameModeBase::StaticClass, TEXT("/Script/GasRPG"), TEXT("AGasRPGGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGasRPGGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
