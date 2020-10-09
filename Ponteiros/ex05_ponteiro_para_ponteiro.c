#include <stdlib.h>
#include <stdio.h>

int funcao(int **piParametro) {
  // o (**) identifica que era parâmetro irá ser
  // um ponteiro que aponta para um outro ponteiro.

  printf("%x\n", &piParametro);
  printf("%x\n", piParametro);
  printf("%d\n", *piParametro);  // O valor que está armazedo no piParametro
  printf("%d\n", **piParametro); // Mostra o valor ponteiro piVariavel
  return 0;
}

int main(){
  int *piVariavel;
  piVariavel = (int *)malloc(sizeof(int));
  *piVariavel = 20;
  printf("%x\n", &piVariavel);
  printf("%x\n", piVariavel);
  printf("%d\n", *piVariavel);

  funcao(&piVariavel);

 system("pause");
 return 0;
}
