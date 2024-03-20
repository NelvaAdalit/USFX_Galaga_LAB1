// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaPesado.h"
void ANaveEnemigaCazaPesado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);

}


void ANaveEnemigaCazaPesado::Mover(float DeltaTime)
{

	velocidad = -100;
	ubicacionActual = GetActorLocation();
	float NuevaX = velocidad * DeltaTime + ubicacionActual.X;
	FVector NuevaPosicion = FVector(NuevaX, ubicacionActual.Y, ubicacionActual.Z);
	SetActorLocation(NuevaPosicion);

}
void ANaveEnemigaCazaPesado::MantenerNave()
{
}

void ANaveEnemigaCazaPesado::EscanearArea()
{
}

void ANaveEnemigaCazaPesado::DesplegarEquipamiento()
{
}

void ANaveEnemigaCazaPesado::ActivarEscudos()
{
}