// Fill out your copyright notice in the Description page of Project Settings.


#include "playerCharackter.h"

// Sets default values
AplayerCharackter::AplayerCharackter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AplayerCharackter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AplayerCharackter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AplayerCharackter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

