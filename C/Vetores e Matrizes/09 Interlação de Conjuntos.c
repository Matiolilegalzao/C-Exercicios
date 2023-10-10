#include <stdio.h>

int main()
{
	int A[20], B[20], C[40], i, j, tamA, tamB, tamC, maior, aux, encontrarMaior(int vetor[], int tamanho);
	
	void lerVetor(int vetor[], int tamanho);
	void imprimirVetor(int vetor[], int tamanho);
	void ordemCrescente(int vetor[], int tamanho);
	
	printf("Informe o tamanho de N e M: ");
	scanf("%d %d", &tamA, &tamB);
	tamC = tamA + tamB;
	
	printf("Insira os valores do conjunto A: \n");
	lerVetor(A, tamA);	
	
	maior = encontrarMaior(A, tamA);
	ordemCrescente(A, tamA);
	
	printf("Insira os valores do conjunto B: \n");
	lerVetor(B, tamB);
	
	ordemCrescente(B, tamB);

	imprimirVetor(A, tamA);
	imprimirVetor(B, tamB);
	
	imprimirVetor(C, tamC);
	
	return 0;
}


	
void lerVetor(int vetor[], int tamanho)
{
	int i;
	for(i = 0;i<tamanho;i++){
		scanf("%d", &vetor[i]);
	}
}

void ordemCrescente(int vetor[], int tamanho)
{
	int i, j, aux;
	for(i = 0;i<tamanho;i++){
		for(j = i + 1; j < tamanho;j++){
			if(vetor[j] < vetor[i]){
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;	
			}	
		}
	}
}

void imprimirVetor(int vetor[], int tamanho)
{
	int i;
	for(i = 0; i<tamanho;i++){
		printf("%d ", vetor[i]);
	}
	printf("\n");
}

int encontrarMaior(int vetor[], int tamanho)
{
	int i;
	int maior;
	maior = 0;
	for(i = 0; i < tamanho;i++){
		if(vetor[i] > maior){
			maior = vetor[i];
		}
	}
	return maior;
}
