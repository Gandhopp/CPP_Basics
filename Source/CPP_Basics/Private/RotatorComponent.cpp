// Fill out your copyright notice in the Description page of Project Settings.
#include "RotatorComponent.h"

// Sets default values for this component's properties
URotatorComponent::URotatorComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

// Called every frame
void URotatorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	auto owner = GetOwner();
	auto Rotator = FRotator(0.f, rotationSpeed * DeltaTime, 0.f);

	owner->AddActorLocalRotation(Rotator);
}