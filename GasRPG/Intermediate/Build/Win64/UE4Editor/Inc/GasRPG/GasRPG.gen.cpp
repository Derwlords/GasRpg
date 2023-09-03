// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GasRPG/GasRPG.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGasRPG() {}
// Cross Module References
	GASRPG_API UEnum* Z_Construct_UEnum_GasRPG_EGASAbilityInputID();
	UPackage* Z_Construct_UPackage__Script_GasRPG();
// End Cross Module References
	static UEnum* EGASAbilityInputID_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GasRPG_EGASAbilityInputID, Z_Construct_UPackage__Script_GasRPG(), TEXT("EGASAbilityInputID"));
		}
		return Singleton;
	}
	template<> GASRPG_API UEnum* StaticEnum<EGASAbilityInputID>()
	{
		return EGASAbilityInputID_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGASAbilityInputID(EGASAbilityInputID_StaticEnum, TEXT("/Script/GasRPG"), TEXT("EGASAbilityInputID"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GasRPG_EGASAbilityInputID_Hash() { return 1200251741U; }
	UEnum* Z_Construct_UEnum_GasRPG_EGASAbilityInputID()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GasRPG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGASAbilityInputID"), 0, Get_Z_Construct_UEnum_GasRPG_EGASAbilityInputID_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGASAbilityInputID::None", (int64)EGASAbilityInputID::None },
				{ "EGASAbilityInputID::Confirm", (int64)EGASAbilityInputID::Confirm },
				{ "EGASAbilityInputID::Cancel", (int64)EGASAbilityInputID::Cancel },
				{ "EGASAbilityInputID::Punch", (int64)EGASAbilityInputID::Punch },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cancel.Name", "EGASAbilityInputID::Cancel" },
				{ "Confirm.Name", "EGASAbilityInputID::Confirm" },
				{ "ModuleRelativePath", "GasRPG.h" },
				{ "None.Name", "EGASAbilityInputID::None" },
				{ "Punch.Name", "EGASAbilityInputID::Punch" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GasRPG,
				nullptr,
				"EGASAbilityInputID",
				"EGASAbilityInputID",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
