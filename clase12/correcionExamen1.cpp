/*
CORRECCION DEL EXAMEN 1
Autor: Jhontan Torres
Fecha: 18 de mayo 2026

*/

#include <iostream>
#include <string>
using namespace std;

// ==========================================================
// PROTOTIPOS DE FUNCIONES
// IDEA A RESALTAR EN CLASE:
// Una solución ordenada no mete toda la lógica en main.
// Desde aquí ya se nota modularidad: cada función tiene una tarea.
// ==========================================================

int mostrarMenu(); // OPCIONAL
void registrarEstudiantes(string nombres[], float notas[], int &cantidad, bool &hayDatos);
void mostrarListado(string nombres[], float notas[], int cantidad, bool hayDatos);
void mostrarPromedio(float notas[], int cantidad, bool hayDatos);
void mostrarMayorMenor(string nombres[], float notas[], int cantidad, bool hayDatos);
void mostrarAprobadosReprobados(float notas[], int cantidad, bool hayDatos);
void buscarEstudiante(string nombres[], float notas[], int cantidad, bool hayDatos);
string estadoEstudiante(float nota);

int main()
{
    // Arreglos paralelos:
    // nombres[i] y notas[i] corresponden al mismo estudiante.
    // IDEA A RESALTAR:
    // La relación entre datos se mantiene por la misma posición.
    string nombres[20];
    float notas[20];

    // cantidad guarda cuántos estudiantes se registraron realmente.
    // OJO:
    // El arreglo tiene capacidad para 20, pero no significa que siempre se usen los 20.
    int cantidad = 0;

    // hayDatos sirve para saber si ya se ingresó información.
    // IDEA A RESALTAR:
    // Evita que el programa intente mostrar o calcular cosas cuando aún no hay registros.
    bool hayDatos = false;

    int opcion;
    // Estructura repetitiva del menú.
    // IDEA A RESALTAR:
    // El programa sigue funcionando hasta que el usuario elija salir.
    do
    {
        opcion = mostrarMenu();

        switch (opcion)
        {
        case 1:
            // Registrar estudiantes y sus notas
            registrarEstudiantes(nombres, notas, cantidad, hayDatos);
            break;
        case 2:
            // Mostrar el listado completo
            mostrarListado(nombres, notas, cantidad, hayDatos);
            break;
        case 3:
            // Calcular y mostrar el promedio
            mostrarPromedio(notas, cantidad, hayDatos);
            break;
        case 4:
            // Encontrar y mostrar nota mayor y menor
            mostrarMayorMenor(nombres, notas, cantidad, hayDatos);
            break;
        case 5:
            // Contar aprobados y reprobados
            mostrarAprobadosReprobados(notas, cantidad, hayDatos);
            break;
        case 6:
            // Buscar un estudiante por nombre
            buscarEstudiante(nombres, notas, cantidad, hayDatos);
            break;
        case 7:
            cout << "\nSaliendo del programa...\n";
            break;
        }
    } while (opcion != 7);

    return 0;
}

// ==========================================================
// FUNCION mostrarMenu
// IDEA A RESALTAR:
// Esta función no solo muestra las opciones, también valida.
// Un menú sin validación queda incompleto.
// ==========================================================

int mostrarMenu()
{
    int opcion;

    cout << "\n=========== MENU ===========\n";
    cout << "1. Registrar estudiantes y notas\n";
    cout << "2. Mostrar listado completo\n";
    cout << "3. Mostrar promedio general\n";
    cout << "4. Mostrar nota mayor y nota menor\n";
    cout << "5. Mostrar aprobados y reprobados\n";
    cout << "6. Buscar estudiante por nombre\n";
    cout << "7. Salir\n";
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    // Validación del menú.
    // ERROR FRECUENTE:
    // Dejar pasar cualquier número y que el programa entre en un estado incorrecto.
    while (opcion < 1 || opcion > 7)
    {
        cout << "Error: opcion invalida. Ingrese una opcion entre 1 y 7: ";
        cin >> opcion;
    }

    return opcion;
}

// ==========================================================
// FUNCION registrarEstudiantes
// IDEA A RESALTAR:
// Aquí se hace la carga principal del sistema.
// También se validan cantidad y notas.
// ==========================================================

void registrarEstudiantes(string nombres[], float notas[], int &cantidad, bool &hayDatos)
{
    cout << "\n--- REGISTRO DE ESTUDIANTES ---\n";
    cout << "Ingrese la cantidad de estudiantes (1 a 20): ";
    cin >> cantidad;

    // Validación de la cantidad.
    // IDEA A RESALTAR:
    // No basta con pedir el dato, hay que comprobar que esté en el rango correcto.
    while (cantidad < 1 || cantidad > 20)
    {
        cout << "Error: la cantidad debe estar entre 1 y 20.\n";
        cout << "Ingrese nuevamente la cantidad de estudiantes: ";
        cin >> cantidad;
    }

    // Recorremos solo la cantidad real de estudiantes.
    // ERROR FRECUENTE:
    // Recorrer todo el arreglo hasta 20 aunque el usuario haya ingresado menos.
    for (int i = 0; i < cantidad; i++)
    {
        cout << "\nEstudiante " << i + 1 << ":\n";
        cout << "Ingrese el nombre (sin espacios): ";
        cin >> nombres[i];

        cout << "Ingrese la nota (0 a 20): ";
        cin >> notas[i];

        // Validación de nota.
        // ERROR FRECUENTE:
        // Aceptar notas negativas o mayores a 20.
        while (notas[i] < 0 || notas[i] > 20)
        {
            cout << "Error: la nota debe estar entre 0 y 20.\n";
            cout << "Ingrese nuevamente la nota: ";
            cin >> notas[i];
        }
    }

    // Al terminar el registro activamos la bandera.
    // IDEA A RESALTAR:
    // Esto permite que las otras funciones sepan que ya hay información para trabajar.
    hayDatos = true;

    cout << "\nRegistro completado correctamente.\n";
}

// ==========================================================
// FUNCION mostrarListado
// IDEA A RESALTAR:
// Se usa cantidad para recorrer solo los datos válidos.
// También se puede reutilizar estadoEstudiante() para mostrar más información.
// ==========================================================

void mostrarListado(string nombres[], float notas[], int cantidad, bool hayDatos)
{
    // Primero verificamos si hay datos.
    // IDEA A RESALTAR:
    // No tiene sentido listar estudiantes si todavía no se ha registrado ninguno.
    if (!hayDatos)
    {
        cout << "\nNo existen estudiantes registrados todavia.\n";
        return;
    }

    cout << "\n--- LISTADO COMPLETO ---\n";
    for (int i = 0; i < cantidad; i++)
    {
        cout << i + 1 << ". " << nombres[i]
             << " - Nota: " << notas[i]
             << " - Estado: " << estadoEstudiante(notas[i]) << endl;
    }
}

// ==========================================================
// FUNCION mostrarPromedio
// IDEA A RESALTAR:
// Patrón clásico: acumular primero, dividir después.
// ==========================================================

void mostrarPromedio(float notas[], int cantidad, bool hayDatos)
{
    if (!hayDatos)
    {
        cout << "\nNo existen estudiantes registrados todavia.\n";
        return;
    }

    float suma = 0;

    // Acumulamos todas las notas.
    // ERROR FRECUENTE:
    // Dividir dentro del ciclo o no inicializar suma en 0.
    for (int i = 0; i < cantidad; i++)
    {
        suma += notas[i];
    }

    float promedio = suma / cantidad;

    cout << "\n--- PROMEDIO GENERAL ---\n";
    cout << "El promedio general es: " << promedio << endl;
}

// ==========================================================
// FUNCION mostrarMayorMenor
// IDEA A RESALTAR:
// Para hallar mayor y menor se toma como referencia el primer elemento.
// También se guardan las posiciones.
// ==========================================================

void mostrarMayorMenor(string nombres[], float notas[], int cantidad, bool hayDatos)
{
    if (!hayDatos)
    {
        cout << "\nNo existen estudiantes registrados todavia.\n";
        return;
    }

    // Inicializamos con el primer dato real.
    // IDEA A RESALTAR:
    // Esto es más correcto que inventarse un valor inicial sin mirar el arreglo.
    float mayor = notas[0];
    float menor = notas[0];

    // Guardamos la posición de la nota mayor y menor.
    // Esto permite luego mostrar el nombre del estudiante.
    int posMayor = 0;
    int posMenor = 0;

    // Comenzamos desde i = 1 porque la posición 0 ya fue tomada como referencia.
    for (int i = 1; i < cantidad; i++)
    {
        if (notas[i] > mayor)
        {
            mayor = notas[i];
            posMayor = i;
        }

        if (notas[i] < menor)
        {
            menor = notas[i];
            posMenor = i;
        }
    }

    cout << "\n--- NOTA MAYOR Y NOTA MENOR ---\n";
    cout << "Nota mayor: " << mayor << " - Estudiante: " << nombres[posMayor] << endl;
    cout << "Nota menor: " << menor << " - Estudiante: " << nombres[posMenor] << endl;
}

// ==========================================================
// FUNCION mostrarAprobadosReprobados
// IDEA A RESALTAR:
// Este es un patrón de conteo con condición.
// Muy importante en ejercicios de arreglos.
// ==========================================================

void mostrarAprobadosReprobados(float notas[], int cantidad, bool hayDatos)
{
    if (!hayDatos)
    {
        cout << "\nNo existen estudiantes registrados todavia.\n";
        return;
    }

    int aprobados = 0;
    int reprobados = 0;

    for (int i = 0; i < cantidad; i++)
    {
        // Regla del problema:
        // nota >= 14 significa aprobado.
        if (notas[i] >= 14)
        {
            aprobados++;
        }
        else
        {
            reprobados++;
        }
    }

    cout << "\n--- APROBADOS Y REPROBADOS ---\n";
    cout << "Cantidad de aprobados: " << aprobados << endl;
    cout << "Cantidad de reprobados: " << reprobados << endl;
}

// ==========================================================
// FUNCION buscarEstudiante
// IDEA A RESALTAR:
// Aquí se usa búsqueda secuencial porque el arreglo no está ordenado.
// ==========================================================

void buscarEstudiante(string nombres[], float notas[], int cantidad, bool hayDatos)
{
    if (!hayDatos)
    {
        cout << "\nNo existen estudiantes registrados todavia.\n";
        return;
    }

    string buscado;
    bool encontrado = false;

    cout << "\n--- BUSCAR ESTUDIANTE ---\n";
    cout << "Ingrese el nombre del estudiante a buscar: ";
    cin >> buscado;

    // Búsqueda secuencial:
    // Comparamos uno por uno hasta encontrar coincidencia.
    for (int i = 0; i < cantidad; i++)
    {
        if (nombres[i] == buscado)
        {
            cout << "\nEstudiante encontrado.\n";
            cout << "Nombre: " << nombres[i] << endl;
            cout << "Nota: " << notas[i] << endl;
            cout << "Estado: " << estadoEstudiante(notas[i]) << endl;

            encontrado = true;

            // IDEA A RESALTAR:
            // break corta el ciclo apenas ya encontramos el estudiante.
            break;
        }
    }

    if (!encontrado)
    {
        cout << "\nEl estudiante no fue encontrado.\n";
    }
}

// ==========================================================
// FUNCION estadoEstudiante
// IDEA A RESALTAR:
// Aunque es pequeña, evita repetir lógica.
// Si una regla se usa varias veces, conviene ponerla en una funcion
string estadoEstudiante(float nota)
{
    if (nota >= 14)
    {
        return "Aprobado";
    }
    else
    {
        return "Reprobado";
    }
}