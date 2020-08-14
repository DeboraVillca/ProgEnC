#include <stdio.h>
#include <stdlib.h>

int main()
{   int valorA,valorB,aux;

    printf("Ingrese Valor A");
    scanf("%d",&valorA);
    printf("Ingrese Valor B");
    scanf("%d",&valorB);

    aux=valorB;
    valorB=valorA;
    valorA=aux;

    printf("El resutado de A es %d, y el de b es %d",valorA,valorB);

    return 0;
}
