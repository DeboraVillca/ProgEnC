#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nroA=0,ct=0,p=0,n=0,sum=0; //variables locales al main
    printf("---Finaliza con Cero---\n");
    do
    {   //system("cls");
        printf("Ingrese Numero: ");
        scanf("%d",&nroA);
        if (nroA>0)
        {
          p++; //i=i+1
          sum=sum+nroA;
        }
        else
        {
           if(nroA!=0)
            {
             n++;

            }
        }

    }while (nroA!=0);

    printf("La cantidad de + es %d, y suma: %d y promedia %d\n",p,sum,sum/p);
    printf("La cantidad de - es %d\n",n);
    system("pause");
    return 0;
}
