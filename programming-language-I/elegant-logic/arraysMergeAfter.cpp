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
  # Consigo manipular a quantidade de dados do array sem a necessidade de mudança manual de seus tamanhos.
  int arr1[] = {1, 2 , 3, 4, 5, 6, 7}, arr2[] = {11, 12, 13, 14, 15, 16}, tamanho1, tamanho2;
  tamanho1 = sizeof(arr1) / sizeof(int);
  tamanho2 = sizeof(arr2) / sizeof(int);

  int resultado[tamanho1 + tamanho2];

  mesclaArrays(arr1, tamanho1, arr2, tamanho2, resultado);
  
  for (int i = 0; i < (sizeof(resultado) / sizeof(int)); i++)
  {
    printf("%d ", resultado[i]);
  }

  return 0;
}
