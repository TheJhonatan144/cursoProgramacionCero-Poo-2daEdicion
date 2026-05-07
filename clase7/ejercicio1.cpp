/*
Arreglos 1D: carga y recorrido
CLASE 7 - EJERCICIO1

Autor: Jhonatan Torres
Fecha: 06 de mayo de 2026

Enunciado: Realizar un programa en C++ que permita ingresar 5 notas enteras en un arreglo
Luego, el programa debe mostrar todas las notas ingresadas, una por una, indicando tambien
la posicion en la que fueron guardadas.

*/

/*
PSEUDOCODIGO

Proceso ejercicio1Notas
    Definir notas como Entero
    Definir i como Entero
    Dimension notas[5]

    Para i = 0 Hasta 5 Hacer
        Escribir "Ingrese la nota ", i+1, ": "
        Leer notas[i]
    FinPara

    Escribir "Notas registradas: "

    Para i = 0 Hasta 4 Hacer
        Escribir "Posicion ", i, ": ", notas[i]
    FinPara
FinProceso
*/

#include <iostream>
using namespace std;

int main()
{
    // Declaramos un arreglo de 5 enteros para guardar las notas
    int notas[5];

    // Variables que usaremos para recorrer el arreglo
    int i;

    // CARGA DE DATOS

    // Recorremos las 5 posiciones del arreglo
    for (i = 0; i < 5; i++)
    {
        // Pedimos al usuario una nota
        cout << "Ingrese la nota " << i + 1 << ": ";

        // Guardamos la nota en la posicion i del arreglo
        cin >> notas[i];
    }

    cout << endl;
    cout << "Notas registradas:" << endl;

    // IMPRESION DE DATOS

    // Volvemos a recorrer el arreglo para mostrar lo que guardamos
    for (i = 0; i < 5; i++)
    {
        // Mostramos la posicion y el valor guardado en esa posicion
        cout << "Posicion " << i << ": " << notas[i] << endl;
    }

    return 0;
}