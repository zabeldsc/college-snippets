// Escreva um programa em C que leia um número inteiro e exiba todos os números ímpares de 1 até esse número.

#include <stdio.h>

int main()
{
    int number, i = 0;

    printf("Insira um número: ");
    scanf("%d", &number);

    while (i <= number)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }

        i++;
    }

    return 0;
}