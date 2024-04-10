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

void AGunSpawner::WeaponSpawn(const int32& CurrentLevel, const FVector& Location, const FRotator& Rotation)
{
	
	
	if (weapons.IsValidIndex(CurrentLevel))
	{
		GetWorld()->SpawnActor<AActor>(weapons[CurrentLevel], Location, Rotation);
	}
	
	else
	{
		UE_LOG(LogTemp, Error, TEXT("null referance"));
	}

}
