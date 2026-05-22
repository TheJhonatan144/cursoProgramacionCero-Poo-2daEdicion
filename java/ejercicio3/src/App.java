/*
Ejercicio 3 - Encapsulamieto, getters, setters y validacion
Autor: Jhonatan Torres
Enunciado: Crear una clase llamada CuentaBancaria con los atributos privados titulas
 y saldo.
 La clase debe permitir consultar y modificar sus datos de forma controlada
 usando getters, setters y metodos con validacion.
*/

public class App {
    public static void main(String[] args) {
        // Creamos una cuenta bancaria con titular y saldo inicial
        CuentaBancaria cuenta1 = new CuentaBancaria("Jhonatan", 100.0);

        System.out.println("===DATOS INCIALES===");
        System.out.println("Titular: " + cuenta1.getTitular());
        System.out.println("Saldo: " + cuenta1.getSaldo());

        System.out.println();

        cuenta1.setTitular("Paul");
        System.out.println("Nuevo titular: " + cuenta1.getTitular());

        System.out.println();

        cuenta1.depositar(50.0); // Realizamos un deposito valido
        cuenta1.retirar(30.0); // realizamos un retiro valido
        cuenta1.retirar(200.0); // Intenamos realizar un retiro invalido porque supera al saldo
        cuenta1.depositar(-10); // Intentamos realizar un deposito invalido

        System.out.println();

        System.out.println("===DATOS FINALES===");
        System.out.println("Titular: " + cuenta1.getTitular());
        System.out.println("Saldo: " + cuenta1.getSaldo());

    }
}
