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

	// AActor *CellGate = GetOwner();
	// UE_LOG(LogTemp, Log, TEXT("CellGate address: %u"), CellGate);
	// UE_LOG(LogTemp, Log, TEXT("CellGate name: %s"), *CellGate->GetName());

	// FVector coords = CellGate->GetActorLocation();
	// FString coordString = coords.ToCompactString();
	// UE_LOG(LogTemp, Log, TEXT("Coordinates of the Cell Gate are: %s"), *coordString);

	UE_LOG(LogTemp, Log, TEXT("Compact Logging: %s"), *((GetOwner()->GetActorLocation()).ToCompactString()));
}
