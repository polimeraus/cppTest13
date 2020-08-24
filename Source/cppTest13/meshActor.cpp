// Fill out your copyright notice in the Description page of Project Settings.


#include "meshActor.h"



// Sets default values
AmeshActor::AmeshActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Componenti"));
	mesh->SetupAttachment(RootComponent);

	ConstructorHelpers::FObjectFinder<UStaticMesh> evAsset(TEXT("/Game/Geometry/Meshes/Evler/ev_Cube.ev_Cube"));

	if (evAsset.Succeeded())
	{
		mesh->SetStaticMesh(evAsset.Object);
	}

	mesh->SetMaterial()

}

// Called when the game starts or when spawned
void AmeshActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AmeshActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

