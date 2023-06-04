#include <stdio.h>
int main()
{
	float num;
	printf ("Ingresa un numero\n");
	scanf ("%f",&num);
	if (num<0)
	{
		puts ("Es negativo");
		if (num>0)
		{
			puts ("Es positivo");
			if (num=0)
			{
				puts ("Es igual a 0");
			}
		}	
	}
	return 0;	
}
