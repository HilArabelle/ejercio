#include <stdio.h>
int main()
{
	float calificacion;
	printf ("Ingresa un calificacion\n");
	scanf ("%f",&calificacion);
	if (calificacion>=6)
	{
		puts("Aprobado=");	
	}
	else if (calificacion<6)
	{
		puts("Reprobado="
		);	
	}
	
}
