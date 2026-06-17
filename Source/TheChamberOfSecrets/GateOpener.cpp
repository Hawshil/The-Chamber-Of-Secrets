#include "GateOpener.h"

UGateOpener::UGateOpener()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UGateOpener::BeginPlay()
{
	Super::BeginPlay();
}

void UGateOpener::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}
