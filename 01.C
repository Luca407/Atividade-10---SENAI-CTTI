#include <stdio.h>
#include <stdlib.h>

int main () {

float nota1;
float nota2;
float nota3;
float nota4;


	printf("Digite a primeira nota:\t");
	scanf("%f", &nota1);
	printf("Digite a segunda nota:\t");
	scanf("%f", &nota2);
	printf("Digite a terceira nota:\t");
	scanf("%f", &nota3);
	printf("Digite a quarta nota:\t");
	scanf("%f", &nota4);
	
float total = nota1+nota2+nota3+nota4;

printf("Nota Total: %f", total);

return 0;
}
