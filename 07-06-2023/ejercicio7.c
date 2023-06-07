#include <stdio.h>
#define MAX 25
int main()
{
	int c;
	for(c='A';c<='z';c++);
	{
		printf("%c",&c);
	}
	int i;
	for(i='9';i>='0';c++)
	{
		printf("%i",&c);
	}
	for (i=1;i<100;i*=2)
	{
		printf("%d",i);
	}
	int j;
	for(i=0,j=MAX;i<j;i++,j--)
	{
		printf ("%d",(i+2*j));
	}
	
}
