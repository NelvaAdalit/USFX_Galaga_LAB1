// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"

ANaveEnemigaTransporte::ANaveEnemigaTransporte()

{
	nombre="Nave de Transporte";
	velocidad = -250;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}
void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void ANaveEnemigaTransporte::Mover(float DeltaTime)
{
	//velocidad = -250;
	ubicacionActual = GetActorLocation();
	float NuevaX = velocidad * DeltaTime + ubicacionActual.X;
	FVector NuevaPosicion = FVector(NuevaX, ubicacionActual.Y, ubicacionActual.Z);
	SetActorLocation(NuevaPosicion);
	float NuvevaY= velocidad * DeltaTime + ubicacionActual.Y;
	FVector NuevaPosicionY = FVector(ubicacionActual.X, NuvevaY, ubicacionActual.Z);
	SetActorLocation(NuevaPosicionY);

}

/*// Obtiene la posici?n actual del actor
FVector PosicionActual = GetActorLocation();

// Genera nuevas coordenadas X e Y aleatorias
float NuevaX = FMath::RandRange(-1000.0f, 1000.0f) * (DeltaTime / 1000.0f);
float NuevaY = FMath::RandRange(-1000.0f, 1000.0f) * (DeltaTime / 1000.0f);
float NuevaZ = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;

// Crea un nuevo vector de posici?n con las coordenadas aleatorias y la misma Z que la posici?n actual
FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z + NuevaZ);

// Establece la nueva posici?n del actor
SetActorLocation(NuevaPosicion);*/


void ANaveEnemigaTransporte::Disparar()
{
}

void ANaveEnemigaTransporte::Vigilancia()
{
}

void ANaveEnemigaTransporte::Apoyo()
{
}

void ANaveEnemigaTransporte::Intercepcion()
{
}

void ANaveEnemigaTransporte::Comunicacion()
{
}