// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/PointLightComponent.h"
#include "Components/SphereComponent.h"
#include "LightSwitchButton.generated.h"

UCLASS()
class CPPTEST13_API ALightSwitchButton : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALightSwitchButton();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(VisibleAnywhere, Category = "Light Switch")
	UPointLightComponent* PointLight;

	UPROPERTY(VisibleAnywhere, Category = "Light Switch")
	USphereComponent* LightSphere;

	UPROPERTY(EditAnywhere, Category = "Light Switch")
	float LightIntensity = 20000.f;

	UFUNCTION(BlueprintCallable, Category = "Light Switch")
	void ToggleLight();

};
