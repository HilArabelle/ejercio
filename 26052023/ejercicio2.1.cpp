#include <stdio.h>
int main ()
{
	float c[5];
	float r=0;
	printf ("DEPURAR EL SIGUIENTE PROGRAMA\n");
	for (int i=0;i<5;i++){
		printf ("%d\n",i+1);
		scanf ("%f",&c[5]);
		printf ("\n");
		r=r+c;
	}
	printf ("%.2f\n",r/5);
	return 0;
}
