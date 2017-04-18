package juego;
// se importa paquete JOptionPane para dibujar un cuadro de dialogo en pantalla
// que muestre información o para llenar información 
import javax.swing.JOptionPane;

public class Juego {

    public static void main(String[] args) {
       // se crea un objeto de la clase logica (Instanciación) 
        logica obj = new logica();
       // Se crean dos variables de tipo string, una para saber si el usuario desea salir del juego
       // Y otra para pedir el nombre de el mismo
        String salir, nombre;
       // Se le asigna a nombre el valor ingresado por pantalla
        nombre = JOptionPane.showInputDialog(null, "Cual Es Tu Nombre ?");
       // Se muestra un mensaje de bienvenida con su nombre
        JOptionPane.showMessageDialog(null, "*********************************\n"+
                                            "*     BIENVENIDO "+nombre+"     *\n"+
                                            "*********************************\n");
       // Se crea un ciclo DO-WHILE 
        do {
       // Se llama al metodo Juego() mediante la instanciación
            obj.Juego();
       // A la variable salir se le asignara el valor ingresado en pantalla
       // Este dira si el usuario desea salir o no del juego
            salir = JOptionPane.showInputDialog(null, "Deseas Salir ? YES/NOT");   
            
        }
        // Se  repetira el juego mientras que el usuario no escriba YES en la peticion
        // con el equalIngnoreCase podemos ignorar las mayusculas, ¿ que quiere decir esto ?
        // que no importa si el usuario escribe yes ó YES con el Ignore case no nos limitamos a las mayusculas
        while (!salir.equalsIgnoreCase("YES"));
        
        
    }
    
}
