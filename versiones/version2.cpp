#include <stdio.h>
int main ()
{
	float num=5,num2;
	printf ("Ingresa un numero");
	scanf ("%f",&num2);
	if (num2<num)
	{
		printf("Es menor");
	}
	else if (num2>num)
	{
		printf("Es mayor");
	}
	else if (num2=num)
	{
		printf("Es correcto");
	}
		
	return 0;
}
