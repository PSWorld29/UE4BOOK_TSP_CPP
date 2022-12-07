// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerBaseComponent.h"
#include "PlayerMove.generated.h"

/**
 * 
 */
UCLASS()
class TPSPROJECT_API UPlayerMove : public UPlayerBaseComponent
{
	GENERATED_BODY()

public:
	UPlayerMove();

	virtual void BeginPlay() override;

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFuntion) override;
	
public:
	void Turn(float value);

	void LookUp(float value);

	virtual void SetupInputBinding(class UInputComponent* PlayerInputComponent) override;

public:

	UPROPERTY(VisibleAnywhere, Category = camera)
		class USpringArmComponent* springArmComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = camera)
		class UCameraComponent* tpsCamComp;



	UPROPERTY(EditAnywhere, Category = PlayerSetting)
		float walkSpeed = 200;

	UPROPERTY(EditAnywhere, Category = PlayerSetting)
		float runSpeed = 600;

	FVector direction;

	void InputHorizontal(float value);

	void InputVertical(float value);

	void InputJump();

	void Move();

	void InputRun();
};
