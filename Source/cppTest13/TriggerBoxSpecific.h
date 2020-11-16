// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "TriggerBoxSpecific.generated.h"


UCLASS()
class CPPTEST13_API ATriggerBoxSpecific : public ATriggerBox
{
	GENERATED_BODY()


public:
	// Sets default values for this actor's properties
	ATriggerBoxSpecific();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere,Category="OzelBelirt")
	AActor* SpesicifActor;

	// declare overlap begin function
	UFUNCTION()
	void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);

	// declare overlap end function
	UFUNCTION()
	void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);
};
