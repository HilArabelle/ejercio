#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PATIENTS 100

struct Patient {
    char name[50];
    int age;
    char gender[10];
};

struct Hospital {
    struct Patient patients[MAX_PATIENTS];
    int count;
};

void registerPatient(struct Hospital *hospital) {
    if (hospital->count >= MAX_PATIENTS) {
        printf("El hospital ha alcanzado su capacidad máxima de pacientes.\n");
        return;
    }

    struct Patient newPatient;

    printf("Ingrese el nombre del paciente: ");
    fgets(newPatient.name, sizeof(newPatient.name), stdin);
    newPatient.name[strcspn(newPatient.name, "\n")] = '\0'; // Elimina el salto de línea

    printf("Ingrese la edad del paciente: ");
    scanf("%d", &newPatient.age);
    fflush(stdin);

    printf("Ingrese el género del paciente: ");
    fgets(newPatient.gender, sizeof(newPatient.gender), stdin);
    newPatient.gender[strcspn(newPatient.gender, "\n")] = '\0'; // Elimina el salto de línea

    hospital->patients[hospital->count] = newPatient;
    hospital->count++;

    printf("Paciente registrado con éxito.\n");
}

void dischargePatient(struct Hospital *hospital) {
    int patientIndex;
    printf("Ingrese el índice del paciente a dar de alta: ");
    scanf("%d", &patientIndex);
    fflush(stdin);

    if (patientIndex < 0 || patientIndex >= hospital->count) {
        printf("Índice de paciente inválido.\n");
        return;
    }

    for (int i = patientIndex; i < hospital->count - 1; i++) {
        hospital->patients[i] = hospital->patients[i + 1];
    }

    hospital->count--;

    printf("Paciente dado de alta correctamente.\n");
}

void printPatient(struct Patient patient) {
    printf("Nombre: %s\n", patient.name);
    printf("Edad: %d\n", patient.age);
    printf("Género: %s\n", patient.gender);
    printf("--------------------\n");
}

void viewPatients(struct Hospital hospital) {
    printf("LISTA DE PACIENTES\n");
    printf("--------------------\n");

    for (int i = 0; i < hospital.count; i++) {
        printf("Paciente %d:\n", i);
        printPatient(hospital.patients[i]);
    }
}

int main() {
    struct Hospital azulHospital;
    azulHospital.count = 0;

    int option;

    do {
        printf("HOSPITAL AZUL\n");
        printf("1. Registrar paciente\n");
        printf("2. Dar de alta paciente\n");
        printf("3. Revisar archivos de pacientes\n");
        printf("4. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &option);
        fflush(stdin);

        switch (option) {
            case 1:
                registerPatient(&azulHospital);
                break;
            case 2:
                dischargePatient(&azulHospital);
                break;
            case 3:
                viewPatients(azulHospital);
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Intente nuevamente.\n");
                break;
        }
    } while(option != 4);

    return 0;
}






