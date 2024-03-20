// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaAcorazado.generated.h"

/**
 * 
 */
UCLASS()
class USFX_GALAGA_LAB1_API ANaveEnemigaAcorazado : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int blindaje;
	int tripulacion;
	int escudos;
	int armamento;

public:
	ANaveEnemigaAcorazado();
	FORCEINLINE int GetBlindaje() const { return blindaje; }
	FORCEINLINE int GetTripulacion() const { return tripulacion; }
	FORCEINLINE int GetEscudos() const { return escudos; }
	FORCEINLINE int GetArmamento() const { return armamento; }


	FORCEINLINE void SetBlindaje(int _blindaje) { blindaje = _blindaje; }
	FORCEINLINE void SetTripulacion(int _tripulacion) { tripulacion = _tripulacion; }
	FORCEINLINE void SetEscudos(int _escudos) { escudos = _escudos; }
	FORCEINLINE void SetArmamento(int _armamento) { armamento = _armamento; }
	virtual void Tick(float DeltaTime) override;


protected:

	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Atacar();
	virtual void Bloqueo();






};