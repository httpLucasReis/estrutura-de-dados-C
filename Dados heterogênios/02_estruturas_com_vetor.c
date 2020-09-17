/* Exemplo de uso de estruturas com vetores */
#include <stdlib.h>
#include <stdio.h>

struct DADO {
  char sNome[40];
  int iIdade;
};

int main(void){
  struct DADO sDados[3];
  int iIndice;

  /*
    A estrutura e dividada em duas partes por um ponto (.). Tem-se o nome
    da estrutura à esquerda e o nome do campo à direita. Neste exemplo, como
    está sendo manipulado com um vetor de estruturas, tambpem tem o índice para
    cara linha do vetor.
  */

  for(iIndice=0; iIndice < 3; iIndice++){
    printf("\nEntre com um nome: ");
    scanf("%s",&sDados[iIndice].sNome);
    printf("\nEntre com a idade: ");
    scanf("%d",&sDados[iIndice].iIdade);
  }

  for(iIndice=0; iIndice < 3; iIndice++){
    printf("\n %d - %s tem %d anos\n",iIndice+1,sDados[iIndice].sNome,sDados[iIndice].iIdade);
  }

 system("pause");
 return 0;
}
