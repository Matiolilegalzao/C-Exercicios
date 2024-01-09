#include <stdio.h>

int main()
{
	int A[50], B[50], C[100], i, tamA, tamB, tamC = 0, j, k = 0;
	
	printf("Informe o tamanho do conjunto A: ");
	scanf("%d", &tamA);
	printf("Informe o tamanho do conjunto B: ");
	scanf("%d", &tamB);
	
	printf("Conjunto A: \n");
	for(i = 0;i<tamA;i++){
		scanf("%d", &A[i]);
	}
	printf("Conjunto B: \n");
	for(i = 0;i<tamB;i++){
		scanf("%d", &B[i]);
		for(j = 0; j<tamA;j++){
			if(B[i] == A[j])
			{
				C[k] = B[i];
				k++;
				tamC++;
			}
		}
	}
	
	printf("Conjunto C: ");
	if(tamC > 0) {
		for(i = 0;i<tamC;i++){
			printf("%d ", C[i]);
		}
	}else{
		printf("O conjunto C esta vazio.");
	}

	
	
	return 0;
}
