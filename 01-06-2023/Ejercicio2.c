 /*Hilary Arabelle Huerta Sánchez*/
#include <stdio.h>
int main()
{
	int car,cal,k,tarifa;
	printf ("Ingresa tu consumo anterior\n");
	scanf ("%d",&car);
	printf ("Ingresa tu consumo actual\n");
	scanf ("%d",&cal);
	if (car>cal)
	{
		printf ("La tarifa anterior no puede ser mayor al actual");
	}
	else if (car<cal)
	{
		k=cal-car;
		if (k<=1000)
		{
			tarifa=k*1.2;
			printf ("El total a pagar es %d\n",tarifa);
		}
		else if (k>1000,k<1850)
		{
			tarifa=k*1.8;
			printf ("El total a pagar es ""%d",tarifa);
		}
		else if (k>1850)
		{
			tarifa=k*2.1;
			printf ("El total a pagar es %d",tarifa);
		}

	}
	return 0;
}
