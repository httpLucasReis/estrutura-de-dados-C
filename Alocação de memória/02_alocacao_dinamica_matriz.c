/*
  utiliza a fun��o calloc para criar uma matriz em tempo de
  execu��o. De forma id�ntica a malloc, a fun��o calloc retorna
  um ponteiro nulo(NULL) no caso de erro de aloca��o de mem�ria.
*/

#include <stdlib.h>
#include <stdio.h>

int main(void){

  /* A declara��o de uma matriz de 2 dimens�es exige um ponteiro para
     ponteiro.
  */

  int **p;
  int i,j,k,x;

  printf("\nDigite as dimensoes da matriz: ");
  scanf("%d %d",&i,&j);

  /*
     Aloca��o da primeira dimens�o. Internamente, a fun��o calloc far� uma multiplica��o da
     quantidade de elementos pelo tamanho de cada elemento para saber quanto de mem�ria
     deve ser alocada.
  */

  p = calloc(i,sizeof(int));

  if(p == NULL){
    printf("\nErro na alocacao de memoria");
    exit(1);
  }

  for(k=0; k < i; k++){
    // Aloca��o das linhas de cada coluna (segunda dimens�o).
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
    free(p[k]); /* Primeiro deve ser liberado a mem�ria para cada linha da matriz */
  }

  free(p);

 system("pause");
 return 0;
}
