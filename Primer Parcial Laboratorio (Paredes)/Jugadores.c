#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include "Jugadores.h"

#endif // EMPLOYEE_H_INCLUDED

#ifndef INPUT_H_INCLUDED
#define INPUT_H_INCLUDED

#include "Input.h"

#endif // INPUT_H_INCLUDED

int inicJugadores(eJugadores* listaDeJugadores, int lenght)
{
    int error = -1;

    if ( lenght != 0 && listaDeJugadores != NULL )
    {
        for (int i = 0; i < lenght; i++)
        {
            (listaDeJugadores+i)->isEmpty = 1;
        }
        error = 0;
    }

    return error;
}

int aniadirJugadores(eJugadores* jugadores, int lenght, int codigo, char nombre[], char apellido[],int codigoDeEquipo,char sexo)
{
    int indice = -1;

    if ( jugadores != NULL )
    {
        for (int i = 0; i < lenght; i++) // este for busca un espacio vacio en la estructura de empleados
        {
            if ( (jugadores+i)->isEmpty == 1 )
            {
                indice = i;
                (jugadores+indice)->isEmpty = 0;
                break;
            }
        }

        if (indice != -1)
        {
            strcpy( (jugadores+indice)->nombre, nombre );
            strcpy( (jugadores+indice)->apellido, apellido );
            (jugadores+indice)->codigoDeEquipo = codigoDeEquipo;
            strcpy(jugadores+indice)->sexo = sexo;
            (jugadores+indice)->codigo = codigo;
        }
    }
    return indice;
}
int printJugadores(eJugadores* jugadores, int length)
{
    int error = -1;

    if ( jugadores != NULL )
    {
        printf("\n Codigo   | Nombre                                              | Apellido                                            | Codigo De Equipo  | Sexo\n\n");

        for (int j = 0; j < length; j++)
        {
            if ( (jugadores+j)->isEmpty == 0)
            {
                printf(" %04d | %-51s | %-51s | %-8d | %s \n", (jugadores+j)->codigo, (jugadores+j)->nombre, (jugadores+j)->apellido, (jugadores+j)->codigoDeEquipo, (jugadores+j)->sexo);
            }
        }

        error = 0;
    }
     return error;
}

int ordenarJugadores(eJugadores* jugadores, int lenght, int order)
{
    int error = -1;
    eJugadores* auxEmp = (eJugadores*) malloc( sizeof(eJugadores) );

    if ( jugadores != NULL && auxEmp != NULL )
    {
        for (int i = 0; i < lenght; i++)
        {
            for (int j = i+1; j < lenght; j++)
            {
                if( order == 1)
                {
                    if ( stricmp((jugadores+i)->nombre, (jugadores+j)->nombre) > 0 )
                    {
                        *auxEmp = *(jugadores+i);
                        *(jugadores+i) = *(jugadores+j);
                        *(jugadores+j) = *auxEmp;
                    }

                    if ( (jugadores+i)->sexo > (jugadores+j)->sexo) // SORT por sexo.
                    {
                        *auxEmp = *(jugadores+i);
                        *(jugadores+i) = *(jugadores+j);
                        *(jugadores+j) = *auxEmp;
                    }
                }
                else // si el orden es decendente...
                {
                    if ( stricmp( (jugadores+i)->nombre, (jugadores+j)->nombre) < 0)
                    {
                        *auxEmp = *(jugadores+i);
                        *(jugadores+i) = *(jugadores+j);
                        *(jugadores+j) = *auxEmp;
                    }

                    if ( (jugadores+i)->sexo < (jugadores+j)->sexo)
                    {
                        *auxEmp = *(jugadores+i);
                        *(jugadores+i) = *(jugadores+j);
                        *(jugadores+j) = *auxEmp;
                    }
                }
            }
        }
       error = 0;
    }
    return error;
}
int menuPrincipal ()
{
    int opcion;
    printf("--------------NOMINA DE JUGADORES--------------\n");
    printf("1) Alta jugador\n");
    printf("2) Informar...\n");
    printf("3) Salir\n\n");

    printf("Que desea hacer?: ");
    scanf("%d", &opcion );

    return opcion;

}
int menuDeInformes ()
{
        int opcion;
    printf("--------------NOMINA DE JUGADORES-------------- // INFORMES\n");
    printf("1) Listado de los jugadores ordenados alfabeticamente por Apellido y Sexo.\n");
    printf("2) Salir\n\n");

    printf("Que desea hacer?: ");
    scanf("%d", &opcion );

    return opcion;
}

int inicEstruct(eJugadores* jugador, int tam)
{
    int error = -1;

    if ( jugador != NULL )
    {
        eJugadores jugadorACargar[] = {
        {1,"Gabriel", "Maldonado", 20000, 'M', 0},
        {2,"Carla", "Lopez", 45000, 'F', 0},
        {3,"Gabriel", "Maldonado", 30000, 'M', 0},
        {5,"Federico", "Pesquera", 15000, 'M', 0},
        {6,"Nicolas", "Margni", 8000, 'M', 0},
        {7,"Alan", "Linguori", 60000, 'M', 0},
        {8,"Khalil", "Stessens", 20000, 'M', 0},
        {4,"Melanie", "Perez", 45000, 'F', 0}
        };

        for (int i = 0; i < 8; i++)
        {
            *(jugador+i) = jugadorACargar[i];
        }
        error = 0;
    }

    return error;
}
