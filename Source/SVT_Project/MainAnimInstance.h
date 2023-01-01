// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MainAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class SVT_PROJECT_API UMainAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public: 

	virtual void NativeInitializeAnimation() override;

	UFUNCTION(BlueptintCallable, Category = AnimationProperties)
	void UpdateAnimationProperties();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement)
		float MovementSpeed;

	UPROPERTY(EditAnywhere, CPF_BlueprintReadOnly, Category = Movement)
		bool AirJump;

	UPROPERTY(EditAnywhere, CPF_BlueprintReadOnly, Category = Movement)
		class APawn* Pawn;

};
