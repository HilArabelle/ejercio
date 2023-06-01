  /*Hilary Arabelle Huerta Sánchez*/
  #include <stdio.h>
  int main()
  {
	int k,tarifa;
	printf ("Ingrese la tarifa de kw\n");
	scanf ("%d",&k);
	if (k<=1000)
	{
		tarifa=k*1.2;
		printf ("El total a pagar es %d",tarifa);
	}
	else if (k>1000,k<1850)
	{
		tarifa=k*1.8;
		printf ("El total a pagar es ""%d",tarifa);
	}
	else if (k>1850)
	{
		tarifa=k*2.1;
		printf ("El total a pagar es %d",tarifa);
	}
	return 0;	
  }
  
