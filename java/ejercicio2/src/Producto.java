/*
Titulo: Ejercicio2 - Constructor y metodos
Autor: Jhonatan torres
Enunciado: Crear una clase llamada Producto con los atributos nombre, precio y stock.
La clase debe tener un constructor, un metood para mostrar informacion y un 
metodo para calcular el valor del inventario.
*/

public class Producto {
    // Definimos los atributos de nuestra clase producto
    String nombre;
    double precio;
    int stock;

    public Producto(String nombre, double precio, int stock) { // Cosntructor para crear el objeto con valores iniciales
        this.nombre = nombre;
        this.precio = precio;
        this.stock = stock;

    }

    // Definimos los METODOS
    public void mostrarInfo() { // Metodo que muestra la informacion del producto en consola
        System.out.println("Nombre: " + nombre);
        System.out.println("Precio: " + precio);
        System.out.println("Stock: " + stock);
    }

    public double calcularValorInventario() { // Metodo que calcula el valor total del inventario del prouducto
        return precio * stock; // Retornamos el resultado de multiplicar prcio por el stock
    }

}
