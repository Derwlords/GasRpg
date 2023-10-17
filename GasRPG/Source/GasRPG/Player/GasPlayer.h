// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GasRpg/Characters/BaseCharacter.h"
#include "GasPlayer.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UCharacterMovementComponent;

class UGASAttribute;
class UGameplayEffect;
class UGasPlayerAbility;

UCLASS()
class GASRPG_API AGasPlayer : public ABaseCharacter
{
	GENERATED_BODY()

public:

	AGasPlayer();

	

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	virtual void InitializerAttributes();
	virtual void GiveAbilities();


	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState()override;

	

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "GAS")
		TSubclassOf<UGameplayEffect> DefaultAttributeEffect;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "GAS")
		TArray<TSubclassOf<UGasPlayerAbility>> DefaultAbilities;

	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = GAS)
	UGASAttribute* Attribute;
	
private:



	UPROPERTY(EditDefaultsOnly,Category = Camera)
	USpringArmComponent* SpringArm;
	UPROPERTY(EditDefaultsOnly, Category = Camera)
	UCameraComponent* Camera;

	UPROPERTY(EditDefaultsOnly, Category = Camera)
	float LookUpRate;
	UPROPERTY(EditDefaultsOnly, Category = Camera)
	float TurnRate;

	void Turn(float value);
	void LookUp(float value);

	void StartSprint();
	void StopSprint();
	void SprintCost();

	FTimerHandle SprintTimer;
	UPROPERTY(EditDefaultsOnly, Category = Sprint)
	float StaminaDecreaseDelay;
	UPROPERTY(EditDefaultsOnly, Category = Sprint)
	bool bSprintActive;

	
	void MoveForward(float value);
	void MoveRight(float value);

	

	UPROPERTY(EditDefaultsOnly, Category = MoveSpeed)
	float SprintSpeed;

	UPROPERTY(EditDefaultsOnly, Category = MoveSpeed)
	float BaseWalkSpeed;

	
	UCharacterMovementComponent* CharacterMovement;



};
