// Escreva um algoritmo em C que leia uma série de números inteiros (a entrada termina quando o número 0 é digitado) e exiba a soma desses números.

#include <stdio.h>

int main()
{
    int number = 1, soma = 0;

    while (number != 0)
    {
        printf("Insira um número diferente de 0 para continuar a somar: ");
        scanf("%d", &number);

        soma = soma + number; 
    }

    printf("A soma dos valores inseridos é %d.\n", soma);
}