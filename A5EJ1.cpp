#include <iostream>

// a. Función que evalúa si un número es par o impar
bool esPar(int num) {
    return num % 2 == 0;
}

// b. Función main que hace el uso correcto de la función definida anteriormente
int main() {
    int numero;
    std::cout << "Introduce un numero: ";
    std::cin >> numero;
    std::cin.ignore();  // Descarta el '\n' en el búfer después de std::cin

    if(esPar(numero)) {
        std::cout << "El numero " << numero << " es par.\n";
    } else {
        std::cout << "El numero " << numero << " es impar.\n";
    }

    std::cout << "Presiona ENTER para continuar...";
    std::cin.get();  // Espera a que el usuario presione ENTER

    return 0;
}
