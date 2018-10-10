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
    int **matriz_Bm = NULL;
    int *vector_Cj = NULL;
    int *vector_Cb = NULL;
    int *vector_Xb = NULL;

    scanf(" %s", tipo_problema);
    scanf(" %d", &num_incognitas);
    scanf(" %d", &num_restricciones);

    func_obj = (int *) calloc(sizeof(int), num_incognitas);

    matriz_A = (int **) calloc(sizeof(int*), num_restricciones);
    for (i = 0; i < num_restricciones; i++)
    {
        matriz_A[i] = (int *) calloc(sizeof(int), num_incognitas);
    }

    vector_B = (int *) calloc(sizeof(int), num_restricciones);

    matriz_Bm = (int **) calloc(sizeof(int*), num_restricciones);
    for (i = 0; i < num_restricciones; i++)
    {
        matriz_Bm[i] = (int *) calloc(sizeof(int), num_incognitas);
    }

    vector_Cj = (int *) calloc(sizeof(int), num_restricciones);
    vector_Cb = (int *) calloc(sizeof(int), num_restricciones);
    vector_Xb = (int *) calloc(sizeof(int), num_restricciones);

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

        scanf(" %d", &vector_B[i]);
    }

    return 0;
}