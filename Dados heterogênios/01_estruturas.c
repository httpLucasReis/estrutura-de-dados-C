/* Exemplo de uma estrutura */
#include <stdlib.h>
#include <stdio.h>

// Criando uma estrutura
struct Funcionario {
  char nome[40];
  struct {
    int dia;
    int mes;
    int ano;
  } dataNasc;
  char departamento[10];
  float salario;
};

int main(){
 // Declarando uma estrutura
 struct Funcionario f1;


 system("pause");
 return 0;
}
