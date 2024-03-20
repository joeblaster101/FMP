// Fill out your copyright notice in the Description page of Project Settings.


#include "LevlStart.h"

// Sets default values
ALevlStart::ALevlStart()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALevlStart::BeginPlay()
{
	Super::BeginPlay();
	

	
}

// Called every frame
void ALevlStart::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALevlStart::IsActorCheck(bool& OutputFlow, const AActor* InputActor, const AActor* referance)
{

	if (Cast<AActor>(InputActor) == Cast<AActor>(referance))
	{
		OutputFlow = true;
	}

	else
	{
		OutputFlow = false;
	}
}


