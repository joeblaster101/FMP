// Fill out your copyright notice in the Description page of Project Settings.


#include "GunSpawner.h"

// Sets default values
AGunSpawner::AGunSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGunSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGunSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/*void AGunSpawner::WeaponSpawn(const TArray<TSubclassOf<AActor>> Guns, int32& LevelOut, const FVector& Location, const FRotator& Rotation)
{
	int32 CurrentLevel = 0;
	if (Guns != nullptr);
	{
		UE_LOG(LogTemp, Error, TEXT("null referance"))
	}
	
	else
	{
		GetWorld()->SpawnActor<AActor>(Guns[CurrentLevel], Location, Rotation);
	}

}*/

