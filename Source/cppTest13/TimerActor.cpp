// Fill out your copyright notice in the Description page of Project Settings.


#include "TimerActor.h"



// Sets default values
ATimerActor::ATimerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATimerActor::BeginPlay()
{
	Super::BeginPlay();


	//timer deðerlerini struct yapýsý oalrak almak için
	FTimerHandle timerHandle;

	//bu ikisinin arasýnda bir fark yokmuþ gibi duruyor, zaten, AActor::GetWorldTimerManager() da nihayetinde GetWorld()->GetTimerManager() a gidiyor
	GetWorld()->GetTimerManager().SetTimer(timerHandle, this, &ATimerActor::RepeatingFunction, 2.0f, true, 2.0f);	
	//AActor::GetWorldTimerManager().SetTimer(timerHandle, this, &ATimerActor::RepeatingFunction, 2.0f, true, 5.0f);
	
}



void ATimerActor::RepeatingFunction()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("hey yoo !"));
	}

}


// Called every frame
void ATimerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


