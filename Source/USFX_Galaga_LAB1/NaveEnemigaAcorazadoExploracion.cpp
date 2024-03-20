// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaAcorazadoExploracion.h"

void ANaveEnemigaAcorazadoExploracion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);

}

void ANaveEnemigaAcorazadoExploracion::Mover(float DeltaTime)
{

	velocidad = -80;
	ubicacionActual = GetActorLocation();
	float NuevaX = velocidad * DeltaTime + ubicacionActual.X;
	FVector NuevaPosicion = FVector(NuevaX, ubicacionActual.Y, ubicacionActual.Z);
	SetActorLocation(NuevaPosicion);

}

void ANaveEnemigaAcorazadoExploracion::escanearEspacio()
{
}

void ANaveEnemigaAcorazadoExploracion::recolectarRecursos()
{
}

void ANaveEnemigaAcorazadoExploracion::aterrizarEnPlaneta()
{
}
