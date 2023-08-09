// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RotatorComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CPP_BASICS_API URotatorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	URotatorComponent();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)

	float rotationSpeed = 20.f;
public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};
