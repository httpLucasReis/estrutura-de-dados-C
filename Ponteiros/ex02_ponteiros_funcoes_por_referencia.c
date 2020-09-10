/* Ponteiros como refer�ncia em fun��es */
#include <stdlib.h>
#include <stdio.h>

int main(void){

  void soma (int piValorA, int piValorB, int *piResultado);

  int iValorA;
  int iValorB;
  int iResultado;

  printf("Entre com os valores: ");
  scanf("%d %d",&iValorA,&iValorB);

  printf("Endereco de iResultado = %X\n", &iResultado);

  soma(iValorA,iValorB, &iResultado);

  printf("Soma: %d\n", iResultado);

 system("pause");
 return 0;
}

void soma (int piValorA, int piValorB, int *piResultado){
  printf("Endereco de piResultado = %X\n", piResultado);
  /* O valor est� sendo colocado diretamente na mem�ria */
  *piResultado = piValorA + piValorB;
  return;
}
