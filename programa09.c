#include<stdio.h>

int main() {
	/*Declaração de um array em String*/
	char nome[50];
	printf("Qual e seu nome?");
	fflush(stdout);
	gets(nome);
	printf("Seu nome é %s",nome);


}
