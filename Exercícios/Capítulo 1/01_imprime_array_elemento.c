/*
  Fazer um programa em C que implemente o algoritmo 1.1 para acessar
  elementos de vetores via ponteiros. Crie uma função:
*/

#include <stdlib.h>
#include <stdio.h>



int main(){
  void imprimeArray(int *array, int length);
  int array[5] = {1,2,3,4,5};

  imprimeArray(array,5);

 system("pause");
 return 0;
}

void imprimeArray(int *array, int length){
  int index;
  for(index = 0; index < length; index++){
    printf("[%d] ", array[index]);
  }
}
