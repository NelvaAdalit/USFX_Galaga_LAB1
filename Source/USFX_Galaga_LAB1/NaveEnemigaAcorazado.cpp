// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaAcorazado.h"



ANaveEnemigaAcorazado::ANaveEnemigaAcorazado()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaAcorazado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}


void ANaveEnemigaAcorazado::Mover(float DeltaTime)
{
	velocidad = 1;
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y, GetActorLocation().Z));



}


/*void ANaveEnemigaAcorazado::Mover(float DeltaTime)
{
    velocidad = 1;
    FVector PosicionInicial = FVector(100.0f, 100.0f, 100.0f);
    float LimiteDeRespawn = -1000.0f;
    FVector NewLocation = FVector(GetActorLocation().X + velocidad * DeltaTime, GetActorLocation().Y, GetActorLocation().Z);
    SetActorLocation(NewLocation);

    // Verificar si la nave ha salido del límite
    if (NewLocation.X < LimiteDeRespawn)
    {
        // Reiniciar la posición de la nave
        SetActorLocation(PosicionInicial);
    }
}*/

void ANaveEnemigaAcorazado::Disparar()
{
}

void ANaveEnemigaAcorazado::Atacar()
{
}


void ANaveEnemigaAcorazado::Bloqueo()
{
}