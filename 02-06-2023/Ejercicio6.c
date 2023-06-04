/**/
#include <stdio.h>
int main()
{
	float calificacion;
	printf ("Ingresa un calificacion\n");
	scanf ("%f",&calificacion);
	if (calificacion>=6 && calificacion<11)
	{
		puts("Aprobado");	
	}
	else if (calificacion<6)
	{
		puts("Reprobado");
		if (calificacion=0)
		{
			puts ("no valido");
			if (calificacion>10)
			{
				puts ("no valido");
			}
		}
			
	}
	return 0;
}
