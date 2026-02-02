// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "C_Spawner.h"
#include "CPP_CO_GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FT_CROPOUT_API ACPP_CO_GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
	int _villagerCount = 0;
	UPROPERTY(BlueprintReadWrite)
	AC_Spawner* _spawner;
	UFUNCTION(BlueprintCallable)
	AActor* CGetSpawnRef();
};
