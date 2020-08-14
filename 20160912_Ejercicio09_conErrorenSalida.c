#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion=0,minroA=0,minroB=0,resu=0;

    do
    {
        system("cls");
      /*
        printf("1-Suma\n");
        printf("2-Dividir\n");
        printf("3-Multiplicar\n");
        printf("4-Restar\n");
        printf("5-Salir\n");
      */
        printf("1-Suma\n2-Dividir\n3-Multiplicar\n4-Restar\n5-Salir\n");
        scanf("%d",&opcion);
        if (opcion>=1 && opcion <=4)
        {
            printf("Ingrese Nro A:\n");
            scanf("%d",&minroA);
            printf("Ingrese Nro B:\n");
            scanf("%d",&minroB);
        }
        switch(opcion)
        {  case 1:
                  resu=minroA+minroB;
                  printf("La Suma de %d+%d = %d\n",minroA,minroB,resu);
                  break;
           case 2:
                  resu=minroA/minroB;
                  printf("La Division de %d/%d = %d\n",minroA,minroB,resu);

                  break;
           case 3:resu=minroA*minroB;
                  printf("La Multiplicacion de %dx%d = %d\n",minroA,minroB,resu);

                  break;
           case 4:resu=minroA-minroB;
                  printf("La Resta de %d-%d = %d\n",minroA,minroB,resu);

                  break;
        default:printf("va a SALIR\n");
        }



    system("pause");
    }while(opcion!=5);


    return 0;
}
