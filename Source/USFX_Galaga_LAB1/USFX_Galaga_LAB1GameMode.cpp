// Copyright Epic Games, Inc. All Rights Reserved.

#include "USFX_Galaga_LAB1GameMode.h"
#include "USFX_Galaga_LAB1Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaAcorazado.h"
#include "NaveEnemigaAcorazadoExploracion.h"


AUSFX_Galaga_LAB1GameMode::AUSFX_Galaga_LAB1GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AUSFX_Galaga_LAB1Pawn::StaticClass();
}

void AUSFX_Galaga_LAB1GameMode::BeginPlay()
{
	Super::BeginPlay();

	FVector ColocacionInicialNaves = FVector(-500.0f,50.0f,270.f);
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);
	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		FVector ColocacionActual = ColocacionInicialNaves;
		for (int i = 0; i < 7; i++) {
			ColocacionActual = FVector(ColocacionActual.X+100.0f, ColocacionActual.Y +200.0f + i, ColocacionActual.Z+2.0f);
			ANaveEnemigaTransporte* NaveEnemigaTransporteActual = World->SpawnActor<ANaveEnemigaTransporte>(ColocacionActual, rotacionNave);
			TANaveEnemigaTransporte.Add(NaveEnemigaTransporteActual);
			

		}

		//FVector ColocacionActual = ColocacionInicialNaves;



		for (int i = 0; i< 7; i++) {

			ColocacionActual = FVector(ColocacionActual.X + 200.0f, ColocacionActual.Y -200.0f + i, ColocacionActual.Z + 3.0f);
			ANaveEnemigaAcorazado* NaveEnemigaAcorazadoActual = World->SpawnActor<ANaveEnemigaAcorazado>(ColocacionActual, rotacionNave);
			TANaveEnemigaAcorazado.Add(NaveEnemigaAcorazadoActual);
		
		
		
		
		
		}

	}
}








void AUSFX_Galaga_LAB1GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoTranscurrido++;

	if (TiempoTranscurrido >= 100)
	{
		int numeroEnemigo = FMath::RandRange(0, 9);
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Hola estoy aqui")));


			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Entero: %d"), numeroEnemigo));

		}
		//TANavesEnemigas[numeroEnemigo]->PrimaryActorTick.bCanEverTick = false;
		TANavesEnemigas[numeroEnemigo]->SetVelocidad(0);
	}
}