// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.generated.h"

/**
 * 
 */
UCLASS()
class USFX_GALAGA_LAB1_API ANaveEnemigaTransporte : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	float capacidadCargaPeso;
	float capacidadCargaVolumen;
	

public:
	ANaveEnemigaTransporte();
	FORCEINLINE float GetCapacidadCargaPeso() const { return capacidadCargaPeso; }
	FORCEINLINE void SetCapacidadCargaPeso(float capacidad) { capacidadCargaPeso = capacidad; }
	FORCEINLINE float GetCapacidadCargaVolumen() const { return capacidadCargaVolumen; }
	FORCEINLINE void SetCapacidadCargaVolumen(float capacidad) { capacidadCargaVolumen = capacidad; }
	virtual void Tick(float DeltaTime) override;
protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	virtual void Vigilancia();
	virtual void Apoyo();
	virtual void Intercepcion();
	virtual void Comunicacion();
};