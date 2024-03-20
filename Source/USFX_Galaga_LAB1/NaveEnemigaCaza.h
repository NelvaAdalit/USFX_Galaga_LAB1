// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.generated.h"

/**
 * 
 */
UCLASS()
class USFX_GALAGA_LAB1_API ANaveEnemigaCaza : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int cantidadBombas;
	int potenciadeFuego;
	//int velocidad;
	int resistencia;


public:
	ANaveEnemigaCaza();
	FORCEINLINE int GetCantidadBombas() const { return cantidadBombas; }
	FORCEINLINE int GetPotenciadeFuego() const { return potenciadeFuego; }
	FORCEINLINE int GetVelocidad() const { return velocidad; }
	FORCEINLINE int GetResistencia() const { return resistencia; }

	FORCEINLINE void SetCantidadBombas(int _cantidadBombas) { cantidadBombas = _cantidadBombas; }
	FORCEINLINE void SetPotenciadeFuego(int _potenciadeFuego) { potenciadeFuego = _potenciadeFuego; }
	FORCEINLINE void SetVelocidad(int _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetResistencia(int _resistencia) { resistencia = _resistencia; }

	virtual void Tick(float DeltaTime) override;

protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Destruir();
	virtual void Escapar();
	virtual void Atacar();
	virtual void Reparar();
	virtual void cargarCombustible();
};
