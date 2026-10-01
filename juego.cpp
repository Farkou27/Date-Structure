#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Inicializar el generador de números aleatorios
    srand(time(0));
    int numeroSecreto = rand() % 100 + 1; // Número entre 1 y 100
    int intento = 0;
    int intentosTotales = 0;

    cout << "¡Bienvenido al juego Adivina el Número!\n";
    cout << "He pensado en un número entre 1 y 100. ¿Puedes adivinar cuál es?\n\n";

    // Bucle principal del juego
    do {
        cout << "Introduce tu suposición: ";
        cin >> intento;
        intentosTotales++;

        if (intento > numeroSecreto) {
            cout << "El número es más pequeño. ¡Prueba de nuevo!\n";
        } else if (intento < numeroSecreto) {
            cout << "El número es más grande. ¡Prueba de novo!\n";
        } else {
            cout << "\n¡Felicidades! ¡Adivinaste el número!\n";
            cout << "Lo lograste en " << intentosTotales << " intentos.\n";
        }

    } while (intento != numeroSecreto);

    return 0;
}
