#include <stdio.h>


int main()
{
    int medida, convertida; 
    float comprimento = 1, valor;
    printf("Informe a medida que sera inserida: \n");
    printf("1 - Metro \n2 - Centimetro \n3 - Quilometro\n");
    scanf("%d", &medida);
        switch (medida)
    {
    case 1:
        printf("\nInforme o valor em metros");
        scanf("%f", &valor);
        break;
    case 2:
        printf("\nInforme o valor em Centimetros ");
        scanf("%f", &valor);
        break;
    case 3:
        printf("\nInforme o valor em Quilometro");
        scanf("%f", &valor);
    
    default:
        printf("Opcao invalida");
        break;
    }
    printf("Informe para qual unidade sera convertida: \n1 - Metros\n2 - Centimetros\n3 - Quilometro");
    scanf("%d", &convertida);

    switch (convertida)
    {
    case 1:
        //metros
        break;
    case :
        //cm
        break;
    case 3:
        //km
        break;
    
    default:
        break;
    }

    return 0;
}
