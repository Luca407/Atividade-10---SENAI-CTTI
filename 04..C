#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int n1;
	int n2;
	
	printf("Digite um numero:");
	scanf("%d", &n1);
	printf("Digite mais um numero:");
	scanf("%d", &n2);
	
	int diferenca = n1 - n2;
	
	printf ("Diferenca entre os numeros: %d", diferenca);
	
return 0;
}
