#include <stdio.h>

#define ALUMNOS 5
#define CALIFICACIONES 5

int main() {
    int calificaciones[ALUMNOS][CALIFICACIONES];
    float promedios[ALUMNOS];
    int i, j;

    // Solicitar las calificaciones de los alumnos
    for (i = 0; i < ALUMNOS; i++) {
        printf("Alumno %d:\n", i + 1);
        for (j = 0; j < CALIFICACIONES; j++) {
            printf("Ingrese la calificación %d: ", j + 1);
            scanf("%d", &calificaciones[i][j]);
        }
    }

    // Calcular los promedios de los alumnos
    for (i = 0; i < ALUMNOS; i++) {
        int suma = 0;
        for (j = 0; j < CALIFICACIONES; j++) {
            suma += calificaciones[i][j];
        }
        promedios[i] = (float) suma / CALIFICACIONES;
    }

    // Mostrar los promedios de los alumnos
    printf("\nPromedios:\n");
    for (i = 0; i < ALUMNOS; i++) {
        printf("Alumno %d: %.2f\n", i + 1, promedios[i]);
    }

    return 0;
}
