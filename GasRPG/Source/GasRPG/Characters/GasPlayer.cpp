// Fill out your copyright notice in the Description page of Project Settings.


#include "GasPlayer.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GasRPG/GAS/GASPlayerSystemComponent.h"
#include "GasRPG/GAS/GasPlayerAbility.h"
#include "GasRPG/GAS/GASAttribute.h"
#include <GameplayEffectTypes.h>

AGasPlayer::AGasPlayer()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);

	AbilitySystemComponent = CreateDefaultSubobject<UGASPlayerSystemComponent>(TEXT("AbilitySystemComp"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);
	CharacterMovement = GetCharacterMovement();

	Attribute = CreateDefaultSubobject<UGASAttribute>(TEXT("Attribute"));



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


	if (AbilitySystemComponent && InputComponent)
	{
		const FGameplayAbilityInputBinds Binds("Confirm", "Cancel", "EGASAbilityInputID", static_cast<int32>(EGASAbilityInputID::Confirm), static_cast<int32>(EGASAbilityInputID::Cancel));
		AbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent, Binds);
	}
}

UAbilitySystemComponent* AGasPlayer::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AGasPlayer::InitializerAttributes()
{
	if (AbilitySystemComponent && DefaultAttributeEffect)
	{
		FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
		EffectContext.AddSourceObject(this);

		FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(DefaultAttributeEffect, 1, EffectContext);

		if (SpecHandle.IsValid())
		{
			FActiveGameplayEffectHandle GEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
		}
	}
}

void AGasPlayer::GiveAbilities()
{
	if (HasAuthority() && AbilitySystemComponent)
	{
		for (TSubclassOf<UGasPlayerAbility> & StartupAbility : DefaultAbilities)
		{
			AbilitySystemComponent->GiveAbility(
				FGameplayAbilitySpec(StartupAbility, 1, static_cast<int32>(StartupAbility.GetDefaultObject()->AbilitiInputID), this));
			
		}
	}
}

void AGasPlayer::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	AbilitySystemComponent->InitAbilityActorInfo(this,this);

	InitializerAttributes();
	GiveAbilities();
}

void AGasPlayer::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	AbilitySystemComponent->InitAbilityActorInfo(this, this);
	InitializerAttributes();

	if (AbilitySystemComponent && InputComponent)
	{
		const FGameplayAbilityInputBinds Binds("Confirm", "Cancel", "EGASAbilityInputID", static_cast<int32>(EGASAbilityInputID::Confirm), static_cast<int32>(EGASAbilityInputID::Cancel));
		AbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent, Binds);
	}
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
