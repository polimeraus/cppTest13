// Fill out your copyright notice in the Description page of Project Settings.


#include "AddRadialForce.h"
#include "DrawDebugHelpers.h"

// Sets default values
AAddRadialForce::AAddRadialForce()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAddRadialForce::BeginPlay()
{
	Super::BeginPlay();


	//ECollisionChannel ECC = ECollisionChannel::ECC_Pawn;

	/*TArray is the collection that contains all the HitResults*/
	//TArray<FHitResult> HitResults;

	/*The Start location of the sphere*/
	//FVector StartLocation = GetActorLocation();
	//FVector EndLocation = GetActorLocation();

	/*Declare the Collision Shape, assign a Sphere shape and set it's radius*/
	//FCollisionShape CollisionShape = FCollisionShape::MakeSphere(SphereRadius);


	//DrawDebugSphere(GetWorld(), StartLocation, CollisionShape.GetSphereRadius(), 32, FColor::Yellow, true);

	/*Perform the actual raycast. This method returns true if there is at least 1 hit.*/
	//bool bHitSomething = GetWorld()->SweepMultiByChannel(HitResults, StartLocation, EndLocation, FQuat::FQuat(), ECC, CollisionShape);


	/*In order to draw the sphere of the first image, I will use the DrawDebugSphere function which resides in the DrawDebugHelpers.h
This function needs the center of the sphere which in this case is provided by the following equation*/
	//FVector CenterOfSphere = ((EndLocation - StartLocation) / 2) + StartLocation;

	/*Draw the sphere in the viewport*/
	//DrawDebugSphere(GetWorld(), CenterOfSphere, CollisionShape.GetSphereRadius(), 32, FColor::Red, true);


	
}

// Called every frame
void AAddRadialForce::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

