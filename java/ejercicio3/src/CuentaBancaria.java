/*
Ejercicio 3 - Encapsulamieto, getters, setters y validacion
Autor: Jhonatan Torres
Enunciado: Crear una clase llamada CuentaBancaria con los atributos privados titulas
 y saldo.
 La clase debe permitir consultar y modificar sus datos de forma controlada
 usando getters, setters y metodos con validacion.

*/

public class CuentaBancaria {
    private String titular; // Atributo privado para guardar el nombre del titular.
    private double saldo; // Atributo privado para guardar saldo disponible

    public CuentaBancaria(String titular, double saldo) {
        this.titular = titular; // Guardamos el nombre del titular recibido.
        if (saldo >= 0) {
            this.saldo = saldo;
        } else {
            this.saldo = 0; // colocamos el saldo en cero para evitar valores negativos
        }
    }

    public String getTitular() { // Getter para consultar el nombre del titular
        return titular; // Retornamos el valor del atributo titular
    }

    public double getSaldo() {
        return saldo; // Retornamos el valor del atributo saldo
    }

    public void setTitular(String titular) {
        if (titular != null && !titular.isEmpty()) { // null != 0. Null que no exista dato en un atributo
            this.titular = titular;
        } else {
            System.out.println("Error, el titular no puede estar vacio");
        }
    }

    public void depositar(double monto) {
        if (monto > 0) {
            saldo = saldo + monto;
            System.out.println("Deposito realizado correctamente.");
        } else {
            System.out.println("Error: el monto a depositar debe ser mayor que cero");
        }

    }

    public void retirar(double monto) {
        if (monto > 0 && monto <= saldo) {
            saldo = saldo - monto;
            System.out.println("Retiro realizado correctamente");
        } else {
            System.out.println("Error: no se puede retirar ese monto");
        }
    }
}
