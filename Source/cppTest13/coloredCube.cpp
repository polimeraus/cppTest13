// Fill out your copyright notice in the Description page of Project Settings.


#include "coloredCube.h"


// Sets default values
AcoloredCube::AcoloredCube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AcoloredCube::BeginPlay()
{
	Super::BeginPlay();

	auto mesh = FindComponentByClass<UStaticMeshComponent>();
	auto materialInterface = mesh->GetMaterial(0);
	
	dynamicMaterial = UMaterialInstanceDynamic::Create(materialInterface, NULL);
}

// Called every frame
void AcoloredCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

