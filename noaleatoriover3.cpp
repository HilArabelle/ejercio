#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (int argc,char**argv)
{
	int num,num2,opc=0;
	printf ("\n Adivinar numero");
	printf ("\n1-Comenzar");
	printf ("\n2-Salir.\n");
	printf ("\n Introduce un opcion");
	scanf ("%d",&opc);
	while (opc!=2)
	{
		num=rand() % 100;
		printf("\n introduce numero");
		 scanf("%d",&num2);
       
        while(num!=num2)
        {
            if (num>num2)
               printf("Es mayor");
            else
                 printf("Es menor");
                
            printf("\n Introduce numero: ");
            scanf("%d",&num2);
        }
       
        printf("\n Has acertado! \n");
       
        printf("\n 1 - Jugar de nuevo.");
        printf("\n 2 - Salir.");
        printf("\n Introduce una opcion:");
       
        scanf("%d",&opc);
    } 
    system("PAUSE"); 		
	return 0;
}
