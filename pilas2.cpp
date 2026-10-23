#include <stdio.h>
#define MAX 10

int main() {
    int pila[MAX];   // arreglo para la pila
    int tope = -1;   // posición inicial (vacía)

    // Apilar 10 platos
    for (int i = 0; i < MAX; i++) {
        tope++;
        pila[tope] = i + 1; // número de plato
        printf("Apilado plato %d\n", pila[tope]);
    }

    printf("\n--- Retirando platos ---\n");

    // Desapilar todos los platos
    while (tope >= 0) {
        printf("Retirado plato %d\n", pila[tope]);
        tope--;
    }

    return 0;
}
