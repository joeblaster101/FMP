// Fill out your copyright notice in the Description page of Project Settings.


#include "Testing.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
ATesting::ATesting()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATesting::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATesting::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATesting::SpawnOne(const FVector& Location, const FRotator& Rotation, const TSubclassOf<AActor> Spawn)
{
	GetWorld()->SpawnActor<AActor>(Spawn, Location, Rotation);
}

void ATesting::RandomActorSpawn(const FVector& Location, const FRotator& Rotation, const TArray<TSubclassOf<AActor>> Spawn, int32& out, const int32& In)
{
	//random number
	//int32 RandomNumber = FMath::RandRange(0, 3);

	if (In == 0)
	{
		GetWorld()->SpawnActor<AActor>(Spawn[0], Location, Rotation);
	}

	if (In == 1)
	{
		GetWorld()->SpawnActor<AActor>(Spawn[1], Location, Rotation);
	}

	if (In == 2)
	{
		GetWorld()->SpawnActor<AActor>(Spawn[2], Location, Rotation);
	}

	if (In == 3)
	{
		GetWorld()->SpawnActor<AActor>(Spawn[3], Location, Rotation);
	}

	else
	{
		UE_LOG(LogTemp, Error, TEXT("Random Number Get Is Not Working"));
	}


}


void ATesting::ForLoopCastDestroy(const TSubclassOf<AActor> Input)
{
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), Input, FoundActors);

	for (int i = 0; i < FoundActors.Num(); i++)
	{
		FoundActors[i]->Destroy();
	}

}