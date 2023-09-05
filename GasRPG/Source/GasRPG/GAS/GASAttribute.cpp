// Fill out your copyright notice in the Description page of Project Settings.


#include "GASAttribute.h"

#include "Net/UnrealNetwork.h"

UGASAttribute::UGASAttribute()
{

}
void UGASAttribute::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UGASAttribute, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGASAttribute, Stamina, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UGASAttribute, AttackPower, COND_None, REPNOTIFY_Always);
}

void UGASAttribute::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGASAttribute, Health, OldHealth);
}

void UGASAttribute::OnRep_Stamina(const FGameplayAttributeData& OldStamina)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGASAttribute, Stamina, OldStamina);
}

void UGASAttribute::OnRep_AttackPower(const FGameplayAttributeData& OldAttackPower)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UGASAttribute, AttackPower, OldAttackPower);
}
