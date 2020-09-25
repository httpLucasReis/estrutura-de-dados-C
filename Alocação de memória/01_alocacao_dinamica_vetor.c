/*
  Esse programa utiliza as funções malloc e realloc para criar e
  aumentar o tamanho de um vetor dinamicamente (em tempo de execução).
  No caso dealgum erro, as funções retornam um ponteiro nulo
  (NULL) para indicar erro de alocação de memória.
*/

#include <stdlib.h>
#include <stdio.h>

int main(void){
  int *p; // ponteiro
  int initalLocation,k,newLocation; // contadores

  printf("\nDigite a quantidade de numeros que serao digitados: ");
  scanf("%d", &initalLocation);

  /* A função malloc reserva espaço suiciente para um vetor de inteiros.
     Caso sejam digitados 5 elementos, serão reservados 20 bytes, pois cada
     inteiro ocupa 4 bytes na memória
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
     A função realloc aumenta ou diminui o tamanho do vetor dinamicamente. Ela
     recebe o ponteiro para o vetor anterior e retorna o novo espaço alocado.
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

  free(p); // Liberando a memória alocada


 system("pause");
 return 0;
}
