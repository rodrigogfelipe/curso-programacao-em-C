/*Estrutura de repeticao*/
#include<stdio.h>

int main() {

	/*a variavel soma e do tipo (inteiro)*/
	int numero, soma = 0;
	/*Enquanto o numero for diferente de ZERO ser� somado*/
	while(numero != 0) {
		printf("Informe um n�mero:\n");
		scanf("%d",&numero);

		soma= soma + numero;
	}
	printf("%d", soma);

	return 0;
}

