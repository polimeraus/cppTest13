// Fill out your copyright notice in the Description page of Project Settings.


#include "SetViewTarget.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ASetViewTarget::ASetViewTarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASetViewTarget::BeginPlay()
{
	Super::BeginPlay();


	//�nce PlayerController elde ediliyor
	APlayerController* ourPlayer = UGameplayStatics::GetPlayerController(this, 0);

	//sonra PL nin g�r�� a��s� do�rudan de�i�tiriliyor
	ourPlayer->SetViewTarget(ViewedActor);

}

// Called every frame
void ASetViewTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

