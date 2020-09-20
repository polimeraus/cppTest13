// Fill out your copyright notice in the Description page of Project Settings.

#include "MyActorDelete.h"

// Sets default values
AMyActorDelete::AMyActorDelete()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	billBoardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillBoard"));
	billBoardComponent->SetHiddenInGame(false, true);
	RootComponent = billBoardComponent;
}

// Called when the game starts or when spawned
void AMyActorDelete::BeginPlay()
{
	Super::BeginPlay();	
}

// Called every frame
void AMyActorDelete::Tick(float DeltaTime)
{

	SetActorHiddenInGame(true);

	Super::Tick(DeltaTime);

	FVector actorLocation;

	actorLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Yellow, FString::Printf(TEXT("karakterin yeri: %s"), *actorLocation.ToString()));
	}

}

