/*
CLASE 9 - Correcion
Ejercicio 1: Promedio de 4 notas
Autor: Jhonatan Tores
Fecha: 11 de mayo de 2026

Enunciado: Desarrolar un programa que solicite al usuario 4 notas. Calcule el promedio
y muestre si el estudiante:
    Aprueba si el promedio es mayor o igual a 14
    Supletorio si el promedio es menor a 14 pero mayor o igual a 10
    Reprueba si el promedio es menor a 10

El programa entregado tiene errores intencionales

*/

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4;
    // Cambiar el int por double
    double promedio;

    cout << "Ingrese la nota 1: ";
    cin >> n1;
    cout << "Ingrese la nota 2: ";
    cin >> n2;
    cout << "Ingrese la nota 3: ";
    cin >> n3;
    cout << "Ingrese la nota 4: ";
    cin >> n4;

    promedio = (n1 + n2 + n3 + n4) / 4.0;

    cout << "El promedio es: " << promedio << endl;
    // if(promedio >= 10)
    // supletorio
    if (promedio >= 14)
    {
        cout << "Aprueba" << endl;
    }
    else if (promedio >= 10)
    {
        cout << "Supletorio" << endl;
    }
    else
    {
        cout << "Reprueba" << endl;
    }
    return 0;
}