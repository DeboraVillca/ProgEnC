#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;

    /*
    for (i=0;i<5;i++)
    {
      printf("Numero %d \n",i);
    }
    */
/*
    while(i<5)
    {
       printf("Numero %d \n",i);
       i++;
    }

*/

     do{

      i++;
      switch (i)
       {
           case 1:printf("Es %d UNO\n",i);
                  break;
           case 2:printf("Es %d DOS\n",i);
                  break;
           case 3:printf("Es %d TRES\n",i);
                  break;
           case 4:printf("Es %d CUATRO\n",i);
                  break;
           default:printf("No esta compredido entre 1 y 4. Es %d\n",i);
                  break;
       }

    } while(i!=10);



    return 0;

}
