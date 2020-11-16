// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTriggerBoxActor.h"



AMyTriggerBoxActor::AMyTriggerBoxActor()
{
	this->OnActorBeginOverlap.AddDynamic(this, &AMyTriggerBoxActor::OnOverlapBegin);
	this->OnActorEndOverlap.AddDynamic(this, &AMyTriggerBoxActor::OnOverlapEnd);
}

void AMyTriggerBoxActor::BeginPlay()
{
	Super::BeginPlay();
}

void AMyTriggerBoxActor::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
	if (OtherActor != nullptr && OtherActor != this)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, FString::Printf(TEXT("overlappppp")));
		}
	}
}

void AMyTriggerBoxActor::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
}
