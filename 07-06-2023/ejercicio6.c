#include <stdio.h>
#define MAX 25
int main()
{
	int i,j;
	for(i=0,j=MAX;i<j;i++,j--)
	{
		printf ("%d",(i+2*j));
	}
}
