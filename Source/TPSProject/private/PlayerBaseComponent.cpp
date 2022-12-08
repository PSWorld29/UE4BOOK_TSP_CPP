// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerBaseComponent.h"

void UPlayerBaseComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void UPlayerBaseComponent::InitializeComponent()
{
	Super::InitializeComponent();

	me = Cast<ATPSPlayer>(GetOwner());
	moveComp = me->GetCharacterMovement();

	me->OnInputBindingDelegate.AddUObject(this, &UPlayerBaseComponent::SetupInputBinding);
}
