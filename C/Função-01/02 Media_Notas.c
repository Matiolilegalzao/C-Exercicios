#include <stdio.h>

int main()
{
	float media, nota[4], resultado;
	int i;
	
	for(i = 0; i<4;i++){
		printf("Informe a nota do %d bimestre: ", i + 1);
		scanf("%f", &nota[i]);
	}
	resultado = media(nota[0], nota[1], nota[2] ,nota[3]);
	printf("A média é %.2f", resultado);
}

float media(float v1, float v2, float v3, float v4)
{
    float resultado;
    
    resultado = (v1 + v2 + v3 + v4) / 4.0; // Corrigido para usar 4.0 em vez de 4
    
    return resultado;
}

