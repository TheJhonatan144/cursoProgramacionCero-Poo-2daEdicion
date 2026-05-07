/*
EJERCICIO 2
Clase 6 - Ejercicio2: Acumulador con for

Autor: Jhonatan Torres
Fecha: 04 de mayo del 2026

Enunciado: Elaborar un programa en C++ que solicite al usario 5 numeros enteros, calcule la suma total
de esos numeros usando un bucle for.
Al final, programa debe mostrar el resultado acumulado

E/P/S

Entrada:
    Cinco numeros enteros ingrsados por el usuario

Proceso:
    Incializar una variable suma en 0
    Repetir 5 veces:
        pedir un numero
        leer el numero
        sumar ese valor al acumulador

Al final, mostrar la suma total

Salida:
    La suma total de los 5 numeros ingrsados.

*/

/*
Proceso SumarCincoNumeros
    Definir i, numero, suma Como Entero

    suma = 0

    Para i = 1 hata 5 Hacer
        Escribir "Ingrese el numero", i, ":"
        Leer numero
        suma = suma + numero
    FinPara

    Escribir "La suma total es: ", suma
FinProceso

*/

#include <iostream>
using namespace std;

int main()
{
    // Declaramos las variables necesarias
    int i, numero, suma;

    // Inicializar el acumulador en 0
    suma = 0;

    // Usamos un for porque ya sabemos que se repetira 5 veces
    for (i = 1; i <= 5; i++)
    {
        // Pedimos cada numero al usuario
        cout << "Ingrse el numero" << i << ": ";
        cin >> numero;

        // Acumulamos el numero ingrsado en la suma total.
        suma = suma + numero;
    }
    // Mostrar la suma final
    cout << "La suma total es: " << suma << endl;

    return 0;
}