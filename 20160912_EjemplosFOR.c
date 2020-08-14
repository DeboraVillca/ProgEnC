#include <stdio.h>
#include <stdlib.h>
#define MAX 3
#define MENSAJE "ERROR EN INGRESO de DATOS"
int main()
{
  int i, minro=0;

  for (i=0;i<MAX;i++)
  {
    system("cls");
    //puts(MENSAJE);
    printf("\nIngrese un numero:");
    scanf("%d",&minro);
    printf("Itereacion NRO: %d el numero ingresado es %d\n",i,minro);

    if (minro>=0 && minro<=5) //&& significa AND Y
    {
       printf("Numero comprendido entre 0 y 5\n");
    }
    else{
        printf("Numero fuera de rango 0 y 5\n");
        }

   }


    return 0;
}
