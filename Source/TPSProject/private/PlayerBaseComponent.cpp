// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerBaseComponent.h"

void UPlayerBaseComponent::BeginPlay()
{
	Super::BeginPlay();

	me = Cast<ATPSPlayer>(GetOwner());
	moveComp = me->GetCharacterMovement();

}
