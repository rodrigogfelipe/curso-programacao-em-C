#include<stdio.h>

int main() {
	/*Declara��o de um array em String*/
	char nome[50];
	printf("Qual e seu nome?");
	fflush(stdout);
	gets(nome);
	printf("Seu nome � %s",nome);


}
