// Fill out your copyright notice in the Description page of Project Settings.


#include "hidingActor.h"

// Sets default values
AhidingActor::AhidingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	billBoardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard Bileseni"));
	RootComponent = billBoardComponent;
	billBoardComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AhidingActor::BeginPlay()
{
	Super::BeginPlay();

	
	//actor gizleme tickenmiþ ise
	if (bHideActor)
	{
		SetActorHiddenInGame(bHideActor);
		SetActorEnableCollision(!bHideActor);
		PrimaryActorTick.bCanEverTick = !bHideActor;
	}
	
}

// Called every frame
void AhidingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

