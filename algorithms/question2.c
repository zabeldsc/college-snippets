#include <stdio.h>

int main()
{
    int i;
    float a, b, c, maior, meio, menor;
    
    printf("Digite um numero:\n1 - Ordem crescente. \n2 - Ordem decrescente.\n3 - O maior numero entre os demais.\n\n");
    scanf("%d", &i);
    printf("\nDigite os 3 numeros desejados.\n");
    scanf ("%f %f %f", &a, &b, &c);
    
    if (a > b && a > c){
        maior = a;
        if (b > c){
            meio = b;
            menor = c;
        } else {
            meio = c;
            menor = b;
        }
    } else if (b > c){
        maior = b;
        if (c > a){
            meio = c;
            menor = a;
        } else {
            meio = a;
            menor = c;
        }
    } else {
        maior = c;
        if (a > b){
            meio = a;
            menor = b;
        } else {
            meio = b;
            menor = a;
        }
    }
    
    if (i == 1){
        printf("\nEm ordem crescrente: %f, %f, %f", menor, meio, maior);
    } else if (i == 2){
        printf("\nEm ordem decrescrente: %f, %f, %f", maior, meio, menor);
    } else if (i == 3){
        printf("\nO maior entre os outros dois: %f, %f, %f", menor, maior, meio);
    }

    return 0;
}
