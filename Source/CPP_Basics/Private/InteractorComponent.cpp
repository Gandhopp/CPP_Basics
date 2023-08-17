#include "InteractorComponent.h"
#include <PickupInterface.h>

UInteractorComponent::UInteractorComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	TraceSphere = FCollisionShape::MakeSphere(radius);
}

void UInteractorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	const auto Owner = GetOwner();

	TArray<FOverlapResult> Actors;

	GetWorld()->OverlapMultiByChannel(Actors,Owner->GetActorLocation(), FQuat::Identity, ECollisionChannel::ECC_GameTraceChannel1, TraceSphere);

	for (int i = 0; i < Actors.Num(); i++) 
	{
		auto ActorReference = Actors[i].GetActor();

		if (ActorReference->Implements<UPickupInterface>()) 
		{
			IPickupInterface::Execute_Pickup(ActorReference);
		}
	}
}

