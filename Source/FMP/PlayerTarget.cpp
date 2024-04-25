// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerTarget.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
APlayerTarget::APlayerTarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APlayerTarget::BeginPlay()
{
}

void APlayerTarget::Tick(float DeltaTime)
{
}



void APlayerTarget::IsTarget(const AActor * referance, const AActor* Player, const bool IsLineOfSight, const FVector PlayerLocation, bool IsWorking)
{
	FRotator Rotation(0.0f, 0.0f, 0.0f);

	if (referance == nullptr && Player == referance && IsLineOfSight == true)
	{	
		SetActorLocationAndRotation(PlayerLocation, Rotation, false, 0, ETeleportType::None);
		IsWorking = true;
	}
	
	else
	{
		IsWorking = false;
	}

}