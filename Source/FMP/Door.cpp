// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"

// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoor::IsActorCheck(bool& OutputFlow, const AActor* InputActor, const AActor* referance, const bool Key)
{
	bool IsActor;

	if (Cast<AActor>(InputActor) == Cast<AActor>(referance))
	{
		IsActor = true;
	}

	else
	{
		IsActor = false;
	}

	if (Key == true && IsActor == true)
	{
		OutputFlow = true;
	}

	else
	{
		OutputFlow = false;
	}

}