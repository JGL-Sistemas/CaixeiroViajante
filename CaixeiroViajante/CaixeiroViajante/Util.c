//
//  Util.c
//  CaixeiroViajante
//
//  Created by Lucas Matsueda on 07/03/20.
//  Copyright © 2020 Lucas Matsueda. All rights reserved.
//

#include <stdlib.h>
#include "Util.h"

int *cria_vetor(int tam){
    int *vetor = (int*)malloc(sizeof(int)*tam);
    return vetor;
}

float **cria_matriz_float(int nlinhas, int ncolunas){
    register int i;
    float **matriz;
    
    matriz = (float **) malloc(nlinhas*sizeof(float *));
    if (!matriz) {
        printf("Falta memoria para alocar a matriz de ponteiros\n");
        exit(1);
    }
    for (i=0; i < nlinhas; i++) {
        matriz[i] = (float *) malloc(ncolunas*sizeof(float));
        if (!matriz[i]){
            printf("Falta memoria para alocar a matriz de ponteiros.\n");
            exit(1);
        }
    }
    return matriz;
}


void libera_vetor(int *vetor){
    free(vetor);
}

void libera_matriz_float(float **matriz, int nlinhas)
{
    register int i;
    
    for (i=nlinhas-1; i >= 0; i--)
        free((float *) matriz[i]);
    free((float *) matriz);
}

void imprime_matriz_float(float **matriz, int nlinhas){
    int i, j;
    for(i = 0; i < nlinhas; i++){
        for(j = 0; j < nlinhas; j++){
            printf("%f ", matriz[i][j]);
        }
        printf("/n");
    }
}

void imprime_vetor(int n, int *s){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", s[i]);
    }
    printf("\n");
}
