//
//  main.c
//  CaixeiroViajante
//
//  Created by Lucas Matsueda on 07/03/20.
//  Copyright © 2020 Lucas Matsueda. All rights reserved.
//

#include <string.h>
#include <math.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "Util.h"
#include "Arquivo.h"
#include "construcao.h"

int main(int argc, const char * argv[]) {
    int n_cidades = 51, *s;
    float **distancias = cria_matriz_float(n_cidades, n_cidades);
    
    le_arq_matriz("C50.txt", n_cidades, distancias);
    
    s = cria_vetor(n_cidades);
	    
    aleatoria(n_cidades, s);
	//vizinhoProximo(n_cidades, s);
	    
    imprime_vetor(n_cidades, s);
    //imprime_matriz_float(distancias, n_cidades);
    
    printf("Func!\n");
    return 0;
}
