#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#define MAX_ROOMS 
#define MAX_PATIENTS 25
int main()

struct Paciente {
	//Declaracion de varibles usadas para registrar a lso pacientes
    char nombre[100];
    int edad;
    char genero;
    float peso;
    int estatura;
    float imc;
    int numeroCuarto;
    char enfermedad[50];
    char medicina[50];
    int tiempoMedicacion[10];
};

struct Paciente hospital[MAX_PATIENTS];//Estructura creada para almacenar la informacion de cada paciente

void registrarPaciente(){ 
 	if (contadorPaciente < MAX_PATIENTS) { //Contador para no superar capacidad en el Hospital
        struct Patient newPatient;//Estrcutura creada para registrar a un nuevo paciente
        printf("Ingrese el nombre del paciente:");
        scanf("%s",&newPatient.nombre);
        printf("Ingrese la edad del paciente: ");
        scanf("%d",&newPatient.edad);
        printf("Ingrese el género del paciente (M/F):");
        scanf(" %c",&newPatient.genero);
        printf("Ingrese el peso del paciente:");
        scanf("%f",&newPatient.peso);
        printf("Ingrese la estatura del paciente(cm):");
        scanf("%d",&newPatient.estatura);
        printf("Ingrese el número de cuarto designado:");
        scanf("%d",&newPatient.numeroCuarto);
        printf("Ingrese la enfermedad del paciente:");
        scanf("%s",&newPatient.enfermedad);
        printf("Ingrese el medicamento del paciente:");
        scanf("%s",&newPatient.medicina);
        printf("Ingrese la hora en la que debe tomar el medicamento (HH:MM):");
        scanf("%s",&newPatient.tiempoMedicacion);

        hospital[contadorPaciente++] = newPatient;

        printf("El paciente ha sido registrado con exito.\n");
    } else {
        printf("No es posible registrar más pacientes. El hospital está lleno.\n");
    }
}

void darAltaPaceinte() { //Funcion para dar de lata a paceintes ya sanos
 int i, room;
    printf("Ingrese el número de cuarto del paciente a dar de alta: ");
    scanf("%d",&room);

    for (i = 0; i < contadorPaciente; i++) {
        if (hospital[i].numeroCuarto == room) {
            printf("El paciente '%s' ha sido dado de alta.\n", hospital[i].nombre);
            // Movemos el último paciente a la posición vacía
            hospital[i] = hospital[contadorPaciente - 1];
            contadorPaciente--;
            return;
        }
    }
    printf("No se encontro ningun paciente en el cuarto especificado.\n");
}

void darBajaPaciente() { //Funcion para dar de baja a pacientes defuncion
int i, room;
    printf("Ingrese el número de cuarto del paciente a dar de baja: ");
    scanf("%d", &room);

    for (i = 0; i < contadorPaciente; i++) {
        if (hospital[i].numeroCuarto == room) {
            printf("El paciente '%s' ha sido dado de baja.\n", hospital[i].nombre);
            // Movemos el último paciente a la posición vacía
            hospital[i] = hospital[contadorPaciente - 1];
            contadorPaciente--;
            return;
        }
    }
    printf("No se encontro ningun paciente en el cuarto especificado.\n");
}

void verRegistroPacientes(){ //Funcion para ver registros de pacientes
int i;
    printf("Registros de pacientes:\n");
    for (i = 0; i < contadorPaceinte; i++) {
    	float imc=((hospital[i]estatura*hospital[i].estatura)/hospital[i].peso);
    
        printf("Paciente %d:\n", i + 1);
        printf("Nombre: %s\n", hospital[i].nombre);
        printf("Edad: %d\n", hospital[i].edad);
        printf("Genero: %c\n", hospital[i].genero);
        printf("Peso: %.2f\n", hospital[i].peso);
        printf("Estatura: %.2f\n",hospital[i].estatura);
        printf("Numero de cuarto: %d\n", hospital[i].numeroCuarto);
        printf("Enfermedad: %s\n", hospital[i].medicina);
        printf("Enfermedad: %s\n", hospital[i].enfermedad);
        printf("Hora para tomar el medicamento: %s\n", hospital[i].tiempoMedicacion);
        printf("IMC:%d\n",imc);
        
        if(imc<18.5){ 
        	printf("Rango:Peso Bajo\n");
		}if (imc>18.5||imc<24.9){
			printf("Rango:Peso Normal\n");
		}if (imc>25||imc<29.9){
			printf("Rango:Sobrepeso\n");
		}if (imc>30){
			printf("RangoObesidad\n");
		}
        printf("------------------------\n");
    }
}

{
int respuesta;
int Hora=rand()%24;//Genera una hora aleatoria
    do {
        printf("\nBlue Clinic - Sistema de Gestion de Pacientes\n");//Menú con opciones
        	printf("Son las %d horas\n", Hora);
		if (Hora>=12);
        printf("\n------------------Menu------------------\n");
        printf("1. Registrar un nuevo paciente\n");
        printf("2. Dar de alta a un paciente\n");
        printf("3. Dar de baja a un paciente (Defuncion)\n");
        printf("4. Revisar archivos de pacientes\n");
        printf("5. Salir\n");
        printf("Ingrese su eleccion: ");
        scanf("%d",&respuesta);//Según la selección invocara la función correspondiente
        printf("-------------------------------------------------\n");
        switch (respuesta) {
            case 1:
                registrarPaciente();//Función para registrar a paciente nuevo
                break;
            case 2:
                darAltaPaciente();//Función para dar de Alta a pacientes
                break;
            case 3:
                darBajaPaciente();//Función para Dar de baja a paceintes (defuncion)
                break;
              case 4:
                verRegistroPacientes();//Función para visualizar registros
                break;
            case 5:
                printf("Gracias por usar el sistema de gestion de pacientes.\n");
                break;
            default:
              	printf("Opcion invalida. Por favor, ingrese una opcion valida.\n");
        }
    } while (respuesta != 5);
}
