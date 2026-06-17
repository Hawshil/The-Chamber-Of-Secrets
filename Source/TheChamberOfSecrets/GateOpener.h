#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GateOpener.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class THECHAMBEROFSECRETS_API UGateOpener : public UActorComponent
{
	GENERATED_BODY()

public:
	UGateOpener();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
};
