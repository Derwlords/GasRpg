// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "GasPlayer.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UCharacterMovementComponent;
UCLASS()
class GASRPG_API AGasPlayer : public ABaseCharacter
{
	GENERATED_BODY()


	AGasPlayer();

	

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
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



	void MoveForward(float value);
	void MoveRight(float value);

	void StartSprint();
	void StopSprint();

	UPROPERTY(EditDefaultsOnly, Category = MoveSpeed)
	float SprintSpeed;

	UPROPERTY(EditDefaultsOnly, Category = MoveSpeed)
	float BaseWalkSpeed;

	UPROPERTY(EditDefaultsOnly, Category = Camera)
	bool SprintActive;
	UCharacterMovementComponent* CharacterMovement;



};
