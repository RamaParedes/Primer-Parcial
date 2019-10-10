#include <stdio.h>
#include <stdlib.h>

#ifndef JUGADORES_H_INCLUDED
#define JUGADORES_H_INCLUDED

#include "Jugadores.h"

#endif // JUGADORES_H_INCLUDED

#ifndef INPUT_H_INCLUDED
#define INPUT_H_INCLUDED

#include "Input.h"

#endif // INPUT_H_INCLUDED

#define TAM_JUGADORES 100

int main()
{
    eJugadores* jugador = (eJugadores*) malloc( TAM_JUGADORES * sizeof(eJugadores) ); // busco espacio en memoria para 100 empleados
    eJugadores* jugadorACargar = (eJugadores*) malloc( sizeof(eJugadores) );

    if ( jugador == NULL || jugadorACargar == NULL )
    {
        printf("ERROR: no se pudo conseguir espacio para trabajar con los datos\n\n");
        system("pause");
        system("cls");
    }

    if ( inicJugadores(jugador, TAM_JUGADORES) )
    {
        printf("ERROR: Ocurrio un error en la inicializacion...\n\n");
        system("pause");
        system("cls");
    }
     if ( initEstruct(jugador, TAM_JUGADORES) )
    {
        printf("ERROR: Ocurrio un error en hardcodeo ...\n\n");
        system("pause");
    }
