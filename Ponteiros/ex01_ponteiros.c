/* Exemplo de uso dos ponteiros */
#include <stdlib.h>
#include <stdio.h>

int main(){

  int *piValor; // Ponteiro para inteiro
  int iVariavel = 10101010;

  piValor = &iVariavel; // Pegando o endereço de memória da variável

  printf("Endereco: %p\n", piValor);
  printf("Valor: %d\n\n", *piValor);

  *piValor = 20202020; // Alterando o valor que está no endereço de memória.
  printf("Endereco: %p\n",piValor);
  printf("Valor alterado: %d\n", iVariavel);

 system("pause");
 return 0;
}
