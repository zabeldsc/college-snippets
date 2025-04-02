#include <stdio.h>
#include "../include/calculator.h"

int main()
{
    float number1, number2;
    int operacao;

    printf("Insira o primeiro número: ");
    scanf("%f", &number1);
    printf("\nInsira o segundo número: ");
    scanf("%f", &number2);
    printf("\nQual o número da operação que deseja realizar?\n1 - Adição.\n2 - Subtração.\n");
    scanf("%d", &operacao);

    switch (operacao)
    {
    case 1:
        printf("\nO resultado da soma é %f\n", addition(number1, number2));
        break;
    
    case 2:
        printf("\nO resultado da soma é %f\n", subtraction(number1, number2));
        break;

    default:
        printf("\nOperação inválida");
        break;
    }

    return 0;
}