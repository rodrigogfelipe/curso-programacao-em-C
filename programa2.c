#include <stdio.h>

int main(){

	int idade;

	printf("Qual � a sua idade\n");
	scanf("%d", &idade);
	if(idade < 18){
		printf("Voc� e menor de idade\n");

	} else if(idade >= 18 && idade < 30) {
		printf("Voce e adulto\n");

	} else {
		printf("Voc� e idoso\n");
	}

		printf("A sua idade � %d", idade);

	return 0;

}
