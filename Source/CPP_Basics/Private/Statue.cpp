#include "Statue.h"


AStatue::AStatue()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AStatue::Pickup_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, FString("Interfaced"));

}
