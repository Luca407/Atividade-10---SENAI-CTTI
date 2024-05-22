#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float raio;
	
	printf("Digite o raio da circuferencia de um circulo:");
	scanf("%f", &raio);
	
	float diametro = 2 * raio;
	float area = 3.14*(raio*raio);
	float comprimento = 2*3.14*raio;
	
	printf("\nO diametro do circulo é: %f", diametro);
	printf("\nO comprimento do circulo é: %f", comprimento);
	printf("\nA área do circulo é: %f", area);	
	
	return 0;
}
