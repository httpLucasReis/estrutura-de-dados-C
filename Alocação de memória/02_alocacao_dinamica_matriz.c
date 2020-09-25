/*
  utiliza a função calloc para criar uma matriz em tempo de
  execução. De forma idêntica a malloc, a função calloc retorna
  um ponteiro nulo(NULL) no caso de erro de alocação de memória.
*/

#include <stdlib.h>
#include <stdio.h>

int main(void){

  /* A declaração de uma matriz de 2 dimensões exige um ponteiro para
     ponteiro.
  */

  int **p;
  int i,j,k,x;

  printf("\nDigite as dimensoes da matriz: ");
  scanf("%d %d",&i,&j);

  /*
     Alocação da primeira dimensão. Internamente, a função calloc fará uma multiplicação da
     quantidade de elementos pelo tamanho de cada elemento para saber quanto de memória
     deve ser alocada.
  */

  p = calloc(i,sizeof(int));

  if(p == NULL){
    printf("\nErro na alocacao de memoria");
    exit(1);
  }

  for(k=0; k < i; k++){
    // Alocação das linhas de cada coluna (segunda dimensão).
    p[k] = calloc(j,sizeof(int));
    if(p[k] == NULL){
      printf("\nErro de alocacao de memoria\n");
      exit(1);
    }
  }

  for(k=0; k<i; k++){
    for(x=0; x<j; x++){
      printf("Digite um numero para indece [%d][%d]: ",k,x);
      scanf("%d",&p[k][x]);
    }
  }

  for(k=0; k<i; k++){
    printf("\n");
    for(x=0; x<j; x++){
      printf("\nValor do indece [%d][%d] = %d\n",k,x,p[k][x]);
    }
  }

  printf("\nLiberando memoria alocada\n");

  for(k=0; k<i; k++){
    free(p[k]); /* Primeiro deve ser liberado a memória para cada linha da matriz */
  }

  free(p);

 system("pause");
 return 0;
}
