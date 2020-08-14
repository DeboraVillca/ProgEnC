#include <stdio.h>
#include <stdlib.h>

int main()
{
 int minro=0,max=0,min=0,posiMax,posiMin,i=0;
 for (i=1;i<=10;i++)
 {
    printf("Ingrese el numero orden %d:",i);
    scanf("%d",&minro);
   if(i==1)
    {
     min=minro;
     max=minro;
     posiMax=i;
     posiMin=i;
    }
  else
    {
     if(minro>max)
      {
        max=minro;
        posiMax=i;
       }
     else
        if(minro<min)
       {
            min=minro;
            posiMin=i;
       }

    }

 }
 printf("El maximo es %d y esta en %d. El minimo es %d y esta en %d\n",max,posiMax,min,posiMin);
 system("pause");
 return 0;
}
