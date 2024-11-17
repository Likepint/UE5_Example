#include "Vector/CCube_Direction.h"

ACCube_Direction::ACCube_Direction()
{
	static ConstructorHelpers::FObjectFinder<UMaterialInstance> M_Asset(TEXT("/Script/Engine.MaterialInstanceConstant'/Game/Vector/Materials/MI_Red.MI_Red'"));
	if (M_Asset.Succeeded())
		StaticMesh->SetMaterial(0, M_Asset.Object);

}

void ACCube_Direction::BeginPlay()
{
	this->SetActorLocation(this->GetActorLocation() + (Direction.GetSafeNormal() * Distance));

}
