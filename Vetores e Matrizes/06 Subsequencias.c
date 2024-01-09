#include <stdio.h>

int main()
{
	int n, sequencia[1000], i, nAnterior, sub = 0;
	
	printf("Qual o tamanho da sequencia? : ");
	scanf("%d", &n);
	
	for (i=0;i<n;i++)
	{
		scanf("%d", &sequencia[i]);
		if(nAnterior != sequencia[i]){
			sub++;
		}
		nAnterior = sequencia[i];
	}
	printf("Subsequencias: %d", sub);
}
