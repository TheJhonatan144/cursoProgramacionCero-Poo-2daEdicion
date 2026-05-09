/*
EJERCICIO 2
Calcular suma y promedio de 4 numeros usando funciones

Autor: Jhonatan Torres
Fecha: 08 de mayo de 2026

Enunciado: Desarrollar un programa en C++ que permita ingresar 4
numeros enteros.
El programa debe usar funciones para:
- leer los 4 numeros
- calcular la suma
- calcular el promedio
- mostrar los resultados

El objetivo es comprender como dividir un problema en varias funciones
con tareas clara.

*/

/*
E/P/S

ENTRADA:
    4 numeros enteros ingresados por el usuario

PROCESO:
    Leer los 4 numeros
    Calcular la suma
    Calcular el promedio
    Mostrar los resultados en pantalla

SALIDA:
    La suma de los 4 numeros.
    El promedio de los 4 numeros.

*/

/*
PSEUDOCOGICO

Algoritmo ejercicio2SumaYPromedio
    Definir n1, n2, n3, n4, suma como entero
    Definir promedio como real

    Leer los 4 numeros
    Calcular suma
    Calcular promedio
    Mostrar suma y promedio

    Funcion leerCuatroNumeros(...)
    Funcion calcularSuma(...)
    Funcion calcularPromedio(...)
    Funcion mostrarResultados(...)
FinAlgoritmo

Inicio
    leerCuatroNumeros(...)
    suma = calcularSuma(...)
    promedio = calcularPromedio(...)
    mostrarResultados(suma, promedio)
Fin
*/

#include <iostream>
using namespace std;

// Protipos o firmas de funciones
//  Colocamos solo los nombres y parametros de ls funciones que vamos
//  a usar.
void leerCuatroNumeros(int &n1, int &n2, int &n3, int &n4);
int calcularSuma(int n1, int n2, int n3, int n4);
double calcularPromedio(int suma);
void mostrarResultados(int suma, double promedio);

int main()
{
    // Declaramos variables donde se guardaran los numeros
    int n1, n2, n3, n4;

    // Declaramos variables para resultados
    int suma;
    double promedio;

    // Llamamos a la funcion que lee los 4 numeros
    leerCuatroNumeros(n1, n2, n3, n4);

    // Llamamos a la funcion que calcula la suma
    suma = calcularSuma(n1, n2, n3, n4);

    // Llamamos a la funcion que calcula el promedio
    promedio = calcularPromedio(suma);

    // Mostramos los resultados
    mostrarResultados(suma, promedio);

    return 0;
}

// Esta funcion lee 4 numeros y los guarda en las variables originales
void leerCuatroNumeros(int &n1, int &n2, int &n3, int &n4)
{
    cout << "Ingrese 4 numeros enteros: ";
    cin >> n1 >> n2 >> n3 >> n4;
}

// Esta funcion recibe 4 numeros y devuelve la suma
int calcularSuma(int n1, int n2, int n3, int n4)
{
    return n1 + n2 + n3 + n4;
}

// Esta funcion recibe la suma y devuelve el promedio
double calcularPromedio(int suma)
{
    return suma / 4.0;
}

// Esta funcion solo muestra resultados, por eso es void
void mostrarResultados(int suma, double promedio)
{
    cout << "Resultados: " << endl;
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
}
