// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporteMuniciones.h"

void ANaveEnemigaTransporteMuniciones::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);

}
void ANaveEnemigaTransporteMuniciones::Mover(float DeltaTime)
{

	velocidad = -300;
	ubicacionActual = GetActorLocation();
	float NuevaX = velocidad * DeltaTime + ubicacionActual.X;
	FVector NuevaPosicion = FVector(NuevaX, ubicacionActual.Y, ubicacionActual.Z);
	SetActorLocation(NuevaPosicion);

}

void ANaveEnemigaTransporteMuniciones::RecargarArmas()
{
}

void ANaveEnemigaTransporteMuniciones::EntregarMuniciones()
{
}
