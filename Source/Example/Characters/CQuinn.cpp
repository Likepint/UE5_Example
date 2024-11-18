#include "Characters/CQuinn.h"
#include "Global.h"
#include "Components/SkeletalMeshComponent.h"

ACQuinn::ACQuinn()
{
	PrimaryActorTick.bCanEverTick = true;

	// Skeletal Mesh
	USkeletalMesh* mesh = CHelpers::GetAsset<USkeletalMesh>("/Script/Engine.SkeletalMesh'/Game/Characters/Meshes/SKM_Quinn.SKM_Quinn'");
	GetMesh()->SetSkeletalMesh(mesh);

	GetMesh()->SetRelativeLocation(FVector(0, 0, -90));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));
}

void ACQuinn::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACQuinn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACQuinn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
