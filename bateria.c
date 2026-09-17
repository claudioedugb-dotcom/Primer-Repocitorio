#include <stdio.h>

void usar_dispositivo() {
    // 1. Variable local estática
    static int energia_bateria = 100;

    energia_bateria = energia_bateria - 20;
    printf("Energia restante: %d%%\n", energia_bateria);
}

int main() {
    // 2. Variable local normal
    int intentos = 1;

    printf("--- Simulacion de Bateria ---\n");

    usar_dispositivo(); // Primer intento
    usar_dispositivo(); // Segundo intento

    // 3. Imprimir datos del sistema
    printf("Intentos totales realizados: %d\n", intentos);
    printf("Direccion de memoria de 'intentos': %p\n", (void*)&intentos);

    return 0;
}
//holagi