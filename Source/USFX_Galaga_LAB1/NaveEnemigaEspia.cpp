// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"
ANaveEnemigaEspia::ANaveEnemigaEspia() {

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}

void ANaveEnemigaEspia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}



void ANaveEnemigaEspia::Mover(float DeltaTime)
{
	velocidad = -250;
	ubicacionActual = GetActorLocation();
	float NuevaX = velocidad * DeltaTime + ubicacionActual.X;
	FVector NuevaPosicion = FVector(NuevaX, ubicacionActual.Y, ubicacionActual.Z);
	SetActorLocation(NuevaPosicion);

}
void ANaveEnemigaEspia::Disparar()
{

}

void ANaveEnemigaEspia::Vigilancia()
{
}



void ANaveEnemigaEspia::Apoyo()
{
}

void ANaveEnemigaEspia::Intercepcion()
{
}

void ANaveEnemigaEspia::Comunicacion()
{
}