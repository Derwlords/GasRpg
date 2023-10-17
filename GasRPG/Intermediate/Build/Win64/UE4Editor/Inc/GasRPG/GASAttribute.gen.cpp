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
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	DEFINE_FUNCTION(UGASAttribute::execOnRep_AttackPower)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAttackPower);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttackPower(Z_Param_Out_OldAttackPower);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGASAttribute::execOnRep_Stamina)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldStamina);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Stamina(Z_Param_Out_OldStamina);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGASAttribute::execOnRep_Health)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
		P_NATIVE_END;
	}
	void UGASAttribute::StaticRegisterNativesUGASAttribute()
	{
		UClass* Class = UGASAttribute::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_AttackPower", &UGASAttribute::execOnRep_AttackPower },
			{ "OnRep_Health", &UGASAttribute::execOnRep_Health },
			{ "OnRep_Stamina", &UGASAttribute::execOnRep_Stamina },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGASAttribute_OnRep_AttackPower_Statics
	{
		struct GASAttribute_eventOnRep_AttackPower_Parms
		{
			FGameplayAttributeData OldAttackPower;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldAttackPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldAttackPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttribute_OnRep_AttackPower_Statics::NewProp_OldAttackPower_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASAttribute_OnRep_AttackPower_Statics::NewProp_OldAttackPower = { "OldAttackPower", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GASAttribute_eventOnRep_AttackPower_Parms, OldAttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGASAttribute_OnRep_AttackPower_Statics::NewProp_OldAttackPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttribute_OnRep_AttackPower_Statics::NewProp_OldAttackPower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASAttribute_OnRep_AttackPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASAttribute_OnRep_AttackPower_Statics::NewProp_OldAttackPower,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttribute_OnRep_AttackPower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GAS/GASAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASAttribute_OnRep_AttackPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASAttribute, nullptr, "OnRep_AttackPower", nullptr, nullptr, sizeof(GASAttribute_eventOnRep_AttackPower_Parms), Z_Construct_UFunction_UGASAttribute_OnRep_AttackPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttribute_OnRep_AttackPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGASAttribute_OnRep_AttackPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttribute_OnRep_AttackPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGASAttribute_OnRep_AttackPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGASAttribute_OnRep_AttackPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGASAttribute_OnRep_Health_Statics
	{
		struct GASAttribute_eventOnRep_Health_Parms
		{
			FGameplayAttributeData OldHealth;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttribute_OnRep_Health_Statics::NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASAttribute_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GASAttribute_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGASAttribute_OnRep_Health_Statics::NewProp_OldHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttribute_OnRep_Health_Statics::NewProp_OldHealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASAttribute_OnRep_Health_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASAttribute_OnRep_Health_Statics::NewProp_OldHealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttribute_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GAS/GASAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASAttribute_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASAttribute, nullptr, "OnRep_Health", nullptr, nullptr, sizeof(GASAttribute_eventOnRep_Health_Parms), Z_Construct_UFunction_UGASAttribute_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttribute_OnRep_Health_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGASAttribute_OnRep_Health_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttribute_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGASAttribute_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGASAttribute_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGASAttribute_OnRep_Stamina_Statics
	{
		struct GASAttribute_eventOnRep_Stamina_Parms
		{
			FGameplayAttributeData OldStamina;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldStamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldStamina;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttribute_OnRep_Stamina_Statics::NewProp_OldStamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGASAttribute_OnRep_Stamina_Statics::NewProp_OldStamina = { "OldStamina", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GASAttribute_eventOnRep_Stamina_Parms, OldStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UGASAttribute_OnRep_Stamina_Statics::NewProp_OldStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttribute_OnRep_Stamina_Statics::NewProp_OldStamina_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGASAttribute_OnRep_Stamina_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGASAttribute_OnRep_Stamina_Statics::NewProp_OldStamina,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGASAttribute_OnRep_Stamina_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GAS/GASAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGASAttribute_OnRep_Stamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGASAttribute, nullptr, "OnRep_Stamina", nullptr, nullptr, sizeof(GASAttribute_eventOnRep_Stamina_Parms), Z_Construct_UFunction_UGASAttribute_OnRep_Stamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttribute_OnRep_Stamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGASAttribute_OnRep_Stamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGASAttribute_OnRep_Stamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGASAttribute_OnRep_Stamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGASAttribute_OnRep_Stamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGASAttribute_NoRegister()
	{
		return UGASAttribute::StaticClass();
	}
	struct Z_Construct_UClass_UGASAttribute_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGASAttribute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_GasRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGASAttribute_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGASAttribute_OnRep_AttackPower, "OnRep_AttackPower" }, // 1989159008
		{ &Z_Construct_UFunction_UGASAttribute_OnRep_Health, "OnRep_Health" }, // 1100790120
		{ &Z_Construct_UFunction_UGASAttribute_OnRep_Stamina, "OnRep_Stamina" }, // 4266292340
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASAttribute_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GAS/GASAttribute.h" },
		{ "ModuleRelativePath", "GAS/GASAttribute.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASAttribute_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GAS/GASAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttribute_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGASAttribute, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGASAttribute_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttribute_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASAttribute_Statics::NewProp_Stamina_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GAS/GASAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttribute_Statics::NewProp_Stamina = { "Stamina", "OnRep_Stamina", (EPropertyFlags)0x0010000100000024, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGASAttribute, Stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGASAttribute_Statics::NewProp_Stamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttribute_Statics::NewProp_Stamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASAttribute_Statics::NewProp_AttackPower_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GAS/GASAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGASAttribute_Statics::NewProp_AttackPower = { "AttackPower", "OnRep_AttackPower", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGASAttribute, AttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGASAttribute_Statics::NewProp_AttackPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttribute_Statics::NewProp_AttackPower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGASAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttribute_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttribute_Statics::NewProp_Stamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGASAttribute_Statics::NewProp_AttackPower,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGASAttribute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGASAttribute>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGASAttribute_Statics::ClassParams = {
		&UGASAttribute::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGASAttribute_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGASAttribute_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UGASAttribute, 2230657394);
	template<> GASRPG_API UClass* StaticClass<UGASAttribute>()
	{
		return UGASAttribute::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGASAttribute(Z_Construct_UClass_UGASAttribute, &UGASAttribute::StaticClass, TEXT("/Script/GasRPG"), TEXT("UGASAttribute"), false, nullptr, nullptr, nullptr);

	void UGASAttribute::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_Stamina(TEXT("Stamina"));
		static const FName Name_AttackPower(TEXT("AttackPower"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_Stamina == ClassReps[(int32)ENetFields_Private::Stamina].Property->GetFName()
			&& Name_AttackPower == ClassReps[(int32)ENetFields_Private::AttackPower].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGASAttribute"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGASAttribute);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
