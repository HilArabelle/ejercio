#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX_ROOMS 
#define MAX_PACIENTES 100

typedef struct {
    char nombre[50];
    int edad;
    char genero;
    float peso;
    float estatura;
    int numeroCuarto;
    char enfermedad[50];
    char horaMedicamento[6];
    float imc;
} Paciente;

void calcularIMC(Paciente *paciente) {
    float altura = paciente->estatura / 100.0;
    paciente->imc = paciente->peso / (altura * altura);
}

void mostrarRegistro(Paciente paciente) {
    printf("Nombre: %s\n", paciente.nombre);
    printf("Edad: %d\n", paciente.edad);
    printf("Género: %c\n", paciente.genero);
    printf("Peso: %.2f kg\n", paciente.peso);
    printf("Estatura: %.2f cm\n", paciente.estatura);
    printf("Número de cuarto: %d\n", paciente.numeroCuarto);
    printf("Enfermedad: %s\n", paciente.enfermedad);
    printf("Hora de medicamento: %s\n", paciente.horaMedicamento);
    printf("IMC: %.2f\n", paciente.imc);

    if (paciente.imc < 18.5) {
        printf("Rango: Bajo peso\n");
    } else if (paciente.imc < 25) {
        printf("Rango: Peso normal\n");
    } else if (paciente.imc < 30) {
        printf("Rango: Sobrepeso\n");
    } else {
        printf("Rango: Obesidad\n");
    }
}

void darDeAlta(Paciente *pacientes, int *numPacientes, int numeroCuarto) {
    for (int i = 0; i < *numPacientes; i++) {
        if (pacientes[i].numeroCuarto == numeroCuarto) {
            printf("El paciente %s ha sido dado de alta.\n", pacientes[i].nombre);

            // Mover el último paciente al lugar del paciente dado de alta
            pacientes[i] = pacientes[(*numPacientes) - 1];
            (*numPacientes)--;
            return;
        }
    }

    printf("No se encontró ningún paciente en el número de cuarto %d.\n", numeroCuarto);
}

int main() {
    srand(time(NULL));

    Paciente pacientes[MAX_PACIENTES];
    int numPacientes = 0;
	int Horaentrada=rand()%24;
    int opcion;
    int numeroCuarto;

    printf("Bienvenido al Hospital Azul.\n");

    do {
        printf("\n----- Menú -----\n");
        printf("1. Registrar paciente\n");
        printf("2. Dar de alta paciente\n");
        printf("3. Mostrar registros\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                if (numPacientes == MAX_PACIENTES) {
                    printf("Se ha alcanzado el número máximo de pacientes registrados.\n");
                    break;
                }

                printf("\n----- Registro de paciente -----\n");

                Paciente nuevoPaciente;

                printf("Nombre: ");
                scanf("%s", nuevoPaciente.nombre);

                printf("Edad: ");
                scanf("%d", &nuevoPaciente.edad);

                printf("Género (M/F): ");
                fflush(stdin);
                scanf(" %c", &nuevoPaciente.genero);

                printf("Peso (kg): ");
                scanf("%f", &nuevoPaciente.peso);

                printf("Estatura (cm): ");
                scanf("%f", &nuevoPaciente.estatura);

                printf("Número de cuarto: ");
                scanf("%d", &nuevoPaciente.numeroCuarto);

                printf("Enfermedad: ");
                scanf("%s", nuevoPaciente.enfermedad);

                printf("Hora de medicamento (HH:MM): ");
                scanf("%s", nuevoPaciente.horaMedicamento);

                calcularIMC(&nuevoPaciente);

                pacientes[numPacientes] = nuevoPaciente;
                numPacientes++;

                printf("Paciente registrado exitosamente.\n");
                break;

            case 2:
                printf("\n----- Dar de alta paciente -----\n");
                printf("Número de cuarto: ");
                scanf("%d", &numeroCuarto);

                darDeAlta(pacientes, &numPacientes, numeroCuarto);
                break;

            case 3:
                printf("\n----- Registros -----\n");
                for (int i = 0; i < numPacientes; i++) {
                    printf("\n--- Registro %d ---\n", i + 1);
                    mostrarRegistro(pacientes[i]);
                }
                break;

            case 4:
                printf("\nGracias por utilizar el Hospital Azul. ¡Hasta luego!\n");
                break;

            default:
                printf("\nOpción inválida. Por favor, seleccione una opción válida.\n");
                break;
        }
    } while (opcion != 4);

    return 0;
}







