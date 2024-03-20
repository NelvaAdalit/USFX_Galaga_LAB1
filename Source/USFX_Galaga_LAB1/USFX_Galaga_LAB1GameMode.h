// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "USFX_Galaga_LAB1GameMode.generated.h"
class ANaveEnemiga;
class ANaveEnemigaTransporte;
class ANaveEnemigaAcorazado;
class ANaveEnemigaAcorazadoExploracion;
class ANaveEnemigaEspia;
class ANaveEnemigaEspiaCamuflaje;
class ANaveEnemigaApoyo;	
class ANaveEnemigaApoyoReparacion;	
class ANaveEnemigaCaza;	
class ANaveEnemigaCazaPesado;	


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
	//TMap<FString, ANaveEnemigaTransporte*>TMapCambiarname;
	TMap<FString, ANaveEnemiga*>TMapCambiarVelocidad;


	//un TMap nos sirve para diferenciar diferentes tipos de naves;

private:
	int TiempoTranscurrido;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};



