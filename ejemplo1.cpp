#include <iostream>

using namespace std;

// Función que retorna si un número es mayor, menor o igual a cero
string verificarSigno(int numero) {
    if (numero > 0) {
        return "mayor que cero";
    } else if (numero < 0) {
        return "menor que cero";
    } else {
        return "igual a cero";
    }
}

// Función que retorna si un número es par o impar
string verificarParidad(int numero) {
    if (numero % 2 == 0) {
        return "par";
    } else {
        return "impar";
    }
}

int main() {
    int numero;

    cout << "Introduce un numero entero: ";
    cin >> numero;

    string signo = verificarSigno(numero);
    string paridad = verificarParidad(numero);

    cout << "El numero es " << signo << " y es " << paridad << "." << endl;

    return 0;
}
