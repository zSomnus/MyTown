// Fill out your copyright notice in the Description page of Project Settings.


#include "Tree.h"

// Sets default values for this component's properties
UTree::UTree()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTree::BeginPlay()
{
	Super::BeginPlay();

	// ...

}


// Called every frame
void UTree::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AActor* Owner = GetOwner();
	FString Name = Owner->GetActorNameOrLabel();
	FVector Vector = Owner->GetActorLocation();
	FString OwnerLocationString = Vector.ToCompactString();

	UE_LOG(LogTemp, Display, TEXT("Mover Owner: %s with location: %s"), *Name, *OwnerLocationString);
}

