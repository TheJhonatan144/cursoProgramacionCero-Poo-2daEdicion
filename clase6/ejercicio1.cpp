/*
EJERCICIO 1
Clase 6 - Ejercicio1: Contador con while

Autor: Jhonatan Torres
Fecha: 04 de mayo del 2026

Enunciado: Elaborar un programa en C++ que solicite al usuario un numero entero positivo N
y muestre en pantalla los numeros desde 1 hasta N usando un bucle while.
Si el usuario ingresa un valor menor o igual a 0, el programa debe mostrar un mensaje de error y terminar.

E/P/S

Entrada:
    Un numero entero positivo N

Proceso:
    Leer el valor de N
    Verificar si N es mayor que 0
    Si N no es mayor, mostramos un mensaje de error
    Si N es menor, usamos un contador que incie en 1
    Mostrar el valor del contador
    Aumentar el contador en 1 en cada vuelta
    Repetir mientras el contador sea menor o igual a N

Salida:
    Los numeros desde 1 hasta N
    Mostrar un mensaje de error si el numero ingresado no es valido.

*/

/*
/*
EJERCICIO 1
Clase 6 - Ejercicio1: Contador con while

Autor: Jhonatan Torres
Fecha: 04 de mayo del 2026

Enunciado: Elaborar un programa en C++ que solicite al usuario un numero entero positivo N
y muestre en pantalla los numeros desde 1 hasta N usando un bucle while.
Si el usuario ingresa un valor menor o igual a 0, el programa debe mostrar un mensaje de error y terminar.

E/P/S

Entrada:
    Un numero entero positivo N

Proceso:
    Leer el valor de N
    Verificar si N es mayor que 0
    Si N no es mayor, mostramos un mensaje de error
    Si N es menor, usamos un contador que incie en 1
    Mostrar el valor del contador
    Aumentar el contador en 1 en cada vuelta
    Repetir mientras el contador sea menor o igual a N

Salida:
    Los numeros desde 1 hasta N
    Mostrar un mensaje de error si el numero ingresado no es valido.

*/

/*
Pseudocodigo

Proceso MostrarNumerosHastaN
    Definir N, contador como Entero

    Escribir "Ingrese un numero entero positivo: "
    Leer N

    Si N <= 0 Entonces
        Escribir "Error: el numero debe ser mayor que 0"
    SiNo
        contador = 1

        Mientras contador <= N Hacer
            Escribir contador
            contador = contador + 1
        FinMientras
    FinSi
FinProceso

*/

#include <iostream>
using namespace std;

int main()
{
    // Declaramos las variables necesarias
    int N, contador;

    // Pedimos al usuario un numero entero positivo
    cout << "Ingrese el numero entero positivo: ";
    cin >> N;

    // Validamos que el numero sea mayor que 0
    if (N <= 0)
    {
        // Si el numero no es valido, mostramos el mensaje de error
        cout << "Error: el numero debe ser mayor que 0." << endl;
    }
    else
    {
        // Inicializar el contador en 1
        contador = 1;

        // Repetirmos mientras el conador sea menor o igual a N
        while (contador <= N)
        {
            // Mostramos el valor actual del contador
            cout << contador << endl;

            // Aumetamos el contador en 1 para evitar bucle infinito
            contador = contador + 1;
        }
    }
    return 0;
}