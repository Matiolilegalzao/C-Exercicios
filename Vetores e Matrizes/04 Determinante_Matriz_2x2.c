#include <stdio.h>

int main()
{
	int matriz[2][2], i, j, determinante;
	int a = 1, b = 1;
	int CalcularDeterminante(int n1,int n2);
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d", &matriz[i][j]);
		}
	}
	
	j = 0;
	for(i=0;i<2;i++)
	{
		a = a * matriz[i][j];
		j++;
	}
	printf("A: %d\n", a);
	i = 0;

	for(j = 1; j>=0;j--)
	{
		b = b * matriz[i][j];
		i++;
	}
	printf("B: %d", b);
	
	determinante = CalcularDeterminante(a, b);
	printf("\nDeterminante: %d", determinante);
}

int CalcularDeterminante(int n1,int n2)
{
	int resultado;
	resultado = n1 - n2;
	
	return resultado; 
}
