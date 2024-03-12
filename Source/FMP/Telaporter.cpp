// Fill out your copyright notice in the Description page of Project Settings.


#include "Telaporter.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
ATelaporter::ATelaporter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATelaporter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATelaporter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//void ATelaporter::MovePlayer(const FVector& location,const FRotator& rotation, )
//{
//	UGameplayStatics::GetAllActorsOfClass(GetWorld(), Input, FoundActors);
//	AActor::SetActorTransform();
//
//}



void ATelaporter::CheckIsActorBetter(EFlowExecution& OutputFlow, const AActor* InputActor, const AActor* referance)
{
	if (InputActor == referance)
	{
		OutputFlow = EFlowExecution::Yes;
	}

	else
	{
		OutputFlow = EFlowExecution::No;
	}
}