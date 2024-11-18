#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CQuinn.generated.h"

UCLASS()
class EXAMPLE_API ACQuinn : public ACharacter
{
	GENERATED_BODY()

public:
	ACQuinn();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
