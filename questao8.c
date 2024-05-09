#include <stdio.h>

int main(){
    int cont = 1, booleana = 0;
    float soma = 0;
    
    while (cont < 100){
        soma = soma + (1.0/cont);
        cont = cont+2;
    }
    
    printf ("a) A soma de todas as series eh: %f\n", soma);
    soma = 0;
    cont = 1;
    
    while (cont < 40){
        if (booleana == 0){
            soma = soma - (1.0/cont);
            booleana = 1;
        } else {
            soma = soma + (1.0/cont);
            booleana = 0;
        }
        cont = cont+2;
    }
    
     printf ("b) A 'soma' de todos os termos eh: %f", soma);
    
    return 0;
}
