#include <stdio.h>

int main(){
    int a = 90000000, b = 200000000, anos = 0;
    
    while (a < b){
        a = a + (a / 100 * 3);
        b = b + (b / 100 * 1.5);
        anos++;
    }
    
    printf ("A quantidade de anos necessaria eh: %d", anos);
    return 0;
}
