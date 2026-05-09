/*
EJERCICIO 1

Autor: Jhonatan Torres
Fecha: 08 de mayo de 2026

*/

#include <iostream>
using namespace std;

// FUNCION PARA MODULARIZAR EL PROGRAMA
void aumentar(int x)
{
    x = x + 1;
    cout << "Dentro de la funcion, x vale: " << x << endl;
}

// ESTA ES LA FUNCION PRINCIPAL
int main()
{
    int a = 10;

    aumentar(a);

    cout << "Fuera de la funcion, a vale: " << a << endl;

    return 0;
}
