#include <stdio.h>
#include <stdlib.h>
main()
{
	int vector[10]={10,150,20,140,30,130,120,20,70,50,40,100};
	int aux,a,b;
	for(a=0; a< 15; a++){
	for(b=0; b< 15; b++){
		if(vector[b] > vector[b+1]){
			aux=vector[b+1];
			vector[b+1]=vector[b];
			vector[b]=aux;
			}
    	}
	}
	for (a=0; a<15; a++){
		printf("%d\t",vector[a]);
	}
	return 0;
}

