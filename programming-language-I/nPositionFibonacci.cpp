// Faça um programa que mostre o apenas o n-ésimo termo da série de Fibonacci. Esse programa deve receber como entrada um número inteiro n maior que 2 (considere que 0 e 1 são conhecidos, sendo eles os 2 primeiros números da série).

#include <stdio.h>

int main()
{
    int position = 0, fibonacci[300] = {1, 1}, counter = 2;

    while (position < 2)
    {
        printf("Posição do termo de Fibonacci maior que 2: ");
        scanf("%d", &position);
    }

    while (counter < position)
    {
        fibonacci[counter] = fibonacci[counter-1] + fibonacci[counter-2];
        counter++;
    }

    printf("\nO termo do indíce escolhido é: %d\n", fibonacci[counter-1]);
}
