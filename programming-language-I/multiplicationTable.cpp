#include <stdio.h>
#include <stdlib.h>

int main(){
    float number;

    printf("Insira um número: ");
    scanf("%f", &number);

    for(int x = 1; x < 11; x++)
    {
        printf("%f * %d = %f\n", number, x, number * x);
    }
}