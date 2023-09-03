// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GasRPG/GAS/GASPlayerSystemComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASPlayerSystemComponent() {}
// Cross Module References
	GASRPG_API UClass* Z_Construct_UClass_UGASPlayerSystemComponent_NoRegister();
	GASRPG_API UClass* Z_Construct_UClass_UGASPlayerSystemComponent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	UPackage* Z_Construct_UPackage__Script_GasRPG();
// End Cross Module References
	void UGASPlayerSystemComponent::StaticRegisterNativesUGASPlayerSystemComponent()
	{
	}
	UClass* Z_Construct_UClass_UGASPlayerSystemComponent_NoRegister()
	{
		return UGASPlayerSystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGASPlayerSystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGASPlayerSystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GasRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASPlayerSystemComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "GAS/GASPlayerSystemComponent.h" },
		{ "ModuleRelativePath", "GAS/GASPlayerSystemComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGASPlayerSystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGASPlayerSystemComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGASPlayerSystemComponent_Statics::ClassParams = {
		&UGASPlayerSystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGASPlayerSystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGASPlayerSystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGASPlayerSystemComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGASPlayerSystemComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGASPlayerSystemComponent, 2717387428);
	template<> GASRPG_API UClass* StaticClass<UGASPlayerSystemComponent>()
	{
		return UGASPlayerSystemComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGASPlayerSystemComponent(Z_Construct_UClass_UGASPlayerSystemComponent, &UGASPlayerSystemComponent::StaticClass, TEXT("/Script/GasRPG"), TEXT("UGASPlayerSystemComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGASPlayerSystemComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
