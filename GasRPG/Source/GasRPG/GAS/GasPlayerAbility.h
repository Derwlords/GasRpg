// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GasRPG/GasRPG.h"
#include "GasPlayerAbility.generated.h"

/**
 * 
 */
UCLASS()
class GASRPG_API UGasPlayerAbility : public UGameplayAbility
{
	GENERATED_BODY()
	

public:

	UGasPlayerAbility();

	UPROPERTY(BlueprintReadOnly, EditAnywhere,Category = Ability)
		EGASAbilityInputID  AbilitiInputID = EGASAbilityInputID::None;

};
