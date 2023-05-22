#include <stdio.h>
int main()
{
	float num=36,num2;
	printf ("Ingresa un numero");
	scanf ("%f",&num2);
	while(num!=num2)
	{
		if (num2<num)
		{
			printf("\n Es menor");
			printf ("\n Ingresa un numero");
			scanf ("%f",&num2);
		}
		else if (num2>num)
		{
			printf("Es mayor");
			printf ("\n Ingresa un numero");
			scanf ("%f",&num2);
		}
	}
	printf("Es correcto");
	return 0;
}
