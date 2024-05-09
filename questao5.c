#include <stdio.h>
#include <math.h>

int main (){
    int n, cont = 0, num = 0;
    char bin[100];
    
    printf("Insira um numero binario.\n");
    scanf("%s", &bin);
    
    for (n = 99; n >= 0; n--){
        if (bin [n] == '1'){
            num = num + pow (2, cont);
            cont++;
        } else if (bin [n] == '0'){
            cont++;
        }
    }
    
    printf("\nEste eh o numero em decimal: %d", num);
}
