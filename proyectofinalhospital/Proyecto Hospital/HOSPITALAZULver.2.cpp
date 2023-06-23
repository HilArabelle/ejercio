#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define MAX_ROOMS 10 //Numero de habitaciones
#define MAX_PATIENTS 2 //Capacidad del hospital

int Hora=rand()%24;//Genera una hora aleatoriA

struct Patient {
	//Declaracion de varibles usadas para registrar a lso pacientes
    char name[100];
    int age;
    char gender;
    float weight;
    int height;
    float imc;
    int habitacion;
    char sickness[50];
    char medicine[50];
    int medicationTime[10];
};

struct Patient hospital[MAX_PATIENTS];//Estrcutura creada para almacenar la informacion de cada paciente
int patientCount = 0;//Rastrea el numero actual de pacientes registrados
int patientRoom=0;
bool habitaciones[NUM_HABITACIONES] = { false };  // Inicializar todas las habitaciones como no seleccionadas
 int opcion;
 int habitacion;
void registerPatient() { //Funcion para registrar a paciente
	float weight,height,imc;
    if (patientCount < MAX_PATIENTS) {
        struct Patient newPatient;
        printf("Ingrese el nombre del paciente:");
        scanf("%s",&newPatient.name);
        printf("Ingrese la edad del paciente: ");
        scanf("%d",&newPatient.age);
        printf("Ingrese el género del paciente (M/F):");
        scanf(" %c",&newPatient.gender);
        printf("Ingrese el peso del paciente:");
        scanf("%f",&newPatient.weight);
        printf("Ingrese la estatura del paciente(cm):");
        scanf("%d",&newPatient.height);
        printf("Ingrese la habitacion");
        scanf("%d",&newPatient.habitacion);
        if (habitacion >= 1 && habitacion <= NUM_HABITACIONES) {
             if (habitaciones[habitacion - 1]) {
                printf("La habitación %d ya está reservada.\n\n", habitacion);
            } else {
                 habitaciones[habitacion - 1] = true;
                 printf("La habitación %d ha sido reservada exitosamente.\n\n", habitacion);
                    }
        } else {
                    printf("Número de habitación inválido.\n\n");
        }
              break;
        printf("Ingrese la enfermedad del paciente:");
        scanf("%s",&newPatient.sickness);
        printf("Ingrese el medicamento del paciente:");
        scanf("%s",&newPatient.medicine);
        printf("Ingrese la hora en la que debe tomar el medicamento (HH:MM):");
        scanf("%s",&newPatient.medicationTime);
         printf("IMC: %.2f\n", newPatient.imc);

        hospital[patientCount++] = newPatient;

        printf("El paciente ha sido registrado con exito.\n");
    } else {
        printf("No es posible registrar más pacientes. El hospital está lleno.\n");
    }
}


  
void dischargePatient() { //Funcion para dar de alta a paciente segun su numero de habitacion
    int i, room;
    printf("Ingrese el número de cuarto del paciente a dar de alta: ");
    scanf("%d", &room);

    for (i = 0; i < patientCount; i++) {
        if (hospital[i].habitacion == room) {
            printf("El paciente '%s' ha sido dado de alta.\n", hospital[i].name);
            // Movemos el último paciente a la posición vacía
            hospital[i] = hospital[patientCount - 1];
            patientCount--;
            return;
       
	    }
    }
    printf("No se encontro ningun paciente en el cuarto especificado.\n");
}

void dischargePatient2() { //Funcion para dar de baja a paciente segun su numero de habitacion
    int i, room;
    printf("Ingrese el número de cuarto del paciente a dar de baja: ");
    scanf("%d", &room);

    for (i = 0; i < patientCount; i++) {
        if (hospital[i].roomNumber == room) {
            printf("El paciente '%s' ha sido dado de baja.\n", hospital[i].name);
            // Movemos el último paciente a la posición vacía
            hospital[i] = hospital[patientCount - 1];
            patientCount--;
            return;
        }
    }

    printf("No se encontro ningun paciente en el cuarto especificado.\n");
}

void IMCcalculator(Patient *newPatient) {
    float height = newPatient->height / 100.0;
    newPatient->imc = newPatient->weight / (height* height); //Funcion para calcular el IMC de los pacientes
}

void viewPatientRecords() { //Funcion para ver registros de pacientes
    int i,dose;
    printf("Registros de pacientes:\n");
    for (i = 0; i < patientCount; i++) {
        printf("Paciente %d:\n", i + 1);
        printf("Nombre: %s\n", hospital[i].name);
        printf("Edad: %d\n", hospital[i].age);
        printf("Genero: %c\n", hospital[i].gender);
        printf("Peso: %.2f\n", hospital[i].weight);
        printf("Estatura: %.2f\n", hospital[i].height);
        printf("Numero de cuarto: %d\n", hospital[i].habitacion);
        printf("Enfermedad: %s\n", hospital[i].medicine);
        printf("Enfermedad: %s\n", hospital[i].sickness);
        printf("Hora para tomar el medicamento: %s\n", hospital[i].medicationTime);
        int SiguienteDose=Hora+hospital[i].medicationTime;
        if(SiguienteDose>24){
        	printf("Siguiente docis al dia siguiente");		
		} else if (SiguienteDose<24){
			printf("%d",SiguienteDose);
		}
        printf("IMC: %.2f\n",hospital[i].imc);

   	 if (hospital[i].imc < 18.5) {
        	printf("Rango: Bajo peso\n");
    	} else if (hospital[i].imc < 25) {
       		 printf("Rango: Peso normal\n");
    	} else if (hospital[i].imc < 30) {
       		 printf("Rango: Sobrepeso\n");
    	} else {
       	 printf("Rango: Obesidad\n");
   		 }
       		 printf("------------------------\n");
   		 }
}

int main() {
	
    int choice;
    do {
        printf("\nHospital Azul - Sistema de Gestion de Pacientes\n");//Menu con opciones
        	printf("Son las %d horas\n", Hora);
		if (Hora>=12);
        printf("\n------------------Menu------------------\n");
        printf("1. Registrar un nuevo paciente\n");
        printf("2. Dar de alta a un paciente\n");
        printf("3. Dar de baja a un paciente (Defuncion)\n");
        printf("4. Revisar archivos de pacientes\n");
        printf("5. Salir\n");
        printf("Ingrese su eleccion: ");
        scanf("%d", &choice);//Segun la seleccion invocara la funcion correspondiente
        printf("-------------------------------------------------\n");
        switch (choice) {
            case 1:
                registerPatient();//Funcion para registrar a paciente nuevo
                break;
            case 2:
                dischargePatient();//Fucnion para dar de Alta a pacientes
                break;
            case 3:
                dischargePatient2();//Fucnion para Dar de baja a paceintes
                break;
              case 4:
                viewPatientRecords();//Funcion para visualizar registros
                break;
            case 5:
                printf("Gracias por usar el sistema de gestion de pacientes.\n");
                break;
            default:
                printf("Opcion invalida. Por favor, ingrese una opcion valida.\n");
        }
    } while (choice != 5);

    return 0;
}
