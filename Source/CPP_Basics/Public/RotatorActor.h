// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotatorComponent.h"
#include "RotatorActor.generated.h"

UCLASS(BlueprintType, Blueprintable)
class CPP_BASICS_API ARotatorActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotatorActor();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	URotatorComponent* rotatorComponent;
};
