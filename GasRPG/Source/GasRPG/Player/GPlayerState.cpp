// Fill out your copyright notice in the Description page of Project Settings.


#include "GPlayerState.h"

AGPlayerState::AGPlayerState()
{
	PlayerScore = 0;
	NumKills = 0;
	PlayerGold = 0;
}

void AGPlayerState::AddKills()
{
	NumKills++;
}

void AGPlayerState::AddGold(int32 Gold)
{
	PlayerGold += Gold;
}

void AGPlayerState::AddScore(int32 AddScore)
{
	PlayerScore += AddScore;
}

void AGPlayerState::Reset()
{
	PlayerScore = 0;
	NumKills = 0;
	PlayerGold = 0;
}
