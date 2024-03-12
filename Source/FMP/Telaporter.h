// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Telaporter.generated.h"

UENUM()
enum class EFlowExecution : uint8
{
	Yes,
	No,

};



UCLASS()
class FMP_API ATelaporter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATelaporter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, meta = (ExpandEnumAsExecs = "OutputFlow"))
	void CheckIsActorBetter(EFlowExecution& OutputFlow, const AActor* InputActor, const AActor* referance);

	//UFUNCTION(BlueprintCallable)
	


};
