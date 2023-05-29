#include <stdio.h>
int MiNumero;
int main()
{
	int j;
	printf ("¿Cual es tu numero favorito");
	scanf ("%d",&MiNumero);
	int numerodeIteracciones=5;
	int i;
	for (i=1;i<numerodeIteracciones;++i){
		printf ("Iteracciones numero:%d\n",i+1);
	}	
	printf ("Cuanto vale aqui la varibale i:%d\n",i);
	printf ("Cuanto vale aqui la varibale i:%d\n",MiNumero);
	printf ("Cuanto vale aqui la varibale i:%d\n",numerodeIteracciones);
	
	return 0;
}
