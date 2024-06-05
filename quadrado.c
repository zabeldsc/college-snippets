#include <stdio.h>

int main(){
    int tam;

    printf("Insira um número ímpar para gerar o tamanho do seu quadrado mágico:\n");
    scanf("%d", &tam);

    int quadrado[tam][tam], n, x, y;

    for (x = 0; x < tam; x++){
        for (y = 0; y < tam; y++){
            quadrado[x][y] = 0;
        }
    }

    x = 0; 
    y = tam/2;

    printf("Insira um número para gerar o seu quadrado mágico:\n");
    scanf("%d", &n);

    int i, j, num = 0;
    
    quadrado[x][y] = n;
    num++;
    n++;

    while (num < tam*tam){
        if (x == 0){
            i = tam - 1;
        } else {
            i = x - 1;
        }

        if (y == tam - 1){
            j = 0;
        } else {
            j = y + 1;
        }

        if (quadrado [i][j] == 0){
            x = i;
            y = j;
            quadrado [x][y] = n;
            n++;
        } else {
            x++;
            quadrado[x][y] = n;
            n++;
        }
        num++;
    }

    for (x = 0; x < tam; x++){
        for (y = 0; y < tam; y++){
            printf("%3d | ", quadrado[x][y]);
        }
        printf("\n");
    }

    return 0;
}