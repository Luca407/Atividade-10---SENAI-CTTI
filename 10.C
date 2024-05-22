#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int primeiroValor,segundoValor;
	
		
	printf("digite um valor ");
	scanf("%i", &primeiroValor);
	
	printf("digite outro valor ");
	scanf("%i", &segundoValor);

	int primeiroNovo = segundoValor;
	
	int segundoNovo =primeiroValor;

	 
	
	printf("\no primeiro valor antigo e %i", primeiroValor);
	
	printf("\no segundo valor antigo e %i", segundoValor);
	
	printf("\no primeiro valor novo e %i", primeiroNovo);
	
	printf("\no segundo valor novo e %i", segundoNovo);

	return 0;
	
}
