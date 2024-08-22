// Faça um programa em C que leia uma sequência de números inteiros (a sequência termina quando o usuário digitar um número negativo) e exiba o maior número digitado.

#include <stdio.h>

int main(){
    int number, bigger = 0;

    while (number >= 0)
    {
        printf("Insira um número: ");
        scanf("%d", &number);

        if (bigger < number){
            bigger = number;
        }
    }
    
    printf("\nO maior número digitado por você foi %d.\n", bigger);

    return 0;
}