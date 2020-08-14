#include <stdio.h>
#include <stdlib.h>

int main()
{
  int nroA=0,i=0,sum=0;
  //for(i=0;i<10;i++)
  //{


   printf("Ingresar Nro:");
   scanf("%d",&nroA);

   if (nroA%2==0)
       {
        printf("Es Par\n");
        sum=sum+nroA;
       }
   else
        printf("Es Impar\n");

  //}
  printf("La suma de los pares es: %d\n",sum);
  system("pause");
    return 0;
}
