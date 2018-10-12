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
    int **matriz_A = NULL;
    int *vector_B = NULL;
    char **vector_R = NULL;

    scanf(" %s", tipo_problema);
    scanf(" %d", &num_incognitas);
    scanf(" %d", &num_restricciones);

    func_obj = (int *) calloc(sizeof(int), num_incognitas);

    matriz_A = (int **) calloc(sizeof(int*), num_restricciones);
    for (i = 0; i < num_restricciones; i++)
    {
        matriz_A[i] = (int *) calloc(sizeof(int), num_incognitas + num_restricciones);
    }

    vector_B = (int *) calloc(sizeof(int), num_restricciones);
    vector_R = (char **) calloc(sizeof(char**), num_restricciones);
    for (i = 0; i < num_restricciones; i++)
    {
        vector_R[i] = (char*) calloc(sizeof(char), 3);
    }


    for (i = 0; i < num_incognitas; i++)
    {
        scanf(" %d", &func_obj[i]);
    }

    for (i = 0; i < num_restricciones; i++)
    {
        for (j = 0; j < num_incognitas; j++)
        {
            scanf(" %d", &matriz_A[i][j]);
        }
        scanf(" %s", tipo_restriccion);

        int holgura = 1;
        if (strcmp(tipo_restriccion, "<") == 0 || strcmp(tipo_restriccion, "<=") == 0)
        {
            holgura = 1;
        }
        else if (strcmp(tipo_restriccion, ">") == 0 || strcmp(tipo_restriccion, ">=") == 0)
        {
            holgura = -1;
        }
        else
        {
            holgura = 0;
        }

        strcpy(vector_R[i], tipo_restriccion);
        matriz_A[i][i + j] = holgura;

        scanf(" %d", &vector_B[i]);
    }

    for (i = 0; i < num_restricciones; i++)
    {
        for (j = 0; j < num_restricciones + num_incognitas; j++)
        {
            printf("%2d ", matriz_A[i][j]);
        }
        printf("%s %d\n", vector_R[i], vector_B[i]);
    }

    return 0;
}