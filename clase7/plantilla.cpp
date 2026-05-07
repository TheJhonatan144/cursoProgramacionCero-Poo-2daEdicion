/*
Aqui quiero que se queden con esta idea:

* el arrelgo guarda datos
* el indice nos dice en que posicion estamos
* el for nos ayuda a movernos por todas las posiciones

*/

/*
PLANTILLA BASE

*/

#include <iostream>
using namespace std;

int main()
{
    int datos[5]; // Areglo de 5 enteros
    int i;        // Varibale para recorrer posiciones

    // carga de datos

    for (i = 0; i < 5; i++)
    {
        cin >> datos[i];
        /*
        primera vuelta:
        datos[0] -> vamos a guardar un dato en el espacio de indice 0
                    primera posicion

        segunda vuelta:
        datos[1] ->
                    segunda posicion
        */
    }

    // Impresion de datos
    for (i = 0; i < 5; i++)
    {
        cout << datos[i] << endl;
    }

    return 0;
}