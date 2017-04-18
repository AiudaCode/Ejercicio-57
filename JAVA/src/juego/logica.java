package juego;
import javax.swing.*;

public class logica {
    // Se declaran los atributos privados de la clase
    private int numero;
    
    // se le asignan valores por defecto a los atributos en el constructor
    logica(){
        numero = 0;
    }
    // Implementacion de los metodos SETTER y GETTER
    public void Set_Numero(int val){
        numero = val;
    }
    int Get_Numero(){
        return numero;
    }
    
    // Aqui viene lo bueno, se declaran los metodos
    // Se crea el metodo para solicitar el numero 
    public void solicitar(){
    // Se crea una variable de tipo entero llamada num
        int num;
        // A dicha variable se le asigna el valor que entre por consola mediante el INPUT
        num = Integer.parseInt(JOptionPane.showInputDialog(null, "¿En Que Numero Estoy Pensando?"));
        // Encapsulamos el valor de num
        Set_Numero(num);
    }
    
    // Creamos el metodo donde va la logica del juego
    public void Juego(){
    // Se crean dos variables de tipo int, una de ellas icializada en 5
    int Secreto,vidas=5;
    // Creamos una variable de tipo bool que nos ayudara a saber cuando se ha ganado el juego
    boolean Gano = false;
    // Creamos una variable random de tipo entero para escoger el numero a adivinar
    int random = (int)(Math.random() * 20);
    // Mostramos un mensaje con el numero de vidas que queremos empiece el jugador
     JOptionPane.showMessageDialog(null, "Cuentas Con "+vidas+" Vidas");
    // Creamos un DO-WHILE 
        do {
    // Llamamos al metodo Solicitar() para pedir el numero
            solicitar();
    // Decimos que si el numero ingresado es el mismo creado por la variable random, muestra un mensaje de felicitaciones
            if (Get_Numero() == random) 
            {
                JOptionPane.showMessageDialog(null,"*  Felicidades Eres La Verga  *\n\t"
                                                   + "                  Ganaste :v\n"+
                                                   "------------------------------------------");
                // Le asignamos a Gano el valor TRUE
                Gano = true;
            }
            // De lo contrario 1er nivel
            else
            {
            // Decrementamos en 1 la variable Vidas
                vidas--;
            // Decimos que si Vidas es igual a 0, muestramos un mensaje diciendo que perdio
                 if (vidas == 0) 
                 {
                    JOptionPane.showMessageDialog(null, "ALV Perdiste :'v \n");
                 }
            // De lo contrario 2do nivel
                 else
                 {
                     // Si el numero ingresado en mayor al proporcionado por la variable random, mostramos un mensje diciendo que el numero buscado es menor
                     // Cuando en el IF solo hay una funcion que ejecutar, se pueden omitir las llaves
                     if (Get_Numero()>random)
                         JOptionPane.showMessageDialog(null, "El Numero Es Menor"+"\n"+
                                                             "Te Quedan "+vidas+"\n");
                     // Si el numero ingresado en menor al proporcionado por la variable random, mostramos un mensje diciendo que el numero buscado es mayor
                     if(Get_Numero()<random)
                         JOptionPane.showMessageDialog(null, "El Numero Es Mayor"+"\n"+
                                                             "Te Quedan "+vidas+" Vidas\n");
                 }
            }
           // El ciclo DO-WHILE repetira todas las acciones dichas anteriormente siempre y cuando las vidas sean mayores a 0 y la variable Gano sea diferente de TRUE
        } while (vidas>0&&Gano!=true);
        
    
    }
    
}
