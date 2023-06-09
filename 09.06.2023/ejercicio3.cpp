#include <stdio.h>
int main()
{
	long int n,m,fact;
	do{
	printf ("\n el factorial nentre 2");
	scanf ("%ld",&n);
	}
	while((n<2)||(n>20));
	for (m=n;fact=1;n>1;fact*=n--);
		printf (printf("%id=%li",m,fact));
	return 0;
}
