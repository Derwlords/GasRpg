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
	GASRPG_API UEnum* Z_Construct_UEnum_GasRPG_EGASAbilityInputID();
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
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AbilitiInputID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitiInputID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AbilitiInputID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGasPlayerAbility_Statics::NewProp_AbilitiInputID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGasPlayerAbility_Statics::NewProp_AbilitiInputID_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "GAS/GasPlayerAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGasPlayerAbility_Statics::NewProp_AbilitiInputID = { "AbilitiInputID", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGasPlayerAbility, AbilitiInputID), Z_Construct_UEnum_GasRPG_EGASAbilityInputID, METADATA_PARAMS(Z_Construct_UClass_UGasPlayerAbility_Statics::NewProp_AbilitiInputID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGasPlayerAbility_Statics::NewProp_AbilitiInputID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGasPlayerAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGasPlayerAbility_Statics::NewProp_AbilitiInputID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGasPlayerAbility_Statics::NewProp_AbilitiInputID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGasPlayerAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGasPlayerAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGasPlayerAbility_Statics::ClassParams = {
		&UGasPlayerAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGasPlayerAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGasPlayerAbility_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UGasPlayerAbility, 629698186);
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
