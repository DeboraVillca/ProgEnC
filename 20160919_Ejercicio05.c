#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nroA=0,nroB=0;
   printf("Ingrese Nro A");
   scanf("%d",&nroA);
   printf("Ingrese Nro B");
   scanf("%d",&nroB);

   if(nroA>nroB)
        printf("Es Mayor");
   else
       if (nroA<nroB)
               printf("Es menor");
        else
               printf("Es igual");


    return 0;
}
