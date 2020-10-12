// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "setActorLocationRotation.generated.h"

UCLASS()
class CPPTEST13_API AsetActorLocationRotation : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AsetActorLocationRotation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(EditAnywhere, Category="Location")
	FVector NewLocation;

	UPROPERTY(EditAnywhere, Category = "Rotation")
	FQuat NewRotation;
};
