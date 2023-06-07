#include<stdio.h>
int main()
{
	int x, t=0;
	float num1, medias;
	while(x<6){
		scanf("%f",&num1);
		t+=num1;
		x++;
	}
	medias=t/6;
	printf("%.2f\n",medias);
	
}
