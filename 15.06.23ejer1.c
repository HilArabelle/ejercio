 #include<stdio.h>
 #include <stdarg.h>
 
 void maximo(int n,...){
 	double mx,actual;
 	va_list puntero;
 	int i;
 	va_start(puntero,n);
 	mx=actual=va_arg(puntero,double);
 	printf("\n\t Argumento actual : %.11f \n", actual);
	for(i=2;i<=n; i++){
	 	actual=va_arg(puntero,double);
	 	printf("\t\t Argumento actual : %.21f \n", actual);
	 	if(actual>mx){
	 		mx=actual;
		}
		printf("\t\t Maximo de la lista de %d numeros : %2.1f \n", n,mx);
		va_end(puntero);
	}
 }
 int main(void){
 	puts("\t \t Primera busqueda del maximo\n");
 	maximo(6,3.0,4.0,-12.5,1.2,4.5,6.4);
 	puts("\t \t Nueva busqueda del maximo \n");
 	maximo(4,55.4,17.8,5.9,-17.99);
 	return 0;
 }

 
