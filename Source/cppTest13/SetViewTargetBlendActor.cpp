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

	//PlayerController elde etmek için UGameplayStatics::GetPlayerController  kullanýyor
	APlayerController* ourPlayer = UGameplayStatics::GetPlayerController(this, 0);

	//PlayerController a verilen bu komut ile kamera açýsý baþka yöne kaydýrýlýyor, ancak o þekilde kala kalýyor , yani kamera kalýcý olarak deðiþiyor
	//ikinci parametre kamera geçiþinin kaç saniye de gerçekleþeceði, yumuþaklýk ve zamana yayýlma saniye parametresi
	ourPlayer->SetViewTargetWithBlend(ViewedActor, 5.0f);	
}

// Called every frame
void ASetViewTargetBlendActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

