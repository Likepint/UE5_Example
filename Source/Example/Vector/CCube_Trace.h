#pragma once

#include "CoreMinimal.h"
#include "Vector/CCube.h"
#include "CCube_Trace.generated.h"

UCLASS()
class EXAMPLE_API ACCube_Trace : public ACCube
{
	GENERATED_BODY()
	
public:
	ACCube_Trace();

protected:
	virtual void Tick(float DeltaSeconds) override;

protected:
	UPROPERTY(EditInstanceOnly)
	class AActor* OtherActor;

private:
	float Speed = 100;
	float Distance = 200;

};
