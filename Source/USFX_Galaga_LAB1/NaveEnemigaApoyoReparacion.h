// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaApoyo.h"
#include "NaveEnemigaApoyoReparacion.generated.h"

/**
 * 
 */
UCLASS()
class USFX_GALAGA_LAB1_API ANaveEnemigaApoyoReparacion : public ANaveEnemigaApoyo
{
	GENERATED_BODY()
private:
	int totalPuntosdeSalud;
	int cantidadsuministrosReparacion;
	bool autodefensa;
	bool sistemasReparacion;
	bool sistemasAbastecimiento;
public:

	FORCEINLINE int GetTotalPuntosdeSalud() const { return totalPuntosdeSalud; }
	FORCEINLINE int  GetCantidadsuministrosReparacion() const { return cantidadsuministrosReparacion; }
	FORCEINLINE bool GetAutodefensa() const { return autodefensa; }
	FORCEINLINE bool GetSistemasReparacion() const { return sistemasReparacion; }
	FORCEINLINE bool GetSistemasAbastecimiento() const { return sistemasAbastecimiento; }

	FORCEINLINE void SetTotalPuntosdeSalud(int _totalPuntosdeSalud) { totalPuntosdeSalud = _totalPuntosdeSalud; }
	FORCEINLINE void SetCantidadsuministrosReparacion(int _cantidadsuministrosReparacion) { cantidadsuministrosReparacion = _cantidadsuministrosReparacion; }
	FORCEINLINE void SetAutodefensa(bool _autodefensa) { autodefensa = _autodefensa; }
	FORCEINLINE void SetSistemasReparacion(bool _sistemasReparacion) { sistemasReparacion = _sistemasReparacion; }
	FORCEINLINE void SetSistemasAbastecimiento(bool _sistemasAbastecimiento) { sistemasAbastecimiento = _sistemasAbastecimiento; }
	virtual void Tick(float DetaTime) override;


protected:
	virtual void Mover(float DeltaTime) override;
	virtual void regenerarEscudos();
	virtual void recargarMunicion();
	virtual void recargarCombustible();
	virtual void repararNave();
};
