// Fill out your copyright notice in the Description page of Project Settings.


#include "RotateActorVector.h"

// Sets default values
ARotateActorVector::ARotateActorVector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Angle = 1;

}

// Called when the game starts or when spawned
void ARotateActorVector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotateActorVector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//FVector currentLocation = GetActorLocation();
	
	Angle++;

	if (Angle > 360)
		Angle = 1;

	FVector newLocation = FVector(0, 0, 800);
	FVector axisLocation = FVector(200,0,000);
	newLocation += axisLocation.RotateAngleAxis(Angle, FVector(0,0,0));
	SetActorLocation(newLocation);
}

