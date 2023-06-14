#include <stdio.h>
int cuadrado(int n)
{
	int q=0;
	while (q<=1000)
	{
		q=n*n;
		printf ("el cuadrado de:%d es %d\n",n,q);
		n++;
	}
	return 0;
}	
int q,n;			
int main ()
{
	cuadrado(n);
	return 0;
}
