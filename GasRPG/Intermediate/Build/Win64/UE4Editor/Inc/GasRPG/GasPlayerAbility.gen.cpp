// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GasRPG/GAS/GasPlayerAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGasPlayerAbility() {}
// Cross Module References
	GASRPG_API UClass* Z_Construct_UClass_UGasPlayerAbility_NoRegister();
	GASRPG_API UClass* Z_Construct_UClass_UGasPlayerAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_GasRPG();
// End Cross Module References
	void UGasPlayerAbility::StaticRegisterNativesUGasPlayerAbility()
	{
	}
	UClass* Z_Construct_UClass_UGasPlayerAbility_NoRegister()
	{
		return UGasPlayerAbility::StaticClass();
	}
	struct Z_Construct_UClass_UGasPlayerAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGasPlayerAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_GasRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGasPlayerAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GAS/GasPlayerAbility.h" },
		{ "ModuleRelativePath", "GAS/GasPlayerAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGasPlayerAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGasPlayerAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGasPlayerAbility_Statics::ClassParams = {
		&UGasPlayerAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGasPlayerAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGasPlayerAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGasPlayerAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGasPlayerAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGasPlayerAbility, 1545554013);
	template<> GASRPG_API UClass* StaticClass<UGasPlayerAbility>()
	{
		return UGasPlayerAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGasPlayerAbility(Z_Construct_UClass_UGasPlayerAbility, &UGasPlayerAbility::StaticClass, TEXT("/Script/GasRPG"), TEXT("UGasPlayerAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGasPlayerAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
