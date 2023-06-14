/*Sumar numeros del 1 al 50*/
#include <stdio.h>
#include <conio.h>
main ()
{
    int i, num, suma;
    suma=0;
 
    for (i=1;i<=50;i++)
    { 
        suma=suma+i;
    }
    printf ("\n La suma de los numeros enteros es: %d", suma);
    getch ();
    return 0;
}
