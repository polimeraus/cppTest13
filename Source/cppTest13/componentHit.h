// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "componentHit.generated.h"

//class UBoxComponent;

UCLASS()
class CPPTEST13_API AcomponentHit : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AcomponentHit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category="Component of Hit Actor")
	UStaticMeshComponent* gorselMesh;

	UPROPERTY(VisibleAnywhere, Category = "Component of Hit Actor")
	UBoxComponent* boxComponent;

	UFUNCTION()
	void carpisma(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

};
