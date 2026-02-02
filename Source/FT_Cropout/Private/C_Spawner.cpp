// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Spawner.h"

// Sets default values
AC_Spawner::AC_Spawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AC_Spawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AC_Spawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

