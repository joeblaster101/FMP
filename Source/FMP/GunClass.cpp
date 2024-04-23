// Fill out your copyright notice in the Description page of Project Settings.


#include "GunClass.h"

// Sets default values
AGunClass::AGunClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGunClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGunClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AGunClass::IsPlayer(const AActor* OtherActor, const AActor* Referance)
{
	
	if (OtherActor == Referance)
	{
		return true;
	}
	
	
	else
	{
		return false;
	}
}

//void AGunClass::RandomActorSpawn(const FVector& Location, const FRotator& Rotation, const TArray<TSubclassOf<AActor>> Spawn)
//{
//	int32 Random = FMath::RandRange(0, 3);
//}