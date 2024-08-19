#include <stdio.h>

int main (){
    int soma, num;
    
    printf ("Insira um numero:\n");
    scanf("%d", &num);
    
    for (num = num - 1; num > 0; num--){
        printf ("%d + %d = ", soma, num);
        soma = soma + num;
        printf ("%d\n", soma);
    }
    
    printf ("A soma de todos os numeros anteriores eh: %d", soma);
    
    return 0;
}
