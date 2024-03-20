// Copyright Epic Games, Inc. All Rights Reserved.

#include "USFX_Galaga_LAB1GameMode.h"
#include "USFX_Galaga_LAB1Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaAcorazado.h"
#include "NaveEnemigaAcorazadoExploracion.h"
#include "NaveEnemigaTransporteMuniciones.h"
#include "NaveEnemigaEspia.h  "
#include "NaveEnemigaEspiaCamuflaje.h"	
#include "NaveEnemigaApoyo.h"	
#include "NaveEnemigaApoyoReparacion.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaPesado.h"	

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
		/*for (int i = 0; i < 7; i++) {
			ColocacionActual = FVector(ColocacionActual.X, ColocacionActual.Y + i+250, ColocacionActual.Z);
			ANaveEnemigaTransporte* NaveEnemigaTransporteActual = World->SpawnActor<ANaveEnemigaTransporte>(ColocacionActual, rotacionNave);
			TANavesEnemigas.Add(NaveEnemigaTransporteActual);

			//TMapCambiarname.Add(NaveEnemigaTransporteActual->GetNombre(), NaveEnemigaTransporteActual);
			//TMapCambiarname["Nave de Transporte"]->GetCapacidadCargaPeso();asi se accede a un elemento de un TMap;
			//Use el TMap para difeenciar unas naves de otras  de cada nave;

			FString nombre = NaveEnemigaTransporteActual->GetNombre();
			FString nombreNave=FString::Printf(TEXT("%s %d"),*nombre,i);
			//Mensaje en pantalla
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, nombreNave);
			} 

			TMapCambiarVelocidad.Add(nombreNave, NaveEnemigaTransporteActual);
			TMapCambiarVelocidad[nombreNave]->GetVelocidad();
			TMapCambiarVelocidad[nombreNave]->SetVelocidad(-250);
			
			



		}*/
		for (int i= 0; i < 7; i++) {

			ColocacionActual = FVector(ColocacionActual.X+250, ColocacionActual.Y + i , ColocacionActual.Z);
			ANaveEnemigaAcorazadoExploracion* NaveEnemigaAcorazadoExploracionActual = World->SpawnActor<ANaveEnemigaAcorazadoExploracion>(ColocacionActual, rotacionNave);
			TANavesEnemigas.Add(NaveEnemigaAcorazadoExploracionActual);	

		}

		for (int i = 0; i < 7; i++) {
			ColocacionActual = FVector(ColocacionActual.X-10, ColocacionActual.Y+250, ColocacionActual.Z+4);
			ANaveEnemigaTransporteMuniciones* NaveEnemigaTransporteMunicionesActual = World->SpawnActor<ANaveEnemigaTransporteMuniciones>(ColocacionActual, rotacionNave);	
			TANavesEnemigas.Add(NaveEnemigaTransporteMunicionesActual);


		}
		for (int i = 0; i < 7; i++) {
			ColocacionActual = FVector(ColocacionActual.X-60, ColocacionActual.Y-270, ColocacionActual.Z);
			ANaveEnemigaEspiaCamuflaje* NaveEnemigaEspiaCamuflajeActual = World->SpawnActor<ANaveEnemigaEspiaCamuflaje>(ColocacionActual, rotacionNave);	
		  		TANavesEnemigas.Add(NaveEnemigaEspiaCamuflajeActual);	
		 }

		for (int i = 0; i < 7; i++) {
			ColocacionActual = FVector(ColocacionActual.X, ColocacionActual.Y -150, ColocacionActual.Z);
			ANaveEnemigaApoyoReparacion* NaveEnemigaApoyoReparacionActual = World->SpawnActor<ANaveEnemigaApoyoReparacion>(ColocacionActual, rotacionNave);
			TANavesEnemigas.Add(NaveEnemigaApoyoReparacionActual);
		}	
		for (int i = 0; i < 7; i++) {
		    ColocacionActual = FVector(ColocacionActual.X+i+100, ColocacionActual.Y +300, ColocacionActual.Z+3);
			ANaveEnemigaCazaPesado* NaveEnemigaCazaPesadoActual = World->SpawnActor<ANaveEnemigaCazaPesado>(ColocacionActual, rotacionNave);
			TANavesEnemigas.Add(NaveEnemigaCazaPesadoActual);
		}



		//FVector ColocacionActual = ColocacionInicialNaves;



		/*/for (int i = 0; i< 7; i++) {

			ColocacionActual = FVector(ColocacionActual.X, ColocacionActual.Y+i+350, ColocacionActual.Z );
			ANaveEnemigaAcorazado* NaveEnemigaAcorazadoActual = World->SpawnActor<ANaveEnemigaAcorazado>(ColocacionActual, rotacionNave);
			TANavesEnemigas.Add(NaveEnemigaAcorazadoActual);
		
			FString nombreRed = NaveEnemigaAcorazadoActual->GetNombre();
			FString nombreNaves = FString::Printf(TEXT("%s %d"), *nombreRed, i);
			//Mensaje en pantalla
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, nombreNaves);
			}
		
		
		}*/


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