#include <stdio.h>

int main()
{
	int matriz[3][3], NovaMatriz[3][5] , i, j;
	void espaco();
	for(i = 0;i<=2;i++)
	{
		for(j = 0;j<=2;j++)
		{
			scanf("%d", &matriz[i][j]);
		}
	}
	for(i = 0;i<=2;i++)
	{
		printf("\n");
		for(j = 0;j<=2;j++)
		{
			printf("%d ", matriz[i][j]);
		}
	}
	/*Nova Matriz*/
	espaco();
	for(i = 0;i<=2;i++)
	{
		for(j = 0;j<=2;j++)
		{
			NovaMatriz[i][j] = matriz[i][j];
		}
	}
	for(i = 0;i<=2;i++)
	{
		printf("\n");
		for(j = 0;j<=2;j++)
		{
			printf("%d ", NovaMatriz[i][j]);
		}
	}
}

void espaco(void)
{
	printf("\n\n");
}
