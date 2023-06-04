#include <stdio.h>
int main ()
{
	float a,b,c;
	printf ("Valor a:");
	scanf ("%2.f",&a);
	printf ("Valor b:");
	scanf ("%2.f",&b);
	printf ("Valor c:");
	scanf ("%2.f",&c);
	if (a>b)
	{
		if(b>0)++a;
		puts (b);
		puts (a);
		else 
			if(c>0)
				puts (b);
				puts (a);
				if(a<5)++b;
					puts (b);
					puts (a);
				else
					if (b<5)++c;
					else--a;
				else if (c<5)--b;
			else --c;
		else a=0;
	}
return 0;		
}
