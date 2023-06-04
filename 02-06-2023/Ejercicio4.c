/*Calcular el mayor de dos numeros introducidos por el teclado y 
visualizarlos usando el si simple*/
#include <stdio.h>
int main()
{
	float num1,num2;
	printf ("Ingresa un numero\n");
	scanf ("%f",&num1);
	printf ("Ingresa un numero\n");
	scanf ("%f",&num2);
	if (num1>num2)
	{
		printf("El primer numero es mayor");
	}
	
	if (num1<num2)
	{
		printf("El segundo numero es mayor");
	}
	
	if (num1==num2)
	{
		printf("Son iguales");
	}
	return 0;
}
