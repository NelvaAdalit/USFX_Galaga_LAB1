// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaEspia.generated.h"

/**
 * 
 */
UCLASS()
class USFX_GALAGA_LAB1_API ANaveEnemigaEspia : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int cantidadBombas;
	int radar;
	int laser;
	int misiles;
	int canones;


public:
	ANaveEnemigaEspia();
	FORCEINLINE int GetCantidadBombas() const { return cantidadBombas; }
	FORCEINLINE int GetRadar() const { return  radar; }
	FORCEINLINE int GetLaser() const { return laser; }
	FORCEINLINE int GetMisiles() const { return misiles; }
	FORCEINLINE int GetCanones() const { return canones; }


	FORCEINLINE void SetCantidadBombas(int _cantidadBombas) { cantidadBombas = _cantidadBombas; }
	FORCEINLINE void SetRadar(int _radar) { radar = _radar; }
	FORCEINLINE void SetLaser(int _laser) { laser = _laser; }
	FORCEINLINE void SetMisiles(int _misiles) { misiles = _misiles; }
	FORCEINLINE void SetCanones(int _canones) { canones = _canones; }
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Vigilancia();
	virtual void Apoyo();
	virtual void Intercepcion();
	virtual void Comunicacion();
};
