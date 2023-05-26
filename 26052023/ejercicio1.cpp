#include <stdio.h>
int main()
{
	int a[10]={10,1,2,3,-100,1000,-200,7,1,0};
	int i,mayor,r=0;
	for (int i=0;i<10;i++){
		if (a[i]>r){
			mayor=i;
			printf("\n %d",a[i]);
			printf("\n:%d",mayor);
		}
	}
	return 0;
}

