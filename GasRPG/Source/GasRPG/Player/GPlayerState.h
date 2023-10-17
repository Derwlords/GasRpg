// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "GPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class GASRPG_API AGPlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:

	AGPlayerState();


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Score")
	int32 NumKills;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Score")
	int32 PlayerGold;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Score")
	int32 PlayerScore;

	UFUNCTION(BlueprintCallable)
	int32 GetPlayerGold() { return PlayerGold; }
	UFUNCTION(BlueprintCallable)
	int32 GetPlayerNumKills() { return NumKills; }
	UFUNCTION(BlueprintCallable)
	int32 GetPlayerScore() { return PlayerScore; }
	
	UFUNCTION(BlueprintCallable)
	void AddKills();

	UFUNCTION(BlueprintCallable)
	void AddGold(int32 Gold);

	UFUNCTION(BlueprintCallable)
	void AddScore(int32 AddScore);

	UFUNCTION(BlueprintCallable)
	void Reset();
private:

	
};
