#include <stdio.h>

int main()
{
	float v1, v2, x;
	float calcularArea(float n1,float n2);
	
	printf("Informe dois valores:");
	scanf("%f %f", &v1, &v2);
	
	x = calcularArea(v1, v2);
	printf("Area: %.2f", x);
	
	
}
float calcularArea(float n1,float n2)
{
	float resultado;
	resultado = n1 * n2;
	
	return resultado;
}
