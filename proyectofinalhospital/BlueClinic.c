/*Nombre:hilary Arabelle huerta S�nchez*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#define MAX_ROOMS 100
#define MAX_PATIENTS 25

struct Paciente {
    char nombre[100];
    int edad;
    char genero;
    float peso;
    int estatura;
    float imc;
    int numeroCuarto;
    char enfermedad[50];
    char medicina[50];
    char tiempoMedicacion[10];
};

struct Paciente hospital[MAX_PATIENTS];
int contadorPaciente = 0;

void registrarPaciente() {
    if (contadorPaciente < MAX_PATIENTS) {
        struct Paciente newPatient;
        printf("Ingrese el nombre del paciente: ");
        scanf("%s", newPatient.nombre);
        printf("Ingrese la edad del paciente: ");
        scanf("%d", &newPatient.edad);
        printf("Ingrese el g�nero del paciente (M/F): ");
        scanf(" %c", &newPatient.genero);
        printf("Ingrese el peso del paciente: ");
        scanf("%f", &newPatient.peso);
        printf("Ingrese la estatura del paciente (cm): ");
        scanf("%d", &newPatient.estatura);
        printf("Ingrese el n�mero de cuarto designado: ");
        scanf("%d", &newPatient.numeroCuarto);
        printf("Ingrese la enfermedad del paciente: ");
        scanf("%s", newPatient.enfermedad);
        printf("Ingrese el medicamento del paciente: ");
        scanf("%s", newPatient.medicina);
        printf("Ingrese la hora en la que debe tomar el medicamento (HH:MM): ");
        scanf("%s", newPatient.tiempoMedicacion);

        hospital[contadorPaciente++] = newPatient;

        printf("El paciente ha sido registrado con �xito.\n");
    } else {
        printf("No es posible registrar m�s pacientes. El hospital est� lleno.\n");
    }
}

void darAltaPaciente() {
    int i, room;
    printf("Ingrese el n�mero de cuarto del paciente a dar de alta: ");
    scanf("%d", &room);

    for (i = 0; i < contadorPaciente; i++) {
        if (hospital[i].numeroCuarto == room) {
            printf("El paciente '%s' ha sido dado de alta.\n", hospital[i].nombre);
            hospital[i] = hospital[contadorPaciente - 1];
            contadorPaciente--;
            return;
        }
    }
    printf("No se encontr� ning�n paciente en el cuarto especificado.\n");
}

void darBajaPaciente() {
    int i, room;
    printf("Ingrese el n�mero de cuarto del paciente a dar de baja: ");
    scanf("%d", &room);

    for (i = 0; i < contadorPaciente; i++) {
        if (hospital[i].numeroCuarto == room) {
            printf("El paciente '%s' ha sido dado de baja.\n", hospital[i].nombre);
            hospital[i] = hospital[contadorPaciente - 1];
            contadorPaciente--;
            return;
        }
    }
    printf("No se encontr� ning�n paciente en el cuarto especificado.\n");
}

void verRegistroPacientes() {
    int i;
    printf("Registros de pacientes:\n");
    for (i = 0; i < contadorPaciente; i++) {
        struct Paciente paciente = hospital[i];
        float imc = (paciente.peso / pow(paciente.estatura / 100.0, 2));
        
        printf("Paciente %d:\n", i + 1);
        printf("Nombre: %s\n", paciente.nombre);
        printf("Edad: %d\n", paciente.edad);
        printf("G�nero: %c\n", paciente.genero);
        printf("Peso: %.2f\n", paciente.peso);
        printf("Estatura: %d\n", paciente.estatura);
        printf("N�mero de cuarto: %d\n", paciente.numeroCuarto);
        printf("Enfermedad: %s\n", paciente.enfermedad);
        printf("Medicamento: %s\n", paciente.medicina);
        printf("Hora para tomar el medicamento: %s\n", paciente.tiempoMedicacion);
        printf("IMC: %.2f\n", imc);
        
        if (imc < 18.5) {
            printf("Rango: Peso Bajo\n");
        } else if (imc < 24.9) {
            printf("Rango: Peso Normal\n");
        } else if (imc < 29.9) {
            printf("Rango: Sobrepeso\n");
        } else {
            printf("Rango: Obesidad\n");
        }
        
        printf("------------------------\n");
    }
}

int main() {
    srand(time(0));
    int respuesta;
    int Hora = rand() % 24;

    do {
        printf("\nBlue Clinic - Sistema de Gesti�n de Pacientes\n");
        printf("Son las %d horas\n", Hora);
        printf("\n------------------Menu------------------\n");
        printf("1. Registrar un nuevo paciente\n");
        printf("2. Dar de alta a un paciente\n");
        printf("3. Dar de baja a un paciente (Defunci�n)\n");
        printf("4. Revisar archivos de pacientes\n");
        printf("5. Salir\n");
        printf("Ingrese su elecci�n: ");
        scanf("%d", &respuesta);
        printf("-------------------------------------------------\n");

        switch (respuesta) {
            case 1:
                registrarPaciente();
                break;
            case 2:
                darAltaPaciente();
                break;
            case 3:
                darBajaPaciente();
                break;
            case 4:
                verRegistroPacientes();
                break;
            case 5:
                printf("Gracias por usar el sistema de gesti�n de pacientes.\n");
                break;
            default:
                printf("Opci�n inv�lida. Por favor, ingrese una opci�n v�lida.\n");
                break;
        }
    } while (respuesta != 5);

    return 0;
}
