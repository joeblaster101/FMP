// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GunSpawner.generated.h"

UCLASS()
class FMP_API AGunSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGunSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//UFUNCTION(BlueprintCallable)
	//void WeaponSpawn(const TArray<TSubclassOf<AActor>> Guns, int32& LevelOut, const FVector& Location, const FRotator& Rotation);


};
