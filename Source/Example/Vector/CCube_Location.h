#pragma once

#include "CoreMinimal.h"
#include "Vector/CCube.h"
#include "CCube_Location.generated.h"

UCLASS()
class EXAMPLE_API ACCube_Location : public ACCube
{
	GENERATED_BODY()
	
public:
	ACCube_Location();

protected:
	virtual void BeginPlay() override;

private:
	FVector Location = { 100, -200, 0 };
};
