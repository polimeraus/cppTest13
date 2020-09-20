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

	//ikonu editörde sürükleyip býraktýðýmýz yeri gösterecek
	FVector actorLocation = this->GetActorLocation();

	//çarpýþma sonuçlarý bu listeye depolanacak (FHitResult tipinde)
	TArray<FHitResult> OutHits;

	//basit collision oluþturma (örnekte küre yaptýk, ama küp veya capsule de verilebiliyor, detay için FCollisionShape i incelemek lazým)
	FCollisionShape myColSphere = FCollisionShape::MakeSphere(500.f);
	
	//ekrana çizeceðimiz küre çizgileri, ama collision ile tamamen ayný büyükükte ve tamamen ayný yerde
	DrawDebugSphere(this->GetWorld(), actorLocation, myColSphere.GetSphereRadius(), 50, FColor::Purple, true);

	//çakýþmalarý toplu halde almak için World() de bir sürü güzel fonksyon var, World.h de tanýmlýlar ama WorldCollision.h de gruplanmýþ halde görülebilirler
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

