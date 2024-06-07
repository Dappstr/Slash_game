// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class SLASH_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	AItem();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintPure)
	float transformed_sin();

	UFUNCTION(BlueprintPure)
	float transformed_cos();

private:
	UPROPERTY(EditAnywhere)
	float m_running_time;

	UPROPERTY(EditAnywhere)
	float m_amplitude{ 0.25f };

	UPROPERTY(EditAnywhere)
	float m_time_constant{ 5.f };
};
