#include <stdio.h>
#include <string.h>

int main(){
    char palavra[30], contrario[30];
    int tam, x = 0;
    
    printf("Insira o numero ou palavra\n");
    scanf("%s", &palavra);
    
    tam = strlen(palavra) - 1;
    
    for (tam; tam >= 0; tam--){
        contrario[x] = palavra[tam];
        x++;
    }
    
    if (strcmp(contrario, palavra) == 0){
        printf("A palavra %s eh um palindromo", palavra);
    } else {
        printf("A palavra %s nao eh um palindromo\n", palavra);
    }
}
