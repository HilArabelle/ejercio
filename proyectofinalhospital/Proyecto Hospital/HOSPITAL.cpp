#include <stdio.h>
int main()
{
	char opcion,respuesta,nombre_paciente;
	int edad_paciente;
	printf("Bienvenido a Wellness Clinic\n");
	do{
		printf("Operacion desea realizar\n");
		printf("Registrar nuevo paciente(1)\nDar de alta(2)\nRegistro de pacientes(3)\n");
		scanf("%c",&opcion);
		switch(opcion)
		{
			case '1':
				printf("_____________________\n");
				printf("Registar paciente \n");
				printf("Ingrese el nombre del paciente");
				scanf("%c",&nombre_paciente);
				printf("Edad del paciente")
				scanf("%c",&edad_paciente);
			break;
			case '2':
				printf("_____________________\n");
				printf("Dar de Alta\n");
			break;
			case '3':
				printf("_____________________\n");
				printf("REgistro de pacientes");
			break;
		}
		printf("Deseas realizar otra operacion (s/n)\n");
		scanf("%d",&respuesta);
	}while(respuesta='s');
	
	return 0;
}
