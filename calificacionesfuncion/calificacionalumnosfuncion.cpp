#include <stdio.h>

#define NUM_ALUMNOS 5
#define NUM_CALIFICACIONES 5

void leerCalificaciones(float calificaciones[NUM_ALUMNOS][NUM_CALIFICACIONES]) {
    int i, j;
    for (i = 0; i < NUM_ALUMNOS; i++) {
        printf("Ingrese las calificaciones del alumno %d:\n", i + 1);
        for (j = 0; j < NUM_CALIFICACIONES; j++) {
            printf("Calificación %d: ", j + 1);
            scanf("%f", &calificaciones[i][j]);
        }
    }
}

float calcularPromedio(float calificaciones[NUM_CALIFICACIONES]) {
    int i;
    float suma = 0.0;
    for (i = 0; i < NUM_CALIFICACIONES; i++) {
        suma += calificaciones[i];
    }
    return suma / NUM_CALIFICACIONES;
}

void calcularPromedios(float calificaciones[NUM_ALUMNOS][NUM_CALIFICACIONES], float promedios[NUM_ALUMNOS]) {
    int i;
    for (i = 0; i < NUM_ALUMNOS; i++) {
        promedios[i] = calcularPromedio(calificaciones[i]);
    }
}

void imprimirPromedios(float promedios[NUM_ALUMNOS]) {
    int i;
    for (i = 0; i < NUM_ALUMNOS; i++) {
        printf("El promedio del alumno %d es: %.2f\n", i + 1, promedios[i]);
    }
}

int main() {
    float calificaciones[NUM_ALUMNOS][NUM_CALIFICACIONES];
    float promedios[NUM_ALUMNOS];
    
    printf("Ingrese las calificaciones de los alumnos:\n");
    leerCalificaciones(calificaciones);
    
    calcularPromedios(calificaciones, promedios);
    
    printf("\nPromedios de los alumnos:\n");
    imprimirPromedios(promedios);
    
    return 0;
}
