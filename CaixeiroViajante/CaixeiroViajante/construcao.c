//
//  construcao.c
//  CaixeiroViajante
//
//  Created by Lucas Matsueda on 08/03/20.
//  Copyright © 2020 Lucas Matsueda. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "construcao.h"
#include "Util.h"


void aleatoria(int n_cidades, int *s){
    s[0] = 0;
    int i;
    
    for(i = 1; i <= n_cidades; i++){
        s[i] = i;
    }
    
    
    embaralhar(s, n_cidades);  
}

void vizinhoProximo(int n_cidades, int *s){
    s[0] = 0;
    int i;
    
    for(i = 1; i <= n_cidades; i++){
        s[i] = i;
    }
    
    embaralhar(s, n_cidades); 
}

void embaralhar(int *vet, int vetSize)
{
    for (int i = 0; i < vetSize; i++)
    {
        int r = rand() % vetSize;
        
        int temp = vet[i];
        vet[i] = vet[r];
        vet[r] = temp;
    }
}


/* Faça uma função que construa uma solução de forma gulosa. Vizinho mais próximo.
 Valor: 2 pontos */

