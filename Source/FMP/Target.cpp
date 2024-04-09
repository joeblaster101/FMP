// Fill out your copyright notice in the Description page of Project Settings.


#include "Target.h"
#include "Telaporter.h"

// Sets default values
ATarget::ATarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATarget::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATarget::CheckIsActor(EFlow& OutputFlow, const AActor* InputActor, const AActor* referance)
{
	if (InputActor == referance)
	{
		OutputFlow = EFlow::Yes;
	}

	else
	{
		OutputFlow = EFlow::No;
	}
}