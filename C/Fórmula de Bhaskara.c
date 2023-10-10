#include <stdio.h>
#include <math.h>

float raiz(float n1,float n2,float n3)
{
	float X;
	X = ((n2 * n2) - (4 * n1 * n3));
	if(X < 0)
	{
		return 0;
	}else{
		X = sqrt(X);
	}


	return X;
}

int main()
{
	float a, b, c, x, resultado, X;
	
	printf("Informe o valor de A B e C: ");
	scanf("%f %f %f", &a, &b, &c);
	
	resultado = raiz(a, b, c);
	
	printf("Resultado: %.2f\n", resultado + (-b))/(2*a);
	printf("Resultado: %.2f", resultado - (-b)/(2*a));
}

