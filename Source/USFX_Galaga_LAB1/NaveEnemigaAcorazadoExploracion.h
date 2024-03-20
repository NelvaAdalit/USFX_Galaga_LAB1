// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaAcorazado.h"
#include "NaveEnemigaAcorazadoExploracion.generated.h"

/**
 * 
 */
UCLASS()
class USFX_GALAGA_LAB1_API ANaveEnemigaAcorazadoExploracion : public ANaveEnemigaAcorazado
{
	GENERATED_BODY()
private:
	
	int cantidadTotalEnergia;
	int alcanceExploracion;
	int armasDefensivas;
	int ofensivaLimitada;
public:
	virtual void Tick(float DeltaTime) override;
	FORCEINLINE int GetCantidadTotalEnergia() const { return cantidadTotalEnergia; }
	FORCEINLINE int GetAlcanceExploracion() const { return alcanceExploracion; }
	FORCEINLINE int GetArmasDefensivas() const { return armasDefensivas; }
	FORCEINLINE int GetOfensivaLimitada() const { return ofensivaLimitada; }

	FORCEINLINE void SetCantidadTotalEnergia(int _cantidadTotalEnergia) { cantidadTotalEnergia = _cantidadTotalEnergia; }
	FORCEINLINE void SetAlcanceExploracion(int _alcanceExploracion) { alcanceExploracion = _alcanceExploracion; }
	FORCEINLINE void SetArmasDefensivas(int _armasDefensivas) { armasDefensivas = _armasDefensivas; }
	FORCEINLINE void SetOfensivaLimitada(int _ofensivaLimitada) { ofensivaLimitada = _ofensivaLimitada; }


protected:
	virtual void Mover(float DeltaTime) override;
	virtual void escanearEspacio();
	virtual void recolectarRecursos();
	virtual void aterrizarEnPlaneta();


};
