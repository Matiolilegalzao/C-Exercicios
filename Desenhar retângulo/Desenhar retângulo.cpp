#include <stdio.h>

int main() {
	int i, linhas, colunas, linhaCentral, linhaAtual = 1, somaLinha = 0;
	
	printf("Informe o número de linhas e colunas: ");
	scanf("%d %d", &linhas, &colunas);
	
	if(linhas % 2 > 0){
		// printf("\nImpar");
		linhaCentral = (linhas / 2) + 1;
		printf("\nLinha Central: %d\n", linhaCentral);
	}else{
		// printf("Par");
		linhaCentral = linhas / 2;
	}
	
	for (i = 1; i<= linhas * colunas ;i++) {
		printf("%d ", i);
		if(i % colunas == 0){
			printf("\n");
			linhaAtual++;
		}
		if(linhaAtual == linhaCentral){
			somaLinha += i + 1;
		}
	}
	printf("Soma da linha do meio: %d", somaLinha);
}
