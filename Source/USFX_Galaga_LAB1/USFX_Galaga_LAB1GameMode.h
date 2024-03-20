// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "USFX_Galaga_LAB1GameMode.generated.h"
class ANaveEnemiga;
class ANaveEnemigaTransporte;
class ANaveEnemigaAcorazado;
class ANaveEnemigaAcorazadoExploracion;


UCLASS(MinimalAPI)
class AUSFX_Galaga_LAB1GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AUSFX_Galaga_LAB1GameMode();
public:
	ANaveEnemigaTransporte* NaveEnemigaTransporte01;
	ANaveEnemigaAcorazado* NaveEnemigaAcorazado01;

protected:
	virtual void BeginPlay() override;



public:
	TArray<ANaveEnemiga*> TANavesEnemigas;
	TArray<ANaveEnemigaTransporte*> TANaveEnemigaTransporte;
	TArray<ANaveEnemigaAcorazado*> TANaveEnemigaAcorazado;
	TArray<ANaveEnemigaAcorazadoExploracion*>TANaveEnemigaAcorazadoExploracion;
private:
	int TiempoTranscurrido;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};



