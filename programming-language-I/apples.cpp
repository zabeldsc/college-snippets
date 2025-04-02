// As maçãs custam R$ 0,30 cada se forem compradas menos do que uma dúzia, e R$ 0,25 se forem compradas pelo menos doze. Escreva um programa que leia o número de maçãs compradas, calcule e escreva o valor total da compra. [Marcelo Cendron, IFC]

#include <stdio.h>

int main(){
    int boughtApples;

    printf("Insira o valor de maçãs compradas: ");
    scanf("%d", &boughtApples);

    if (boughtApples < 12){
        printf("O valor total da compra é: %0.2f\n", boughtApples * 0.30);
    } else {
        printf("O valor total da compra é: %0.2f\n", boughtApples * 0.25);
    }

    return 0;
}