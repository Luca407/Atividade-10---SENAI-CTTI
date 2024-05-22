#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float kilo;
	
	printf("Digite o peso da pessoa em kilo \n");
	scanf("%f", &kilo);
	
	float grama;
	
	grama = kilo * 1000;
	
	printf("O peso da pessoa em gramas e: %f", grama);
	
return 0;

}
