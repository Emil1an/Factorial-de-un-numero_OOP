#include <iostream>

int main() {
    // Entrada del usuario
    int numero;
    std::cout << "Ingrese un n�mero entero no negativo: ";
    std::cin >> numero;

    // Validar si el n�mero es no negativo
    if (numero < 0) {
        std::cout << "Ingrese un n�mero no negativo." << std::endl;
    } else {
        // Calcular el factorial
        int numeroFactorial = 1;
        for (int i = 1; i <= numero; ++i) {
            numeroFactorial *= i;
        }

        // Mostrar el resultado
        std::cout << "El factorial de " << numero << " es " << numeroFactorial << std::endl;
    }

    return 0;
}

