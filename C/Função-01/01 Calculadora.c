#include <stdio.h>

int main()
{
	int operacao, resultadoInt, v1, v2, encerrar;
	float resultadoFloat;
	do {
		printf("\nQual operacao deseja realizar? \n1 - Soma \n2 - Multiplicacao \n3 - Subtracao \n4 - Divisao\n-1 - Encerrar\n");
		scanf("%d", &operacao);
		if(operacao != -1)
		{
			printf("Informe dois numeros: ");
			scanf("%d %d", &v1, &v2);
		}
		
		switch(operacao){
			case 1:
				resultadoInt = soma(v1, v2);
				printf("\nResultado: %d", resultadoInt);
			break;
			case 2:
				resultadoInt = multiplicacao(v1, v2);
				printf("\nResultado: %d", resultadoInt);
				
			break;
			case 3:
				resultadoInt = subtracao(v1, v2);
				printf("\nResultado: %d", resultadoInt);
			break;
			case 4:
				resultadoFloat = divisao(v1, v2);
				printf("\nResultado: %.2f\n", resultadoFloat);
			break;
			default:
				printf("Encerrar");
				encerrar = -1;
				
		}
	}
	while(encerrar != -1);
	
}



int soma(n1, n2)
{
	int resultado;
	resultado = n1 + n2;
	return (resultado);
}
int divisao(n1, n2)
{
	int resultado;
	resultado = n1 / n2;
	return (resultado);
}
int subtracao(n1, n2)
{
	int resultado;
	resultado = n1 - n2;
	return (resultado);
}
int multiplicacao(n1, n2)
{
	int resultado;
	resultado = n1 * n2;
	return (resultado);
}
