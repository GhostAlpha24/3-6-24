#include <iostream>
using namespace std;

void sumar(int arr[], int size) {
    int resultado = 0;
    for(int i = 0; i < size; ++i) {
        resultado += arr[i];
    }
    cout << "El resultado de la suma es: " << resultado << endl;
}

void restar(int arr[], int size) {
    int resultado = arr[0];
    for(int i = 1; i < size; ++i) {
        resultado -= arr[i];
    }
    cout << "El resultado de la resta es: " << resultado << endl;
}

void multiplicar(int arr[], int size) {
    int resultado = 1;
    for(int i = 0; i < size; ++i) {
        resultado *= arr[i];
    }
    cout << "El resultado de la multiplicacion es: " << resultado << endl;
}

void dividir(int arr[], int size) {
    if (size < 2) {
        cout << "No se puede realizar la division con menos de dos elementos." << endl;
        return;
    }
    float resultado = static_cast<float>(arr[0]);
    for(int i = 1; i < size; ++i) {
        if(arr[i] == 0) {
            cout << "Error: Division por cero no permitida." << endl;
            return;
        }
        resultado /= arr[i];
    }
    cout << "El resultado de la division es: " << resultado << endl;
}

int main() {
    int operacion;
    const int size = 2; // Puedes cambiar este valor para manejar más de dos operandos si es necesario.
    int arr[size];

    cout << "Calculadora Basica" << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "Seleccione una operacion (1-4): ";
    cin >> operacion;

    cout << "Ingrese los numeros separados por espacio: ";
    for(int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    switch(operacion) {
        case 1:
            sumar(arr, size);
            break;
        case 2:
            restar(arr, size);
            break;
        case 3:
            multiplicar(arr, size);
            break;
        case 4:
            dividir(arr, size);
            break;
        default:
            cout << "Operacion no valida" << endl;
    }

    return 0;
}
