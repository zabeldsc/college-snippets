// Escreva duas macros, MIN(x, y) e MAX(x, y), que retornem o mínimo e o máximo de dois valores x e y, respectivamente. Use essas macros em um programa para encontrar o mínimo e o máximo de diferentes pares de números.

// DICA: Utilize o operador ternário

#define MIN(x, y) ((x < y) ? x : y)
#define MAX(x, y) ((x > y) ? x : y)

#include <stdio.h>

int main() {
    int a, b;

    printf("Insira o primeiro número: ");
    scanf("%d", &a);
    printf("\nInsira o segundo número: ");
    scanf("%d", &b);

    printf("\nO maior número é %d e o menor número é %d!\n", MAX(a, b), MIN(a, b));
}