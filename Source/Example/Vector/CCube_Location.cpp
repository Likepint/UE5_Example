#include "Vector/CCube_Location.h"

ACCube_Location::ACCube_Location()
{
	static ConstructorHelpers::FObjectFinder<UMaterialInstance> M_Asset(TEXT("/Script/Engine.MaterialInstanceConstant'/Game/Vector/Materials/MI_Blue.MI_Blue'"));
	if (M_Asset.Succeeded())
		StaticMesh->SetMaterial(0, M_Asset.Object);

}

void ACCube_Location::BeginPlay()
{
	this->SetActorLocation(this->GetActorLocation() + Location);

}
