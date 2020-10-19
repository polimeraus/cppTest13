// Fill out your copyright notice in the Description page of Project Settings.

#include "LightSwitchTrigger.h"
#include "DrawDebugHelpers.h"



// Sets default values
ALightSwitchTrigger::ALightSwitchTrigger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	triggerSphereRadius = 300;

	pointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("centeral light"));
	pointLight->Intensity = 200;
	pointLight->Intensity = lightIntencity;
	pointLight->SetAttenuationRadius(triggerSphereRadius);
	pointLight->SetLightColor(FColor::Cyan);
	pointLight->SetupAttachment(triggerSphere);
	pointLight->SetVisibility(true);	
	RootComponent = pointLight;

	triggerSphere = CreateDefaultSubobject<USphereComponent>(TEXT("trigger sphere"));
	triggerSphere->SetSphereRadius(triggerSphereRadius, true);
	triggerSphere->OnComponentBeginOverlap.AddDynamic(this, &ALightSwitchTrigger::sphereComponentBeginOverlap);
	triggerSphere->OnComponentEndOverlap.AddDynamic(this, &ALightSwitchTrigger::sphereComponentEndOverlap);
	triggerSphere->SetupAttachment(RootComponent);
}








// Called when the game starts or when spawned
void ALightSwitchTrigger::BeginPlay()
{
	Super::BeginPlay();

	DrawDebugSphere(GetWorld(), GetActorLocation(), triggerSphereRadius, 50, FColor::Orange, true, -1, 0, 2);
}

// Called every frame
void ALightSwitchTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALightSwitchTrigger::sphereComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OverlappedComp && OtherActor != this)
	{
		//pointLight->IsVisible ? 
		pointLight->SetVisibility(false);

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Cyan, FString::Printf(TEXT("%s carpti"), *OtherActor->GetName()));
		}
	}
}



void ALightSwitchTrigger::sphereComponentEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OverlappedComp && OtherActor != this)
	{
		pointLight->SetVisibility(true);

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Cyan, FString::Printf(TEXT("%s cikti"), *OtherActor->GetName()));
		}
	}
}

