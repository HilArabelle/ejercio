#include <stdio.h>
int main()
{
	int n=5,t;
	t=++n*--n;
	printf("n= %d,t=%d\n");
	printf("%d %d %d\n",++n, ++n,++n);
	return 0;
}
