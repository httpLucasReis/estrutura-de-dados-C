/* Exemplo de algoritmo que trabalho com uma
   matriz multidimensional
*/
#include <stdlib.h>
#include <stdio.h>
#define DIM_1 2
#define DIM_2 5
#define DIM_3 3
#define DIM_4 4

int main(void){

  int i,j,k,l;
  int aMatriz[DIM_1][DIM_2][DIM_3][DIM_4];

  // Código para zerar uma matriz de quatro dimenções

  for(i=0; i < DIM_1; i++){
    for(j=0; j < DIM_2; j++){
      for(k=0; k < DIM_3; k++) {
        for(l = 0; l < DIM_4; l++){
          aMatriz[i][j][k][l] = i+j+k+l;
        }
      }
    }
  }

  /*
    Uma regra que se pode sempre levar em consideração: Para cada
     dimensao de uma matriz, sempre havera um laço (normalmente um for).
     Se houver quatro dimensões, então haverá quatro laços;
  */

  for(i=0; i < DIM_1; i++){
    for(j=0; j < DIM_2; j++){
      for(k=0; k < DIM_3; k++) {
        for(l = 0; l < DIM_4; l++){
          printf("\nValor para matriz em [%d] [%d] [%d] [%d] = [%d]\n"
                 ,i,j,k,l,aMatriz[i][j][k][l]);
        }
      }
    }
  }

 system("pause");
 return 0;
}
