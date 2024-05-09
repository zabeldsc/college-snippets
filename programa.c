#include <stdio.h>

int main(){
    int n, numero, segcresc = 0, anterior = -1, segcrescant = 0;
    
    printf("Quantos numeros voce deseja inserir?\n");
    scanf("%d", &n);
    
    while(n > 0){
        scanf("%d", &numero);
        if (numero > anterior){
            segcresc++;
            printf("ENTROU IF!\n");
            anterior = numero;
        } else {
            if (segcresc > segcrescant){
                printf("ENTROU ELSE!\n");
                segcrescant = segcresc;
                segcresc = 0;
                anterior = -1;
            }
        }
        n--;
    }
    
    if (segcresc < segcrescant){
    	segcresc = segcrescant;
    }
    
    printf("O comprimento do segmento eh: %d\n", segcresc);
}
