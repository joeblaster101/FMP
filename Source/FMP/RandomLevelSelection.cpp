// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomLevelSelection.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ARandomLevelSelection::ARandomLevelSelection()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARandomLevelSelection::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARandomLevelSelection::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}


void ARandomLevelSelection::RandomActorSpawn(const FVector& Location, const FRotator& Rotation, const TArray<TSubclassOf<AActor>> Spawn)
{
	int32 Random = FMath::RandRange(0, 3);
	int32 One = 0;
	int32 Two = 0;
	int32 Three = 0;
	int32 Four = 0;




		if (Random == 0)
		{
			GetWorld()->SpawnActor<AActor>(Spawn[One], Location, Rotation);
		}

		if (Random == 1)
		{
			GetWorld()->SpawnActor<AActor>(Spawn[Two], Location, Rotation);
		}

		if (Random == 2)
		{
			GetWorld()->SpawnActor<AActor>(Spawn[Three], Location, Rotation);
		}
		
		if (Random == 3)
		{
			GetWorld()->SpawnActor<AActor>(Spawn[Four], Location, Rotation);
		}
}

//romoves actors from world
void ARandomLevelSelection::ForLoopCastDestroy(const TSubclassOf<AActor> Input)
{
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), Input, FoundActors);

	for (int i = 0; i < FoundActors.Num(); i++)
	{
		FoundActors[i]->Destroy();
	}

}



























































//jo mamnma