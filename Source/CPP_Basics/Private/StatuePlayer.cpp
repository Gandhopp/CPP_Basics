// Fill out your copyright notice in the Description page of Project Settings.


#include "StatuePlayer.h"
#include "Kismet/KismetMathLibrary.h"
// Sets default values
AStatuePlayer::AStatuePlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AStatuePlayer::Move(FVector2D AxisInput)
{
	auto MoveVector = FVector(AxisInput.X, AxisInput.Y, 0.f);
	auto TransformedVector = UKismetMathLibrary::TransformDirection(GetActorTransform(), MoveVector);

	auto DeltaTime = GetWorld()->GetDeltaSeconds();

	MoveVector *= MoveSpeed;
	
	SetActorLocation(GetActorLocation() + MoveVector * DeltaTime);
}
