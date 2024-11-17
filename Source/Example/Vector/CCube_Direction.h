#pragma once

#include "CoreMinimal.h"
#include "Vector/CCube.h"
#include "CCube_Direction.generated.h"

UCLASS()
class EXAMPLE_API ACCube_Direction : public ACCube
{
	GENERATED_BODY()
	
public:
	ACCube_Direction();

protected:
	virtual void BeginPlay() override;

private:
	FVector Direction = { 1, 1, 0 };
	float Distance = 200;

};
