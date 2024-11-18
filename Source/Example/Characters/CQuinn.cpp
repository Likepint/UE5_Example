#include "Characters/CQuinn.h"
#include "Global.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

ACQuinn::ACQuinn()
{
	PrimaryActorTick.bCanEverTick = true;

	// Skeletal Mesh
	USkeletalMesh* mesh = CHelpers::GetAsset<USkeletalMesh>("/Script/Engine.SkeletalMesh'/Game/Characters/Meshes/SKM_Quinn.SKM_Quinn'");
	GetMesh()->SetSkeletalMesh(mesh);
	GetMesh()->SetRelativeLocation(FVector(0, 0, -90));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));

	// SpringArm
	CHelpers::CreateComponent<USpringArmComponent>(this, &SpringArm, "SpringArm", GetMesh());
	SpringArm->SetRelativeLocation(FVector(0, 0, 140));
	SpringArm->SetRelativeRotation(FRotator(0, 90, 0));
	SpringArm->TargetArmLength = 280;
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->bEnableCameraLag = true;
	
	// Camera
	CHelpers::CreateComponent<UCameraComponent>(this, &Camera, "Camera", SpringArm);
	Camera->SetRelativeLocation(FVector(0, 80, 30));
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
