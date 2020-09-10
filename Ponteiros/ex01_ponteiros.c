/* Exemplo de uso dos ponteiros */
#include <stdlib.h>
#include <stdio.h>

int main(){

  int *piValor; // Ponteiro para inteiro
  int iVariavel = 10101010;

  piValor = &iVariavel; // Pegando o endere�o de mem�ria da vari�vel

  printf("Endereco: %p\n", piValor);
  printf("Valor: %d\n\n", *piValor);

  *piValor = 20202020; // Alterando o valor que est� no endere�o de mem�ria.
  printf("Endereco: %p\n",piValor);
  printf("Valor alterado: %d\n", iVariavel);

 system("pause");
 return 0;
}
