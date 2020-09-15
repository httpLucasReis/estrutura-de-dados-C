#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

  char t[5];

  strcpy(t,"adcde");

  // t = endereço
  // *t = conteudo armazenado nesse endereco

  printf("\nEndereco = %x, Caractere = %c",t,*(t));
  printf("\nEndereco = %x, Caractere = %c",t+1,*(t+1));
  printf("\nEndereco = %x, Caractere = %c",t+2,*(t+2));
  printf("\nEndereco = %x, Caractere = %c",t+3,*(t+3));
  printf("\nEndereco = %x, Caractere = %c\n\n",t+4,*(t+4));

 system("pause");
 return 0;
}
