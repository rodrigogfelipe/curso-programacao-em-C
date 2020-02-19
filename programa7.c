/*Tipos númericos:
 * Characteres;
 * String;
 *
 * */

#include <stdio.h>

int main() {

	char opcao;
	printf("Informe a opção: \n");
	printf("a - Saldo da conta. \n");
	printf("b - Extrato da conta. \n");
	printf("c - Limite da conta. \n");
	fflush(stdout);
	scanf("c%", &opcao);

	if (opcao == 'a') {
		printf("Seu saldo é.....");

	} else if (opcao == 'b') {
		printf("Extrato de conta.....");

	} else if (opcao == 'c') {
		printf("Seu limite é......");
	}

	//Gerar um alfabeto completo com um loop
	for(int i= 97; i <= 122; i++) {
		printf("%c\n", i);
	}

	return 0;
}
