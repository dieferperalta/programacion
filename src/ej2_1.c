#include <stdio.h>

int main() {
    // Declaración de variables
    float horas_trabajadas, valor_hora, sueldo;
    char nombre[];	

    printf("Ingrese el nombre del Empleado: ");
    scanf("%s", &nombre);	

    // Solicitar al usuario ingresar las horas trabajadas y el valor por hora
    printf("Ingrese la cantidad de horas trabajadas: ");
    scanf("%f", &horas_trabajadas);

    printf("Ingrese el valor por hora: ");
    scanf("%f", &valor_hora);

    // Calcular el sueldo
    sueldo = horas_trabajadas * valor_hora;

    // Mostrar el sueldo calculado
    printf("El sueldo del '%s' es: $%.2f\n", nombre, sueldo);

    return 0;
}
