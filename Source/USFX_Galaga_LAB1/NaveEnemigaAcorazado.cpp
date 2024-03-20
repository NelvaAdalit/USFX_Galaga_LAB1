// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaAcorazado.h"



ANaveEnemigaAcorazado::ANaveEnemigaAcorazado()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
    nombre = "Nave de Acorazado";
}


void ANaveEnemigaAcorazado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
    
}


void ANaveEnemigaAcorazado::Mover(float DeltaTime)
{
	velocidad = -250;
    ubicacionActual = GetActorLocation();
    float NuevaX =velocidad*DeltaTime+ubicacionActual.X;
    //float NuevaY = velocidad * DeltaTime + ubicacionActual.Y;
    FVector NuevaPosicion = FVector(NuevaX,ubicacionActual.Y, ubicacionActual.Z);
    SetActorLocation(NuevaPosicion);
   /* if (ubicacionActual.X>LimiteSuperior) {
        SetActorLocation(FVector(0.0f, ubicacionActual.Y, ubicacionActual.Z));


    }
    if (ubicacionActual.X < Limiteinferior) {
		SetActorLocation(FVector(0.0f, ubicacionActual.Y, ubicacionActual.Z));
	}*/
    

   
    


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