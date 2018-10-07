/**
 * Fundamentos para la Optimización Computacional
 * Proyecto Semestre I-2018
 *
 * Octubre, 2018
 * */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // Variables reusables
    int i = 0;
    int j = 0;

    // Lectura de archivo de entrada
    // TODO: Extraer a una procedimiento a parte
    char tipo_problema[4] = "";
    char tipo_restriccion[3] = "";
    int num_incognitas = 0;
    int num_restricciones = 0;
    int *func_obj = NULL;
    int **matriz_rest = NULL;

    scanf(" %s", tipo_problema);
    scanf(" %d", &num_incognitas);
    scanf(" %d", &num_restricciones);

    func_obj = (int *) calloc(sizeof(int), num_incognitas);

    matriz_rest = (int **) calloc(sizeof(int*), num_restricciones);
    for (i = 0; i < num_restricciones; i++)
    {
        matriz_rest[i] = (int *) calloc(sizeof(int), num_incognitas + 1);
    }

    for (i = 0; i < num_incognitas; i++)
    {
        scanf(" %d", &func_obj[i]);
    }

    for (i = 0; i < num_restricciones; i++)
    {
        for (j = 0; j < num_incognitas; j++)
        {
            scanf(" %d", &matriz_rest[i][j]);
        }

        scanf(" %s", tipo_restriccion);

        scanf(" %d", &matriz_rest[i][j]);
    }

    return 0;
}