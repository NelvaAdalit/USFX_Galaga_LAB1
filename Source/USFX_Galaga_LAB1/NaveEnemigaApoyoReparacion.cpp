// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaApoyoReparacion.h"


void ANaveEnemigaApoyoReparacion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);

}


void ANaveEnemigaApoyoReparacion::Mover(float DeltaTime)
{

	velocidad = -200;
	ubicacionActual = GetActorLocation();
	float NuevaX = velocidad * DeltaTime + ubicacionActual.X;
	FVector NuevaPosicion = FVector(NuevaX, ubicacionActual.Y, ubicacionActual.Z);
	SetActorLocation(NuevaPosicion);

}

void ANaveEnemigaApoyoReparacion::regenerarEscudos()
{
}

void ANaveEnemigaApoyoReparacion::recargarMunicion()
{
}

void ANaveEnemigaApoyoReparacion::recargarCombustible()
{
}

void ANaveEnemigaApoyoReparacion::repararNave()
{
}
