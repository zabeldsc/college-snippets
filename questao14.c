#include <stdio.h>

int main(){
    int numero = 1, auxiliar = 0, anterior, n = 0;
    
    printf("%d\n", 0);
    
    while (n < 18){
        printf("%d\n", numero);
        anterior = numero;
        numero = numero + auxiliar;
        auxiliar = anterior;
        n++;
    }
}
