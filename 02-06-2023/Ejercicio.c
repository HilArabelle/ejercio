/*Que diga si un numero es mayor,menor o igual a 0 
con la funcion si simple*/
#include <stdio.h>
int main()
{
	float numero;
	printf ("Ingresa un numero");
	scanf ("%f",numero);
	if (numero>0)
	{
		puts("Es mayor a 0");	
	}
	if (numero<0)
	{
		puts("Es menor a 0");	
	}
	if (numero=0)
	{
		puts("Es igual a 0");	
	}
	return 0;
}
