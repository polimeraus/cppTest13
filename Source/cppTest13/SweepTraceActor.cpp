// Fill out your copyright notice in the Description page of Project Settings.


#include "SweepTraceActor.h"

#include "DrawDebugHelpers.h"
//class DrawDebugHelpers;


// Sets default values
ASweepTraceActor::ASweepTraceActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASweepTraceActor::BeginPlay()
{
	Super::BeginPlay();

	//https://www.youtube.com/watch?v=Gu5f3-hFFfY&list=PLQjeFjKrwMBvunhlAKzIPxz11RoKi5LLO&index=11

	//ikonu edit�rde s�r�kleyip b�rakt���m�z yeri g�sterecek
	FVector actorLocation = this->GetActorLocation();

	//�arp��ma sonu�lar� bu listeye depolanacak (FHitResult tipinde)
	TArray<FHitResult> OutHits;

	//basit collision olu�turma (�rnekte k�re yapt�k, ama k�p veya capsule de verilebiliyor, detay i�in FCollisionShape i incelemek laz�m)
	FCollisionShape myColSphere = FCollisionShape::MakeSphere(500.f);
	
	//ekrana �izece�imiz k�re �izgileri, ama collision ile tamamen ayn� b�y�k�kte ve tamamen ayn� yerde
	DrawDebugSphere(this->GetWorld(), actorLocation, myColSphere.GetSphereRadius(), 50, FColor::Purple, true);

	//�ak��malar� toplu halde almak i�in World() de bir s�r� g�zel fonksyon var, World.h de tan�ml�lar ama WorldCollision.h de gruplanm�� halde g�r�lebilirler
	bool hit = GetWorld()->SweepMultiByChannel(OutHits, actorLocation, actorLocation, FQuat::Identity, ECollisionChannel::ECC_WorldStatic, myColSphere);
	
	if (hit) 
	{
		for (auto Hit : OutHits)
		{
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Hit Result: %s"), *Hit.Actor->GetName()));
			}
		}
	}
	
}

// Called every frame
void ASweepTraceActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

