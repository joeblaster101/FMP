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
	Super::BeginPlay();

}

void APlayerTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APlayerTarget::Target()
{

	if (HasSeen == true)
	{		
		SetActorLocation(PlayerLocation, false, 0, ETeleportType::None);
	}
	
	else
	{
		UE_LOG(LogTemp, Error, TEXT("somthings scrood"));
	}
}