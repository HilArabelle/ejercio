#include <stdlib.h>
int main()
{
	int a,b,resultado,residuo;
	printf ("Ingresa el dividendo\n");
	scanf ("%d",&a);
	printf ("Ingresa el divisor\n");
	scanf ("%d",&b);
	residuo = a%b;
	resultado=a/b;
	printf ("residuo = %d\n",residuo);
	if (residuo==0)
	{
		printf ("Son divisibles\n");
	}
	else 
	{
		printf (" No son divisibles\n");	
	}
	if (resultado>=6)
	{
		puts("Aprobado");	
	}
	else if (resultado<6)
	{
		puts("Reprobado");	
	}
	return 0;
}
