// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomMoveComponent.h"
#include "Kismet/KismetMathLibrary.h"

void URandomMoveComponent::RandomMove()
{
	auto owner = GetOwner();

	FVector RandomUnitVector = UKismetMathLibrary::RandomUnitVector();
	RandomUnitVector.Z = 0.f;

	const FVector RandomLocation = RandomUnitVector * Radius;

	owner->SetActorLocation(owner->GetActorLocation() + RandomLocation);
}

// Sets default values for this component's properties
URandomMoveComponent::URandomMoveComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called every frame
void URandomMoveComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	Timer += DeltaTime;
	if (Timer > Interval) {
		Timer = 0;
		RandomMove();
	}
}

