#include <stdio.h>

int main (){
    int fatorial, num;
    
    printf ("Insira um numero:\n");
    scanf("%d", &num);
    fatorial = 1;
    
    if (num != 0){
        for (num; num > 1; num--){
            fatorial = fatorial * num; 
        }
    }
    
    printf ("O fatorial é: %d", fatorial);
    
    return 0;
}
