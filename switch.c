#include<stdio.h>

int main() {

	int valor;
	printf("Digite um  valor de 1 a 7:\n");
	scanf("%d", &valor);

	switch (valor) {

	case 1:
	printf("Domingo");
	break;

	case 2:
	printf("Segunda");
	break;

	case 3:
	printf("terça");
	break;

	case 4:
	printf("Quarta");
	break;

default:
	printf("Valor inválido");

	}

	return 0;

}
