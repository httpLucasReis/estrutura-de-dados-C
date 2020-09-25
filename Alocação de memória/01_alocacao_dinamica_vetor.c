/*
  Esse programa utiliza as fun��es malloc e realloc para criar e
  aumentar o tamanho de um vetor dinamicamente (em tempo de execu��o).
  No caso dealgum erro, as fun��es retornam um ponteiro nulo
  (NULL) para indicar erro de aloca��o de mem�ria.
*/

#include <stdlib.h>
#include <stdio.h>

int main(void){
  int *p; // ponteiro
  int initalLocation,k,newLocation; // contadores

  printf("\nDigite a quantidade de numeros que serao digitados: ");
  scanf("%d", &initalLocation);

  /* A fun��o malloc reserva espa�o suiciente para um vetor de inteiros.
     Caso sejam digitados 5 elementos, ser�o reservados 20 bytes, pois cada
     inteiro ocupa 4 bytes na mem�ria
  */

  printf("\n\n\n");

  p = (int *) (malloc(initalLocation*sizeof(int)));
  if(p == NULL){
    printf("Erro de alocacao de memoria");
  }

  for(k=0; k < initalLocation; k++){
    printf("Digite um numero para o indece [%d]: ", k);
    scanf("%d", &p[k]);
  }

  printf("Digite quantos elementos quer adicionar ao vetor: ");
  scanf("%d", &newLocation);

  /*
     A fun��o realloc aumenta ou diminui o tamanho do vetor dinamicamente. Ela
     recebe o ponteiro para o vetor anterior e retorna o novo espa�o alocado.
  */

  p = (int *) (realloc(p, (initalLocation+newLocation)*sizeof(int)));
  if(p == NULL){
    printf("Erro de re-alocacao de memoria");
  }

  for(; k < (newLocation+initalLocation); k++){
    printf("Digite um numero para o indece [%d]: ", k);
    scanf("%d", &p[k]);
  }

  for(k=0; k < (newLocation+initalLocation); k++){
    printf("\nO numero do indice [%d] eh %d\n", k, p[k]);
  }

  free(p); // Liberando a mem�ria alocada


 system("pause");
 return 0;
}
