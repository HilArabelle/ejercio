#include<stdio.h>
int main()
{
	char opcion,s;
	do
	{
		puts("hola");
		puts("Desea otro tipo de saludo");
		printf("y a continuacion pulse intro\n");
		scanf("%c",&opcion);
	}
	while(opcion=='s',opcion=='S');
	puts("adios");
	return 0;
}
