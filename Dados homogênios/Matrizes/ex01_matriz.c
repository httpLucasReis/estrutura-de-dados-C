/* Exemplo de um algoritmo que calcula a determinante de uma matriz */

#include <stdlib.h>
#include <stdio.h>
#define DIMENSAO 2

int main(){
  int iLinha, iColuna;
  int iDeterminante;

  int iValorA;
  int matriz[DIMENSAO][DIMENSAO];

  /* Uma regra que se pode sempre levar em consideração
     para cada dimensão de uma matriz, sempre haverá um
     laço (normalmente um for). Se houver duas dimensões,
     então haverá dois laços
  */

  for(iLinha = 0; iLinha < DIMENSAO; iLinha++){
    for(iColuna = 0; iColuna < DIMENSAO; iColuna++){
      printf("Insira um item na posicao [%d][%d]:\n", iLinha, iColuna);
      scanf("%d", &iValorA);
      matriz[iLinha][iColuna] = iValorA;
    }
  }

  iDeterminante = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);
  printf("Determinate: %d\n",iDeterminante);

 system("pause");
 return 0;
}

/* Created by Manoel Lucas Lopes Reis */
