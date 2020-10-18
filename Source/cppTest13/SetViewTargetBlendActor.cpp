// Fill out your copyright notice in the Description page of Project Settings.


#include "SetViewTargetBlendActor.h"
#include <Runtime\Engine\Classes\Kismet\GameplayStatics.h>

// Sets default values
ASetViewTargetBlendActor::ASetViewTargetBlendActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	ViewedActor = CreateDefaultSubobject<AActor>(TEXT("Bakilacak Actor"));
}

// Called when the game starts or when spawned
void ASetViewTargetBlendActor::BeginPlay()
{
	Super::BeginPlay();

	//PlayerController elde etmek i�in UGameplayStatics::GetPlayerController  kullan�yor
	APlayerController* ourPlayer = UGameplayStatics::GetPlayerController(this, 0);

	//PlayerController a verilen bu komut ile kamera a��s� ba�ka y�ne kayd�r�l�yor, ancak o �ekilde kala kal�yor , yani kamera kal�c� olarak de�i�iyor
	//ikinci parametre kamera ge�i�inin ka� saniye de ger�ekle�ece�i, yumu�akl�k ve zamana yay�lma saniye parametresi
	ourPlayer->SetViewTargetWithBlend(ViewedActor, 5.0f);	
}

// Called every frame
void ASetViewTargetBlendActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

