#include <stdio.h>

int main(){
    int n, numero, segcresc = 1, anterior = -1, segcrescant = 0;
    
    printf("Quantos numeros voce deseja inserir?\n");
    scanf("%d", &n);
    
    if (n == 1){
        printf("Seguimento de crescimento igual a %d", segcresc);
    } else if (n > 0){
        scanf("%d", &anterior);
        while (n > 1){
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
    }

    if (segcresc < segcrescant){
    	segcresc = segcrescant;
    }
    
    printf("O comprimento do segmento eh: %d\n", segcresc);
}
