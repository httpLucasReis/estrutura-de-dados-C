/*
   Exemplo de um programa que trabalha com a aritmetica
   com ponteiros
*/
#include <stdlib.h>
#include <stdio.h>

int main(void){
  int *piValor;
  int iValor;    // Ocupa 4 bytes na memória
  char *pcValor;
  char cValor;   // Ocupa 1 byte na memória

  piValor = &iValor;
  pcValor = &cValor;

  printf("Endereco de piValor = %x\n", piValor);
  printf("Endereco de pcValor = %x\n\n\n", pcValor);


  piValor++; /*Somando uma unidade (4 bytes) na memória */
  pcValor++; /*Somando uma unidade (1 byte) na memória */

  printf("Endereco de piValor = %x\n", piValor);
  printf("Endereco de pcValor = %x\n\n\n", pcValor);



 system("pause");
 return 0;
}
