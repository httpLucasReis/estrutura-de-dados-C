/*
  Exemplo de algoritmo que utiliza um vetor para calcular
  a m�dio de n�meros.
*/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define SIZE 5

int sumValues(int *array, int size){
  int sum = 0;

  // I = index do array
  for(int i = 0; i < size; i++){
    sum+= array[i];
  }
  return sum;
}

float caclAvarage(float total, int length) {
  printf("%f\n", total/length);
  return total/length;

}

int main(void){
  setlocale(LC_ALL, "Portuguese");

  int value;
  int array[SIZE];
  int total;
  float avarage;

  for(int i = 0; i < SIZE; i++){
    printf("Digite um valor: \n");
    scanf("%d",&value);
    array[i] = value;
  }

  total = sumValues(array, SIZE);
  avarage = caclAvarage(total, SIZE);

  printf("A m�dia � : %.2f\n", avarage);

 system("pause");
 return 0;
}
