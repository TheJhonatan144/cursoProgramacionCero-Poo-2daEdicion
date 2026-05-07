/*
EJERCICIO 3
Clase 6 - Ejercicio3: Menu repetitivo do while

Autor: Jhonatan Torres
Fecha: 04 de mayo del 2026

Enunciado: Elaborar un programa en C++ que muestre un menu repetitivo conlas siguientes opciones:
    1. Sumar dos numeros
    2. Mostrar la tabla de multiplicar de un numero
    3. Salir

El progrmaa de repetirse hasta que el usuario elija la opcion 3
Si el usuario ingresa una opcion invalida, el programa debe mostrar un mensaje de error y volver a mostrar el menú.


E/P/S

Entrada
    Una opcion del menu
    Segun la opciones elegida
        dos numeros para sumar
        o un numero para mostrar su tabla de multiplicar.

Proceso
    Mostrar el menu
    Leer la opcion
    Si la opcion es 1:
        pedir dos numeros
        sumarlos
        mostrar el resultado
    Si la opcion es 2
        pedir un numero
        mostrar su table del 1 al 10
    Si la opcion es 3:
        mostrar un mensaje de salida
    Si la opcion es invalida:
        mostrar un mesnaje de error
    Repetir mientras la opcion sea diferente de 3

Salida
    Resultado de la suma
    tabla de multiplicar
    mensaje de salida
    mensaje de error por opcion invalida.
*/

/*
PSEUDOCODIGO

Proceso MenuRepetivo
    Definir opcion, num1, num2, num3, numero, i como Entero

    Hacer
        Escribir "===MENU==="
        Escribir "1. Suma dos numeros"
        Escribir "2. Mostrar tabla de Multiplicar"
        Escribir "3. Salir"
        EScribir " Selecione la opcion: "
        Leer opcion

        Si opcion = 1 Entonces
            escribir "Ingrese el primer numero: "
            Leer num1
            escribir "Ingrese el segundo numero: "
            Leer num2

            suma = num1 + num2

            Esribir "La suma es: ", suma
        SiNo
            Si opcion = 2 Entonces
                Escribir "Ingrese un numero: "
                Leer numero

                Para i=1 Hasta 10 Hacer
                    Escribir numero, " x ", i, " = ", numero * i
                FinParA
            SiNO
                Si opciones = 3 Entonces
                    Escribir "Saliendo del programa..."
                SiNO
                    Escribir "Error:opcion invalida. Intente nuevamente."
                FinSi
            finSi
        FinSi
    Mientras opcion != 3
FinProceso
*/

#include <iostream>
using namespace std;

int main()
{
    // Declaramos las variables necesarias
    int opcion, num1, num2, suma, numero, i;

    // Usamos do while porque queremos que el menu se mueste al menos una vez
    do
    {
        cout << "==== MENU ====" << endl;
        cout << "1. Suma dos numeros" << endl;
        cout << "2. Mostrar tabla de Multiplicar" << endl;
        cout << "3. Salir" << endl;
        cout << "Selecione una opcion: ";
        cin >> opcion;

        // Evaluamos la opcion elegida
        if (opcion == 1)
        {
            // Pedimos dos numeros para sumarlos
            cout << "Ingrese el primer numero: ";
            cin >> num1;

            cout << "Ingrese el segundo numero: ";
            cin >> num2;

            // Realizamos la suma
            suma = num1 + num2;

            // Mostrar los resultado
            cout << "La suma es: " << suma << endl;
        }
        else if (opcion == 2)
        {
            // Pedimos un numero para mostrar su tabla de multiplicar
            cout << "Ingrese un numero: ";
            cin >> numero;

            // Mostramos la tabla del 1 al 10 usando el for
            for (i = 1; i <= 10; i++)
            {
                cout << numero << " x " << i << " = " << numero * i << endl;
            }
        }
        else if (opcion == 3)
        {
            // Mostramos un mensaje de salida
            cout << "Saliendo del programa..." << endl;
        }
        else
        {
            // Si la opcion no esta en el rango valido, mostramos un error
            cout << "Error: opcion invalida. Intente nuevamente" << endl;
        }
        // El menu seguira repitiendose mientras la opcion sea diferente de 3
    } while (opcion != 3);

    return 0;
}