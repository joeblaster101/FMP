// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Testing.generated.h"

UCLASS()
class FMP_API ATesting : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATesting();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void SpawnOne(const FVector& Location, const FRotator& Rotation, const TSubclassOf<AActor> Spawn);

	UFUNCTION(BlueprintCallable)
	void RandomActorSpawn(const FVector& Location, const FRotator& Rotation, const TArray<TSubclassOf<AActor>> Spawn, int32& out, const int32& in);

	UFUNCTION(BlueprintCallable)
	void ForLoopCastDestroy(const TSubclassOf<AActor> Input);

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<TSubclassOf<AActor>> spawn;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 OneToSpawn;
};
