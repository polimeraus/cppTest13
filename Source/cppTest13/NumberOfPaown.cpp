// Fill out your copyright notice in the Description page of Project Settings.


#include "NumberOfPaown.h"

// Sets default values
ANumberOfPaown::ANumberOfPaown()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANumberOfPaown::BeginPlay()
{
	Super::BeginPlay();

	//sahadaki pawn sayýsý	
	numberOfPawn = GetWorld()->GetNumPawns();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Orange, FString::Printf(TEXT("sahadaki pawn sayisi: %d"), numberOfPawn));
	}
}

// Called every frame
void ANumberOfPaown::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

