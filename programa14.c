#include<stdio.h>

/*Matriz s�o array multi dimensionais char nome [3] [50] linhas e colunas*/
int main() {

	char nome[3][50];
	for (int i = 0; i < 3; i++) {
		printf("Qual � o seu nome? ");
		fflush(stdout);
		gets(nome[i]);

	}

	for (int i = 0; i < 3; i++) {
		printf("Ola %s\n", nome[i]);
	}

	return 0;
}
