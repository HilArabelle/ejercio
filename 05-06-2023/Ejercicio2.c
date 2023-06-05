/*05-06-2023
Ejercicio 2
Editar y Depurar el ejercicio y describir la variante en el uso del case*/
#include <stdio.h>
int main()
{
	int opcion;
	scanf ("%i",opcion);
	switch(opcion)
	{
		case 0:
		case 1:
		case 2:
		printf ("menor de tres...");
		case 3:
		puts ("Igual a tres");
			break;
			default:
				puts("Fuera de rango");
	}
}
