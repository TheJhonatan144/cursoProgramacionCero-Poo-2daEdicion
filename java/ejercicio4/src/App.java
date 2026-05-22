/*
Ejercicio 4 
Autor: Jhonatan Torres
Fecha: 21 de mayo de 2026

Enunciado: Desarrollar un programa en Java que permita representar anilaes dentro
de un refugio 
El sistema debe contar con:
    una clase base llamada Animal 
    dos subclases llamadas Perro y Gato 
    un metodo llamado hacerSonido() que se comporte de manera distinta en cada subclase
    una coleccion que almacene varios animales 
    un recorrrido que muestre la informacion y el sonido de cada animal

*/

import java.util.ArrayList;

public class App {
    public static void main(String[] args) throws Exception {
        // Creamos una lista de tipo Animal
        // Esto es importante porque aqui podremos guardar objetos Perro y Gato gracias
        // a la herencia.
        ArrayList<Animal> animales = new ArrayList<>();

        // Agregamos objetos de distintas subclases
        animales.add(new Perro("Firulais", 3));
        animales.add(new Gato("Toby", 2));
        animales.add(new Perro("Osito", 5));

        // Recorremos la lista
        for (Animal animal : animales) {
            animal.mostrarInfo();
            animal.hacerSonido();
            System.out.println("----------------------");
        }
    }

}
