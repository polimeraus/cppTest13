// Fill out your copyright notice in the Description page of Project Settings.


#include "RotatingActor.h"

// Sets default values
ARotatingActor::ARotatingActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//CDO
	pitch = 0.f;
	yaw = 0.f;
	roll = 0.f;
}

// Called when the game starts or when spawned
void ARotatingActor::BeginPlay()
{
	Super::BeginPlay();


}

// Called every frame
void ARotatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FQuat quaternion = FRotator(pitch, yaw, roll).Quaternion();
	FQuat quaternion2 = FQuat(FRotator(pitch, yaw, roll));  //2. yol

	AddActorLocalRotation(quaternion, true, NULL, ETeleportType::TeleportPhysics);

}

