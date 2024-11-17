#include "Vector/CCube.h"
#include "Global.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

ACCube::ACCube()
{
	PrimaryActorTick.bCanEverTick = true;

	CHelpers::CreateComponent<USceneComponent>(this, &Scene, "Scene", RootComponent);
	CHelpers::CreateComponent<UStaticMeshComponent>(this, &StaticMesh, "StaticMesh", Scene);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_Asset(TEXT("/Script/Engine.StaticMesh'/Game/Vector/Meshes/Cube.Cube'"));
	if (SM_Asset.Succeeded())
		StaticMesh->SetStaticMesh(SM_Asset.Object);
}
