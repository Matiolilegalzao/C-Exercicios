/*Escreva um algoritmo para efetuar a união de dois conjuntos. O conjunto C conterá todos os elementos de A e B.

Exemplos:

i. A = {7, 2, 5, 8, 4} e B = {4, 2, 5, 10}, C = A ? B = {7, 2, 5, 8, 4, 10}

ii. A = {3, 9, 11} e B = {2, 6, 1}, C = A ? B = {3, 9, 11, 2, 6, 1}*/
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(	LC_ALL, "");
	
	
	int A[50], B[50], C[100], i, tamA, tamB, aux, j, anterior;
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
		for(j = i+1; j < tamC;j++){
			if( C[i] > C[j]){
				aux = C[i];
				C[i] = C[j];
				C[j] = aux;
			}
		}
	}
	
	
	
	printf("\nVetor C: ");

	
	for(i = 0;i<tamC;i++){
		if(anterior != C[i]){
			printf("%d ", C[i]);	
		}
		anterior = C[i];
	}
	
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
