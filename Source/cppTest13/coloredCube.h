// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "coloredCube.generated.h"


UCLASS()
class CPPTEST13_API AcoloredCube : public AActor
{
	GENERATED_BODY()


public:
	UPROPERTY()
	UMaterialInstanceDynamic* dynamicMaterial;


	
public:	
	// Sets default values for this actor's properties
	AcoloredCube();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



};
