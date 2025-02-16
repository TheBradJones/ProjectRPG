// Fill out your copyright notice in the Description page of Project Settings.


#include "CPlus_Enemy.h"

// Sets default values
ACPlus_Enemy::ACPlus_Enemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPlus_Enemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPlus_Enemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPlus_Enemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

