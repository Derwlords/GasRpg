// Fill out your copyright notice in the Description page of Project Settings.


#include "GasPlayer.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"


AGasPlayer::AGasPlayer()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	CharacterMovement = GetCharacterMovement();
	BaseWalkSpeed = 700;
	SprintSpeed = 1500;
	CharacterMovement->MaxWalkSpeed = BaseWalkSpeed;
	

	TurnRate = 30;
	LookUpRate = 30;

	SprintActive = false;
}

void AGasPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AGasPlayer::StartSprint);
	

	PlayerInputComponent->BindAxis("MoveForward", this, &AGasPlayer::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AGasPlayer::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &AGasPlayer::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &AGasPlayer::LookUp);

}

void AGasPlayer::Turn(float value)
{
	AddControllerYawInput(TurnRate * GetWorld()->GetDeltaSeconds() * value);
}

void AGasPlayer::LookUp(float value)
{
	AddControllerPitchInput(LookUpRate * GetWorld()->GetDeltaSeconds() * value);
}

void AGasPlayer::MoveForward(float value)
{
	AddMovementInput(GetActorForwardVector(), value);
}

void AGasPlayer::MoveRight(float value)
{
	AddMovementInput(GetActorRightVector(), value);
}

void AGasPlayer::StartSprint()
{
	if (!SprintActive)
	{
		CharacterMovement->MaxWalkSpeed = SprintSpeed;
		SprintActive = true;
	}
	else
	{
		StopSprint();
	}
}

void AGasPlayer::StopSprint()
{
	CharacterMovement->MaxWalkSpeed = BaseWalkSpeed;
}
