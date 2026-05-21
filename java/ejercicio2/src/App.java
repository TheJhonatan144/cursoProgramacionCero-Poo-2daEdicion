/*
Titulo: Ejercicio2 - Constructor y metodos
Autor: Jhonatan torres
Enunciado: Crear una clase llamada Producto con los atributos nombre, precio y stock.
La clase debe tener un constructor, un metood para mostrar informacion y un 
metodo para calcular el valor del inventario.
*/

public class App {
    public static void main(String[] args) {
        Producto producto1 = new Producto("Mouse", 15.50, 10);
        Producto producto2 = new Producto("Teclado", 25.00, 5);

        System.out.println("==PRODUCTO1==");
        producto1.mostrarInfo();
        System.out.println("Valor total en inventario: " + producto1.calcularValorInventario());

        System.out.println();

        System.out.println("==PRODUCTO2==");
        producto2.mostrarInfo();
        System.out.println("Valor total en inventario: " + producto2.calcularValorInventario());

    }
}
