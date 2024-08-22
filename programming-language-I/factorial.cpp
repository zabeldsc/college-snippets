// Crie um algoritmo em C que leia um número inteiro positivo e calcule o fatorial desse número.

#include <stdio.h>

int main()
{
    int number = 0, factorial = 1;

    while (number < 1)
    {
        printf("Insira um número inteiro postivo: ");
        scanf("%d", &number);
    }

    for (int i = number; i > 0; i--)
    {
        factorial = i * factorial;
    }

    printf("O fatorial de %d é %d.\n", number, factorial);
}