// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaEspiaCamuflaje.generated.h"

/**
 * 
 */
UCLASS()
class USFX_GALAGA_LAB1_API ANaveEnemigaEspiaCamuflaje : public ANaveEnemigaEspia
{
	GENERATED_BODY()
private:
	bool camuflajeActivo;
	bool equipamientoEspionaje;
	bool comunicacionesEncubiertas;
public:
	FORCEINLINE bool GetCamuflajeActivo() const { return camuflajeActivo; }
	FORCEINLINE bool GetEquipamientoEspionaje() const { return  equipamientoEspionaje; }
	FORCEINLINE bool GetComunicacionesEncubiertas() const { return comunicacionesEncubiertas; }

	FORCEINLINE void SetCamuflajeActivo(bool _camuflajeActivo) { camuflajeActivo = _camuflajeActivo; }
	FORCEINLINE void SetEquipamientoEspionaje(bool _equipamientoEspionaje) { equipamientoEspionaje = _equipamientoEspionaje; }
	FORCEINLINE void SetComunicacionesEncubiertas(bool _comunicacionesEncubiertas) { comunicacionesEncubiertas = _comunicacionesEncubiertas; }
	virtual void Tick(float DeltaTime) override;
protected:
	
	virtual void Mover(float DeltaTime) override;
	virtual void transmitirDatos();
	virtual void recopilarInformacion();
	virtual void activarCamuflaje();
};
