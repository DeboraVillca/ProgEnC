#include <stdio.h>
#include <stdlib.h>
#define MAX 3
#define MENSAJE "ERROR EN INGRESO de DATOS"
//Ingresar hasta 3 numero enteros decimales. Informar por pantalla si dicho numero
//Esta comprendido entre 0 y 5. En caso controario informar que esta fuera de rango
//El ejercicio finaliza cuando llega a 3 numero ingresadod o cuando coloca un numero fuera de rango

int main()
{
  int i=1, minro=-1;

  while (i<=MAX) //Es un mientras y corta cuando la expresion deja de ser verdadera
//  while (minro!=0)
  {
    system("cls");
    //puts(MENSAJE);
    printf("\nIngrese un numero:");
    scanf("%d",&minro);
    printf("Itereacion NRO: %d el numero ingresado es %d\n",i,minro);

    if (minro>=0 && minro<=5) //&& significa AND Y
    {
       printf("Numero comprendido entre 0 y 5\n");
       i++; // o i=i+1
    }
    else{
        printf("Numero fuera de rango 0 y 5\n");
        i=MAX+1;
        }


    system("pause");
   }

    return 0;
}
