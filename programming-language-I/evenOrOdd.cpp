// Faça um algoritmo em C que leia um número inteiro e determine se ele é par ou ímpar.

#include <stdio.h>

int main()
{
    int number;

    printf("Insira um número: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("É par!\n");
    }
    else
    {
        printf("É ímpar!\n");
    }
}