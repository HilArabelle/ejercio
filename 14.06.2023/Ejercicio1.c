/*Determinar su un numero dado,leido del teclado es primo o no,repitiendo la operacion un numero de veces determinado por otro numero 
asignado por teclado*/
#include <stdio.h>
int Primo (int numero);
int main(void)
{
	int numero,contador,u;
	printf ("ingresa la cantidad de intentos");
	scanf("%d",&u);
	while (contador==u)
  {
  		int numero;
  		printf("Dime un número: \n");
  		scanf("%d", &numero);
  		if (Primo(numero)) 
		{
    		printf("Es primo");
  		} else 
		{
   	    	printf("No es primo");
 	 	}
 		return 0;	
	}
return 0;
}

int Primo(int numero) {
  if (numero == 0 || numero == 1) return 0;
  if (numero == 4) return 0;
  for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) return 0;
  }
  return 1;
}
 



