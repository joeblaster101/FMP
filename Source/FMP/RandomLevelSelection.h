// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RandomLevelSelection.generated.h"


UCLASS()
class FMP_API ARandomLevelSelection : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARandomLevelSelection();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void RandomActorSpawn(const FVector& location, const FRotator& rotation, const TArray<TSubclassOf<AActor>> Spawn, int32& out);

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<TSubclassOf<AActor>> spawn;

	UFUNCTION(BlueprintCallable)
	void ForLoopCastDestroy(const TSubclassOf<AActor> input);

};
