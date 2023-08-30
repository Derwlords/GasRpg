// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GasRPG/Characters/GasPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGasPlayer() {}
// Cross Module References
	GASRPG_API UClass* Z_Construct_UClass_AGasPlayer_NoRegister();
	GASRPG_API UClass* Z_Construct_UClass_AGasPlayer();
	GASRPG_API UClass* Z_Construct_UClass_ABaseCharacter();
	UPackage* Z_Construct_UPackage__Script_GasRPG();
// End Cross Module References
	void AGasPlayer::StaticRegisterNativesAGasPlayer()
	{
	}
	UClass* Z_Construct_UClass_AGasPlayer_NoRegister()
	{
		return AGasPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AGasPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGasPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GasRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGasPlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/GasPlayer.h" },
		{ "ModuleRelativePath", "Characters/GasPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGasPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGasPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGasPlayer_Statics::ClassParams = {
		&AGasPlayer::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGasPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGasPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGasPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGasPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGasPlayer, 3731510703);
	template<> GASRPG_API UClass* StaticClass<AGasPlayer>()
	{
		return AGasPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGasPlayer(Z_Construct_UClass_AGasPlayer, &AGasPlayer::StaticClass, TEXT("/Script/GasRPG"), TEXT("AGasPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGasPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
