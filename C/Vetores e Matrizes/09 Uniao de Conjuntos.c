/*Escreva um algoritmo para efetuar a união de dois conjuntos. O conjunto C conterá todos os elementos de A e B.

Exemplos:

i. A = {7, 2, 5, 8, 4} e B = {4, 2, 5, 10}, C = A ? B = {7, 2, 5, 8, 4, 10}

ii. A = {3, 9, 11} e B = {2, 6, 1}, C = A ? B = {3, 9, 11, 2, 6, 1}*/
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(	LC_ALL, "");
	
	
	int A[50], B[50], C[100], i, tamA, tamB, aux, j;
	void lerVetor (int vetor[], int tamanho);
	void imprimirVetor (int vetor[], int tamanho);	
	printf("Informe o tamanho de A e B: ");
	scanf("%d %d", &tamA, &tamB);
	
	lerVetor(A, tamA);
	lerVetor(B, tamB);	
	
	int tamC = tamA + tamB;
	
	for(i = 0; i < tamA;i++){
		C[i] = A[i];
	}
	for(i = 0; i < tamB;i++){
		C[tamA + i] = B[i];
	}
	
	
	for(i = 0;i<tamC;i++){
		for(j = 0; j < tamC;j++){
			aux = 
		}
	}
	
	printf("\nVetor C: ");
	imprimirVetor(C, tamC);	
	
	/*for(i = 0;i<tamC;i++){
		if(C[i] > maior){
			maior = C[i];
		}
	}
	menor = maior;*/
	
	
	
	for(i = 0 + contador;i< tamC;i++){
		for(j = 0;j < tamC;j++){
			if(menor > C[i]){
				menor = C[i];
			}
			if(j = tamC - 1){
				contador++;
			}		
		}
	}
	
	printf("Menor: %d", menor);
	
	return 0;
}







void lerVetor(int vetor[], int tamanho){
	int i;
	
	for(i = 0; i < tamanho;i++){
		scanf("%d", &vetor[i]);
	}

}

void imprimirVetor (int vetor[], int tamanho){
	int i;
	for(i = 0; i < tamanho;i++){
		printf("%d ", vetor[i]);
	}

}
