#include <stdio.h>
#include <string.h>

struct Ficha {
    char nome[50];
    float altura;
    char genero[50];
};

int main(){
    struct Ficha fichas[50];
    int g, qtdmul;
    float maiorturma, menorturma = 4, mediamul, mediaturma;
    
    for (int n = 0; n < 50; n++){
        
        printf("Insira o nome e a altura:\n");
        scanf("%s %f", &fichas[n].nome, &fichas[n].altura);
        printf("Digite:\n1 - Masculino\n2 - Feminino\n3 - NB\n");
        scanf("%d", &g);
        
        switch (g){
        case 1:
           strcpy(fichas[n].genero, "Masculino");
            break;
        case 2:
           strcpy(fichas[n].genero, "Feminino");
            break;
        case 3:
           strcpy(fichas[n].genero, "NB");
            break;
        }
        
        
        if (fichas[n].altura > maiorturma){
            maiorturma = fichas[n].altura;
        }
        
        if (fichas[n].altura < menorturma){
            menorturma = fichas[n].altura;
        }
        
        if (strcmp (fichas[n].genero, "Feminino") == 0){
            mediamul = mediamul + fichas[n].altura;
            qtdmul++;
            if (n == 49){
                mediamul = mediamul/qtdmul;
            }
        }
        
        mediaturma = mediaturma + fichas[n].altura;
        
        if (n == 49){
            mediaturma = mediaturma/50;
        }
    }
    
    printf("A maior altura da turma eh: %f\n", maiorturma);
    printf("A menor altura da turma eh: %f\n", menorturma);
    printf("A media entre as mulheres eh: %f\n", mediamul);
    printf("A media da da altura da turma eh: %f", mediaturma);
    
    return 0;
}
