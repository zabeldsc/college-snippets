#include <stdio.h>
#include <math.h>

int main() {
    int n, i = 0, cont, divisores[50], soma = 0;
    
    printf("Insira um numero:\n");
    scanf ("%d", &n);
    
    for (cont = n - 1; cont > 0; cont--){
        if (n%cont == 0){
            divisores[i] = cont;
            i++;
            printf("cont: %d\n", cont);
        }
    }
    
    for (i = i - 1; i > -1; i--){
        soma = soma + divisores[i];
    }
    
    if (soma == n){
        printf("%d eh um numero perfeito.", n);
    } else {
        printf("%d nao eh um numero perfeito.", n);
    }
   
    return 0;
}
