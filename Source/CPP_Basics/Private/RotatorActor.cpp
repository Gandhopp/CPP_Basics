// Fill out your copyright notice in the Description page of Project Settings.


#include "RotatorActor.h"

// Sets default values
ARotatorActor::ARotatorActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	rotatorComponent = CreateDefaultSubobject<URotatorComponent>(TEXT("Rotator"));
}