#include <stdio.h>

int main(){
	float a, b, c, media, pesoa, pesob, pesoc;
	
	printf("Insira sua primeira nota: ");
	scanf("%f", &a);
	printf("\nInsira sua segunda nota: ");
	scanf("%f", &b);
	printf("\nInsira sua terceira nota: ");
	scanf("%f", &c);

	// E se a nota for 6?
	if (a > 6){
		pesoa = 5;
	} else if (a < 6){
		pesoa = 2.5;
	}
	
	if (b > 6){
		pesob = 5;
	} else if (b < 6){
		pesob = 2.5;
	}
	
	if (c > 6){
		pesoc = 5;
	} else if (c < 6){
		pesoc = 2.5;
	}
	
	media = ((a * pesoa) + (b * pesob) + (c * pesoc)) / (pesoa + pesob + pesoc);
	printf ("\nA sua media eh: %f", media);
	
	return 0;
}
