#include <stdio.h>

int main(){
    float massa, massainicial;
    int segundos = 0, minutos = 0, horas = 0;
    
    printf("Insira a massa do material\n");
    scanf("%f", &massa);
    
    massainicial = massa;
    
    while (massa >= 0.5){
        massa = massa/2;
        segundos = segundos + 50;
    }
    
    while (segundos > 59){
        minutos++;
        segundos = segundos - 60;
    }
    
    while (minutos > 59){
        horas++;
        minutos = minutos - 60;
    }
    
    printf("A massa inicial eh %f, a massa atual eh %f e o tempo gasto foi de %d horas, %d minutos e %d segundos", massainicial, massa, horas, minutos, segundos);
    
    return 0;
}
