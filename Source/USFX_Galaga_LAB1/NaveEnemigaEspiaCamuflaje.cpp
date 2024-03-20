// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspiaCamuflaje.h"


void ANaveEnemigaEspiaCamuflaje::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);

}

void ANaveEnemigaEspiaCamuflaje::Mover(float DeltaTime)
{

	velocidad = -140;
	ubicacionActual = GetActorLocation();
	float NuevaX = velocidad * DeltaTime + ubicacionActual.X;
	FVector NuevaPosicion = FVector(NuevaX, ubicacionActual.Y, ubicacionActual.Z);
	SetActorLocation(NuevaPosicion);

}

void ANaveEnemigaEspiaCamuflaje::transmitirDatos()
{
}

void ANaveEnemigaEspiaCamuflaje::recopilarInformacion()
{
}

void ANaveEnemigaEspiaCamuflaje::activarCamuflaje()
{
}
