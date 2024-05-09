#include <stdio.h>

int main(){
    // anterior -1 considerando que so serao inseridos numeros de 0 para cima
    int n, numero, segcresc = 0, anterior = -1, segcrescant = 0;
    
    printf("Quantos numeros voce deseja inserir?\n");
    scanf("%d", &n);
    
    // while que roda a quantidade de vezes que o usuario deseja inserir numeros
    while(n > 0){
        scanf("%d", &numero);
        // checar se numero eh maior que o numero anterior
        if (numero > anterior){
            // seguimento crescente aumenta
            segcresc++;
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
