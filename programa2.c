#include <stdio.h>

int main(){

	int idade;

	printf("Qual é a sua idade\n");
	scanf("%d", &idade);
	if(idade < 18){
		printf("Você e menor de idade\n");

	} else if(idade >= 18 && idade < 30) {
		printf("Voce e adulto\n");

	} else {
		printf("Você e idoso\n");
	}

		printf("A sua idade é %d", idade);

	return 0;

}
