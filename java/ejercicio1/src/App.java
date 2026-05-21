/*
Titulo: Ejercicio1 - Clase, objeto y atributo
Autor: Jhonatan Torres
Enunciado: Crear una clase llamada Estudiante con los atributos nombre, edad y carrera.
Luego, desde la clase prinicpal, crear dos objetos y mostrar sus datos en consola.
*/

public class App {
    public static void main(String[] args) {
        Estudiante estudiante1 = new Estudiante(); // Aqui creamo el primer objeto de tipo Estudiante

        // Asignamos valores a mi primero objeto de la clase Estudiante
        estudiante1.nombre = "Ana";
        estudiante1.edad = 20;
        estudiante1.carrera = "Software";

        Estudiante estudiante2 = new Estudiante(); // Aqui creamos el segundo objeto de tipo Estudiante

        estudiante2.nombre = "Luis";
        estudiante2.edad = 22;
        estudiante2.carrera = "Computacion";

        System.out.println("==ESTUDIANTE 1 ==");
        System.out.println("Nombre: " + estudiante1.nombre);
        System.out.println("Edad: " + estudiante1.edad);
        System.out.println("Carrera: " + estudiante1.carrera);

        System.out.println();

        System.out.println("==ESTUDIANTE 2 ==");
        System.out.println("Nombre: " + estudiante2.nombre);
        System.out.println("Edad: " + estudiante2.edad);
        System.out.println("Carrera: " + estudiante2.carrera);
    }
}
