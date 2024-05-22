#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float kilo;
	
	printf("Quantos kilos foi a refeicao \n");
	scanf("%f", &kilo);
	
	float roubo;
	
	roubo = kilo * 45;
	
	printf("O valor do prato e: %f", roubo);
	
return 0;
	
}
