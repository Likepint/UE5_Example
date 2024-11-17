#include "Vector/CCube_Trace.h"
#include "Kismet/KismetSystemLibrary.h"

ACCube_Trace::ACCube_Trace()
{
	static ConstructorHelpers::FObjectFinder<UMaterialInstance> M_Asset(TEXT("/Script/Engine.MaterialInstanceConstant'/Game/Vector/Materials/MI_Green.MI_Green'"));
	if (M_Asset.Succeeded())
		StaticMesh->SetMaterial(0, M_Asset.Object);

}

void ACCube_Trace::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (!!OtherActor)
	{
		FVector ToDistance = OtherActor->GetActorLocation() - this->GetActorLocation();

		float DelSpeed = DeltaSeconds * Speed;

		if (GetDistanceTo(OtherActor) > Distance)
			this->SetActorLocation((DelSpeed * ToDistance.GetSafeNormal()) + this->GetActorLocation());
		else UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, false);
	}

}
