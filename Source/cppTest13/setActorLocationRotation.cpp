// Fill out your copyright notice in the Description page of Project Settings.


#include "setActorLocationRotation.h"

// Sets default values
AsetActorLocationRotation::AsetActorLocationRotation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AsetActorLocationRotation::BeginPlay()
{
	Super::BeginPlay();
		
	SetActorLocationAndRotation(NewLocation, NewRotation, true, 0, ETeleportType::None);	
}

// Called every frame
void AsetActorLocationRotation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

