/*Estrutura de repeticao*/
#include<stdio.h>

int main() {

	/*a variavel soma e do tipo (inteiro)*/
	int numero, soma = 0;

	for (int i = 0; i < 5; i++) {
		printf("Informe um número:\n");
		scanf("%d",&numero);

		soma= soma + numero;
	}
	printf("%d", soma);

	return 0;
}

