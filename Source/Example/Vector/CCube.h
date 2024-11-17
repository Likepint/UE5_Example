#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CCube.generated.h"

UCLASS()
class EXAMPLE_API ACCube : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere)
	class USceneComponent* Scene;

	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* StaticMesh;
	
public:	
	ACCube();

};
