// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GunClass.generated.h"

UCLASS()
class FMP_API AGunClass : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGunClass();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	bool IsPlayer(const AActor* OtherActor, const AActor* Referance);

	//UFUNCTION(BlueprintCallable)
	//void RandomActorSpawn( const TArray<statickmesh> Spawn);





};
