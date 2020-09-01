/*
  Exemplo de um algoritmo que utiliza um vetor para calcular
  a medio de numeros.
*/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define SIZE 5

// Funcao que soma todos os elementos do array
int sumValues(int *array, int size){
  int sum = 0;

  // I = index do array
  for(int i = 0; i < size; i++){
    sum+= array[i];
  }
  return sum;
}

// Fun��o que calcula a m�dia;
float caclAvarage(float total, int length) {
  return total/length;
}

int main(void){
  setlocale(LC_ALL, "Portuguese");

  int value;
  int array[SIZE]; // array do tipo inteiro que um tamanho maximo de 5 elementos
  int total;       // Variavel que recebe a soma de todos os elementos do array
  float avarage;   // Variavel que recebe a media dos elementos do array

  // Recebendo dados
  for(int i = 0; i < SIZE; i++){
    printf("Digite um valor: \n");
    scanf("%d",&value);
    array[i] = value;
  }

  // Realizando operacoes
  total = sumValues(array, SIZE);
  avarage = caclAvarage(total, SIZE);

  // Exibindo o resultado
  printf("A media eh : %.2f\n", avarage);

 system("pause");
 return 0;
}

/*
  Created by Manoel Lucas Lopes Reis
*/
