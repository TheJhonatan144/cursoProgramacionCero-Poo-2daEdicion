/*
Arreglos 1D: busqueda secuencial en arreglos
CLASE 7 - EJERCICIO2

Autor: Jhonatan Torres
Fecha: 06 de mayo de 2026

Enunciado: Realizar un programa en C++ que permita ingresar 6 numeros enteros en un arreglo
Luego, pedir al usuario un numero adicional para buscar dentro del arreglo.

El programa debe indicar:
    si el numero fue encontrado
    y en que posicion se encuentra

Si el numero no existe en el arreglo, debe mostrar un mensaje indicando que no fue
encontrado.
*/

/*
PSEUDOCODIGO

Proceso ejercicio2BusquedaSecuencial
    Definir numeros como Entero
    Defirnir i, buscado, posicion como Entero
    Definir encontrado como Logico
    Dimension numeros[6]

    Para i=0 Hasta 5 Hacer
        Escribir "Ingrese el numero", i+1, ": "
        Leer numeros[i]
    FinPara

    Escribir "Ingrese el numero que desea buscar: "
    Leer buscado

    encontrado = falso
    posicion = -1

    Para i = 0 Hasta 5 Hacer
        Si numeros[i] = buscado Y encontrado = Falso Entonces
            encontrado = Verdadero
            posicion = i
        FinSi
    FinPara

    Si encontrado = Verdadero Entonces
        Escribir "Numero encontrado en la posicion: ", posicion
    SiNo
        Escribir "Numero no encontrado en el arreglo"
    FinSi

FinProceso

*/

#include <iostream>
using namespace std;

int main()
{
    // Arreglo donde vamos a guardar 6 numeros enteros
    int numeros[6];

    // Variable para recorrer el arreglo
    int i;

    // Variable donde guardaremos el numero que el usuario quiere buscar
    int buscado;

    // Variable para guardar la posicion donde se encontro el numero
    int posicion = -1;

    // Variable de tipo bandera: nos ayuda a saber si encontramos o no el numero
    bool encontrado = false;

    // CARGA DE DATOS

    for (i = 0; i < 6; i++)
    {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << endl;

    // Pedimos el numero que se desea buscar
    cout << "Ingrese el numero que desea buscar: ";
    cin >> buscado;

    // BUSQUEDA SECUENCIAL

    // recorremos el arreglo posicion por posicion
    for (i = 0; i < 6; i++)
    {
        // Comparamos si el valor guardado en la posicion i es igual al numero
        //  que queremos buscar
        if (numeros[i] == buscado && encontrado == false)
        {
            encontrado = true;

            // guardamos la posicion donde lo encontramos
            posicion = i;
        }
    }
    cout << endl;

    // RESULTADO FINAL

    if (encontrado == true)
    {
        cout << "Numero encontrado en la posicion: " << posicion << endl;
    }
    else
    {
        cout << "Numero no encontrado en el arreglo." << endl;
    }

    return 0;
}