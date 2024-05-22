#include <stdio.h>
#include <stdlib.h>

int main () {
	
	float n1;
	float n2;
	
	printf("Digite um numero para denominador\t");
	scanf("%f", &n1);
	printf("Digite um numero para numerador\t");
	scanf("%f", &n2);
	
	float divisao;
	
	divisao = n1/n2;
	
	printf("A divisao entre os numeros %f", divisao);
	
return 0;
}
