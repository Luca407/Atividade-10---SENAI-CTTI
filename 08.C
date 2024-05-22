#include <stdio.h> 
#include <stdlib.h>

int main() {

	float F;

	printf("Digite a temperatura em Fahrenheit: \n");
	scanf("%f", &F);


	float C;

	C = (F - 32)/1.8;

	printf("\nA temperatura em graus Celsius e %f", C);


   return 0;
   }
   
