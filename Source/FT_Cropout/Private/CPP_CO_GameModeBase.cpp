// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_CO_GameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "C_Spawner.h"

AActor* ACPP_CO_GameModeBase::CGetSpawnRef()
{
	TArray<AActor*> Found;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AC_Spawner::StaticClass(), Found);
	UE_LOG(LogTemp, Warning, TEXT("Found %d spawners"), Found.Num());
	if (Found.Num() > 0)
	{
		return Found[0];
	}
	return nullptr;
}