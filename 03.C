#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float altura;
	float base;
	
	printf("Digite a altura: \t");
	scanf("%f", &altura);
	
	printf("Digite a base: \t");
	scanf("%f", &base);
	
	float area = base * altura;
	
	printf("A area do retangulo: %f", area);
	
return 0;
	
}
