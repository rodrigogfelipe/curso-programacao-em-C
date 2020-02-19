#include<stdio.h>

/*Vetores array uni dimensional*/
int main(){

	char nome[50];
	printf("Qual é o seu nome? ");
	fflush(stdout);
	gets(nome);
	printf("Ola %s\n", nome);

	char letras[26];
	int contador = 0;
	for(int i= 97; i <= 122; i++){
		letras[contador] = i;
		contador= contador + 1;
	}
	/*imprimindo contador*/
	for(int i =0; i < 26; i++){
		printf("%d == %c\n", letras[i], letras[i]);
	}

	return 0;
}
