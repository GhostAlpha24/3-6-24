#include <iostream>
using namespace std;

int suma(int x, int y) // Las funciones se declaran antes del main
{
    return x+y;

}
int multiplicacion(int x, int y)
{
    return x*y;
}

float division (float x, float y)
{
    return x/y;
}

int main()
{
    int a,b,c,opc; // Declaro las variables.
    cout << "Ingrese numero entero a= ";
    cin >> a;

    cout << "Ingrese numeor entero b= ";
    cin >> b;

    cout << "Elija que opcion desea \n\t1. Sumar\n\t2. Multiplicacion \n\t3. Division \n\t4. Salir \n";
    cout << "Su opcion es: ";
    cin >> opc;

    switch (opc)
    {
    case 1:
    cout << "El resultado de la suma "<< a << " + "<< b << " es "<< suma(a,b);
    break;

    case 2:
    cout  << "El resultado de la multiplicacion " << a << " * " << b << " es " << multiplicacion(a,b);
    break;

    case 3:
    cout  << "El resultado es division " << a << " / " << b << " es " << division(a,b);

    default:
    cout << "No hice nada";
    break;
    }

    return 0;

}
