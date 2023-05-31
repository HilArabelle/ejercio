#include <stdio.h>
int main ()
{
	int edad,mayordeedad,juvenil;
	scanf("%i",&edad);
	mayordeedad=(edad>18);
	juvenil=(edad>15)&&(edad<=18);
	printf("%i\n",mayordeedad);
}
