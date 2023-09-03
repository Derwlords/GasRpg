// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GasRPG/GAS/GASAttribute.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASAttribute() {}
// Cross Module References
	GASRPG_API UClass* Z_Construct_UClass_UGASAttribute_NoRegister();
	GASRPG_API UClass* Z_Construct_UClass_UGASAttribute();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_GasRPG();
// End Cross Module References
	void UGASAttribute::StaticRegisterNativesUGASAttribute()
	{
	}
	UClass* Z_Construct_UClass_UGASAttribute_NoRegister()
	{
		return UGASAttribute::StaticClass();
	}
	struct Z_Construct_UClass_UGASAttribute_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGASAttribute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_GasRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASAttribute_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GAS/GASAttribute.h" },
		{ "ModuleRelativePath", "GAS/GASAttribute.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGASAttribute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGASAttribute>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGASAttribute_Statics::ClassParams = {
		&UGASAttribute::StaticClass,
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
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGASAttribute_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttribute_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGASAttribute()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGASAttribute_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGASAttribute, 790096832);
	template<> GASRPG_API UClass* StaticClass<UGASAttribute>()
	{
		return UGASAttribute::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGASAttribute(Z_Construct_UClass_UGASAttribute, &UGASAttribute::StaticClass, TEXT("/Script/GasRPG"), TEXT("UGASAttribute"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGASAttribute);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
