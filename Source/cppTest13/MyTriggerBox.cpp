// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTriggerBox.h"
#include "DrawDebugHelpers.h"

AMyTriggerBox::AMyTriggerBox()
{
	//event lar fonksyonlara baðlanýyor
	OnActorBeginOverlap.AddDynamic(this, &AMyTriggerBox::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &AMyTriggerBox::OnOverlapEnd);

	//OnActorEndOverlap
	//OnActorHit
	//OnBeginCursorOver
	//OnClicked
	//OnDestroyed
	//OnEndCursorOver
	//OnEndPlay
	//OnReleased
	//OnTakeAnyDamage	
	//.....	
}


// Called when the game starts or when spawned
void AMyTriggerBox::BeginPlay()
{
	Super::BeginPlay();

	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Purple, true, -1, 0, 5);
}



void AMyTriggerBox::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OverlappedActor && OtherActor != this)
	{	
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Purple, FString::Printf(TEXT("OverlappedActor = %s"), *OverlappedActor->GetName()));
			GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Purple, FString::Printf(TEXT("OtherActor = %s"), *OtherActor->GetName()));
		}
	}
}

void AMyTriggerBox::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OverlappedActor && OtherActor != this)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Cyan, FString::Printf(TEXT("%s ayrildi"), *OtherActor->GetName()));
		}
	}
}




