/* desarolla un programa que solicite una calificacion optenida entre
1 y 10 no puede ser 0 ni 11 error, y evalue si es mayor a 6 mande de aprobado
funcion puts y printf */
#include <stdio.h>
int main()
{
	float calificacion;
	printf ("Ingresa un calificacion\n");
	scanf ("%f",&calificacion);
	if (calificacion>=6)
	{
		puts("Aprobado");	
	}
	else if (calificacion<6)
	{
		puts("Reprobado");	
	}
	return 0;
}
