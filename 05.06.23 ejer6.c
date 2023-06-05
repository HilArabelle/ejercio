#include <stdio.h>
int main()
{
	int vehiculo,importe;
	float v1=500,v2=600,v3=100,pago,cambio;
	puts ("Ingresa el tipo de vehculo");
	puts ("1=particular\n");
	puts ("2=autobus\n");
	puts ("3=moto\n");
	scanf ("%i",&vehiculo);
	switch (vehiculo)
	{
		case 1:
			printf ("El total a pagar es de $500\n");
			printf ("Ingresa importe\n");
			scanf ("%d",&importe);
			if (importe<v1)
			{
				printf ("te falta");
			}
			else if(importe==500)
			{
				printf ("Buen viaje");
			}
			else if (importe>v1)
			{
				cambio==importe-v1;
				printf("Cambio es igual a%.2f",cambio);
			}
			
		break;
		case 2:
			printf ("El total a pagar es de $600\n");
			printf ("Ingresa importe\n");
			scanf ("%d",&importe);
			if (importe<v2)
			{
				printf ("te falta");
			}
			else if(importe==600)
			{
				printf ("Buen viaje");
			}
			else if (importe>v2)
			{
				cambio==importe-v2;
				printf("Cambio es igual a%.2f",cambio);
			}
		break;
		case 3:
			printf ("El total a pagar es de $100\n");
			printf ("Ingresa importe\n");
			scanf ("%d",&importe);
			if (importe<v3)
			{
				printf ("te falta");
			}
			else if(importe==100)
			{
				printf ("Buen viaje");
			}
			else if (importe>v3)
			{
				cambio==importe-v3;
				printf("Cambio es igual a%.2f",cambio);
			}
		break;
	}
	return 0;
}
