// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/PointLightComponent.h"
#include "LightSwitchButton.h"

// Sets default values
ALightSwitchButton::ALightSwitchButton()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
	PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Light Switch Point Light"));
	PointLight->Intensity = LightIntensity;
	PointLight->SetVisibility(true);
	RootComponent = PointLight;

	LightSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Light Switch Sphere"));
	LightSphere->InitSphereRadius(300.f);
	LightSphere->SetCollisionProfileName(TEXT("Trigger"));
	LightSphere->SetGenerateOverlapEvents(true);
	LightSphere->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);	
	LightSphere->SetupAttachment(RootComponent);
	//LightSphere->SetGenerateOverlapEvents(true);
	

}

// Called when the game starts or when spawned
void ALightSwitchButton::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALightSwitchButton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALightSwitchButton::ToggleLight()
{
	PointLight->ToggleVisibility();
}

