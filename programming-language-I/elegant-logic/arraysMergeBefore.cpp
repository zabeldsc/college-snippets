#include <stdio.h>

void mesclaArrays(int arr1[], int tamanho1, int arr2[], int tamanho2, int resultado[])
{
  int i = 0, tamanhoTotal = tamanho1 + tamanho2;
  tamanho2 = 0;

  while (i < tamanho1)
  {
    resultado[i] = arr1[i];
    i++;
  }

  while (i < (tamanhoTotal))
  {
    resultado[i] = arr2[tamanho2];
    i++;
    tamanho2++;
  }
}

int main ()
{
  // O problema desse código se encontra aqui, os tamanhos dos vetores são estáticos, o que dificulta que haja uma manipulação mais flexível de suas informações!
  int arr1[10] = {1, 2 , 3, 4, 5, 6, 7, 8, 9, 10}, arr2[6] = {11, 12, 13, 14, 15, 16}, resultado[16];
  mesclaArrays(arr1, 10, arr2, 6, resultado);
  
  for (int i = 0; i < (sizeof(resultado) / sizeof(int)); i++)
  {
    printf("%d ", resultado[i]);
  }

  return 0;
}
