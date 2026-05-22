/*
Archivo: Gato.java
Descripcion:
Clase hija que hereda de Animal.
Representa a un gato dentro del refugio
*/

public class Gato extends Animal {
    // Constructor de Gato
    public Gato(String nombre, int edad) {
        // Llamamos al constructor de la clase padre
        super(nombre, edad);
    }

    // Sobreescribimos el metodo hacerSonido()
    @Override
    public void hacerSonido() {
        System.out.println("Miau miau");
    }

}
