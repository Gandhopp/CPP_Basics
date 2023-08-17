// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupInterface.h"
#include "GameFramework/Actor.h"
#include "Statue.generated.h"

UCLASS()
class CPP_BASICS_API AStatue : public AActor, public IPickupInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStatue();
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	void Pickup();
	virtual void Pickup_Implementation() override;
};