#include <stdio.h>
#include <locale.h>

char palindromo(int numero, num;)
{
	int inverso, numero, tam = 0, i, aux;
	aux = num;
	do {
		aux = aux / 10;
		tam++;
	}while (aux > 0);
	
	for(i = 0; i < tam;i++){
		if(numero > 9){
			
		}
	}
	return 
}

int main()
{
	int num, tam = 0, pali, aux;
	printf("Informe um numero para verificar se ele eh palindromo: ");
	
	scanf("%d", &num);
	//printf("Tamanho: %d", tam);
	
	pali = palindromo(num);
	printf("\n%d", pali);
}



