// Fill out your copyright notice in the Description page of Project Settings.


#include "componentHit.h"

// Sets default values
AcomponentHit::AcomponentHit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	boxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Kutu Collision Componenti"));
	boxComponent->SetSimulatePhysics(true);		
	//boxComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	boxComponent->BodyInstance.SetCollisionProfileName("BlockAllDynamic");
	boxComponent->SetNotifyRigidBodyCollision(true);
	boxComponent->OnComponentHit.AddDynamic(this, &AcomponentHit::carpisma);

	this->RootComponent = boxComponent;	

	//meshe ilk deðer atamasý, hangi mesh olacaðý editörde belirlenecek
	//gorselMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("gorsel temsilci mesh"));
	//gorselMesh->SetupAttachment(this->RootComponent);
	//this->RootComponent = gorselMesh;
	//this->si
}

// Called when the game starts or when spawned
void AcomponentHit::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AcomponentHit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}




void AcomponentHit::carpisma(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != this && OtherComp != nullptr && OtherActor != nullptr)	
	{ 
		if (GEngine != nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Cyan, FString::Printf(TEXT("%s bana carpti"), *OtherActor->GetName()));
		}
	}
}

