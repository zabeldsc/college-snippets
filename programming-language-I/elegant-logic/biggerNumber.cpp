// Escreva um programa em C que leia dois números inteiros e exiba o maior deles. Caso sejam iguais, exiba uma mensagem informando que os números são iguais.

#include <stdio.h>

int main()
{
    int number1, number2;

    printf("Insira o primeiro número: ");
    scanf("%d", &number1);

    printf("\nInsira o segundo número: ");
    scanf("%d", &number2);

    if(number1 > number2){
        printf("\nO número %d é maior que o número %d.\n", number1, number2);
    } else if(number1 < number2){
        printf("O número %d é maior que o número %d.\n", number2, number1);
    } else {
        printf("Os números enviados são iguais.\n");
    }

    return 0;
}