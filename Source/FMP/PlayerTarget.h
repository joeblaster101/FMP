// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerTarget.generated.h"

UCLASS()
class FMP_API APlayerTarget : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerTarget();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void Target();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool HasSeen;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector PlayerLocation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	AActor* Player;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector SelfLocation;

};
