// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TriggerBoxActor.h"
#include "MyTriggerBoxActor.generated.h"

/**
 * 
 */
UCLASS()
class CPPTEST13_API AMyTriggerBoxActor : public ATriggerBoxActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyTriggerBoxActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:
	// declare overlap begin function
	UFUNCTION()
		void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);

	// declare overlap end function
	UFUNCTION()
		void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);
	
};
