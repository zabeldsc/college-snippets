// Crie um programa em C que leia uma temperatura em graus Celsius e a converta para Fahrenheit. O programa deve exibir a mensagem "Frio" se a temperatura em Fahrenheit for menor que 50, e "Quente" se for maior ou igual a 50.

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (1.8 * celsius) + 32;

    if (fahrenheit < 50)
    {
        printf("\nFrio.\n");
    }
    else
    {
        printf("\nQuente.\n");
    }
}