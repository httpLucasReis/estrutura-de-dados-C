/*
A estrutura de dados struct também pode ser alocada dinamicamente com
as funções malloc ou calloc. O programa trabalha com uma estrutura
de dados struct alocada dinamicamente.

*/

#include <stdlib.h>
#include <stdio.h>

struct empregado {
  char nome[40];
  float salario;
  struct nascimento{
    int ano;
    int mes;
    int dia;
  } dt_nascimento;
};

void falidAllocation(struct empregado *p){
  if(p == NULL){
    printf("Erro na alocacao");
    exit(1);
    system("pause");
  }
}

int main(){
  struct empregado *p;
  p = (struct empregado*) malloc(sizeof(struct empregado));
  falidAllocation(p);

  /* O -> é chamado de pointer member (apontador de membro). Ele é usado
          para referenciar um campo da estrutura no lugar do ponto (.) */

  printf("Digite um nome: ");
  scanf("%s",&p->nome);

  printf("Digite um salario: ");
  scanf("%f",&p->salario);

  printf("Digite uma data de nascimento: ");
  scanf("%d %d %d", &p->dt_nascimento.dia, &p->dt_nascimento.mes, &p->dt_nascimento.ano);

  printf("\n\t\t\t\t\t------------ Dados digitados --------------\t\t\t\n");
  printf("\n\t\t\t\t\t Nome: %s \t\t\t\t\t\n", p->nome);
  printf("\n\t\t\t\t\t Salario: %f \t\t\t\t\t\n", p->salario);
  printf("\n\t\t\t\t\t Nascimento: %d/%d/%d \t\t\t\t\t\n", p->dt_nascimento.dia, p->dt_nascimento.mes, p->dt_nascimento.ano);

  free(p);

 system("pause");
 return 0;
}
