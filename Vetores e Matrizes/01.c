#include <stdio.h>

/*Fa�a um programa que possua um array de nome A que armazene 6 n�meros inteiros.
O programa deve executar os seguintes passos:
1. Atribua os seguintes valores a este array: 1, 0, 5, -2, -5, 7.
*/
int main()
{
	int A[] = {-1, 0, 5, -2, -5, 7};

/*2. Armazene em uma vari�vel inteira (simples) a soma entre os valores das posi��es
A[0], A[1] e A[5] do array e mostre na tela esta soma.*/

	int v1, i;

	
	v1 = A[0] + A[1] + A[5];
	printf("V1: %d\n", v1);
	
/*3. Modifique o array na posi��o 4, atribuindo a esta posi��o o valor 100.*/
	A[4] = 100;
	
	
/*4. Mostre na tela cada valor do array A, um em cada linha.*/	
	for (i = 0;i<7;i++){
		printf("[%d]: %d\n", i, A[i]);
	}
}
