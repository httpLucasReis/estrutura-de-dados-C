/*
  Fazer um programa em C que implemente o algoritmo 1.2 para acessar
  elementos de uma matriz via ponteiros. Considerando uma matriz de
  2x2:
 */
#include <stdlib.h>
#include <stdio.h>

void imprimeMatriz(int paMatriz[][3], int piLinha, int piColuna){
  int indexLinha;
  int indexColuna;

  /*
  Quando você acessa o campo (i,j) da matriz 3x3, o que o C faz por baixo dos panos
  é acessar o campo 3*piLinha + piColuna do "vetorzão". Por isso, o compilador
  tem que saber em tempo de compilação quanta colunas há em cada linha,
  que é o fator que multiplica o i.*/

  for(indexLinha = 0; indexLinha < piLinha; indexLinha++){
      printf("\n");
    for(indexColuna = 0; indexColuna < piColuna; indexColuna++){
      printf("[%d]", paMatriz[indexLinha][indexColuna]);
    }
  }
  printf("\n");
}

int main(){
  int matriz[3][3] = {1,2,3,4,5,6,7,8,9};

  imprimeMatriz(matriz, 3,3);

 system("pause");
 return 0;
}

