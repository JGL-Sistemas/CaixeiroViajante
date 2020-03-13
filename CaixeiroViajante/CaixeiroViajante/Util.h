//
//  Util.h
//  CaixeiroViajante
//
//  Created by Lucas Matsueda on 07/03/20.
//  Copyright © 2020 Lucas Matsueda. All rights reserved.
//

#include <stdio.h>

/* cria memoria para um vetor de tam posicoes */
int *cria_vetor(int tam);

/* Cria matriz de ponteiros para inteiros com nlinhas e ncolunas */
float **cria_matriz_float(int nlinhas, int ncolunas);

/* libera memoria de um vetor */
void libera_vetor(int *vetor);

void libera_matriz_float(float **matriz, int nlinhas);

void imprime_matriz_float(float **matriz, int nlinhas);

void imprime_vetor(int n, int *s);
