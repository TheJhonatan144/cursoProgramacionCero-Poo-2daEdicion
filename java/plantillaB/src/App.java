/*
Titulo: Plantilla B - Creacion de objetos 
Autor: Jhonatan Torres
Enunciado: Crear un objeto de tipo Persona, asginar valores a sus atributos 
y mostrar su informacion en clase.


*/

public class App { // Clase principal del programa
    public static void main(String[] args) throws Exception { // Metodo principal
        Persona persona1 = new Persona(); // Aqui creamos un objeto de tipo Persona llamado persona1

        persona1.nombre = "Carlos"; // Asignamos un valor al atributo nombre del objeto
        persona1.edad = 21; // Asignamos un valor al atributo edad del objeto

        System.out.println("Nombre: " + persona1.nombre); // Mostramos el nombre en consola
        System.out.println("Edad: " + persona1.edad); // Mostramos la edad en consola
    }
}
