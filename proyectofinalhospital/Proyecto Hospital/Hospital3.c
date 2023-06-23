#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PATIENTS 100

struct Patient {
    char nombre[50];
    int edad;
    char genero[10];
    int peso;
    int estatura;
    int cuarto;
    int num_medicamento;
    int hora_medicamento;
};
struct Hospital {
    struct Patient pacientes[MAX_PATIENTS];
    int contador;
};
void RegistrarPaciente(struct Hospital *hospital) {
    if (hospital->contador >= MAX_PATIENTS) {
        printf("El hospital ha alcanzado su capacidad m�xima de pacientes.\n");
        return;
    }

    struct Patient newPatient;

    printf("Ingrese el nombre del paciente: ");
    fgets(newPatient.name, sizeof(newPatient.name), stdin);
    newPatient.name[strcspn(newPatient.name, "\n")] = '\0'; // Elimina el salto de l�nea

    printf("Ingrese la edad del paciente: ");
    scanf("%d", &newPatient.age);
    fflush(stdin);

    printf("Ingrese el g�nero del paciente: ");
    fgets(newPatient.gender, sizeof(newPatient.gender), stdin);
    newPatient.gender[strcspn(newPatient.gender, "\n")] = '\0'; // Elimina el salto de l�nea

    hospital->patients[hospital->count] = newPatient;
    hospital->count++;

    printf("Paciente registrado con �xito.\n");
}

