// Fill out your copyright notice in the Description page of Project Settings.

#include "DrawDebugHelpers.h"
#include "TriggerBoxSpecific.h"




ATriggerBoxSpecific::ATriggerBoxSpecific()
{
	this->OnActorBeginOverlap.AddDynamic(this, &ATriggerBoxSpecific::OnOverlapBegin);
	this->OnActorEndOverlap.AddDynamic(this, &ATriggerBoxSpecific::OnOverlapEnd);
}


void ATriggerBoxSpecific::BeginPlay()
{
	Super::BeginPlay();

	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Green, true, -1.f, 0, 2.f);
}


void ATriggerBoxSpecific::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
	if (OtherActor != nullptr && OtherActor != this &&  (OtherActor == SpesicifActor))
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, FString::Printf(TEXT("overlappp: %s"), *OtherActor->GetName()));
		}
	}
}

void ATriggerBoxSpecific::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
	if (OtherActor != nullptr && OtherActor != this && (OtherActor == SpesicifActor))
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Purple, FString::Printf(TEXT("overlappp bitti: %s"), *OtherActor->GetName()));
		}
	}
}