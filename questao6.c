#include <stdio.h>
#include <math.h>

int main (){
    int n, cont = 99, num = 0, decimal;
    char bin[100];
    
    printf("Insira um numero decimal.\n");
    scanf("%d", &decimal);
    
    while (decimal > 0){
        if (decimal % 2 == 0){
            bin[cont] = '0';
        } else {
            bin[cont] = '1';
        }
        decimal = decimal/2;
        cont --;
    }
    
    for (n = 0; n < 100; n++){
        if (bin[n] == '0' || bin [n] == '1'){
            printf("%c", bin[n]);
        }
    }
}
