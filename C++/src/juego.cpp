#include "juego.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

juego::juego()
{
    // se le asignan valores por defecto a los atributos en el constructor
    num = 0;
}

juego::~juego()
{
    //dtor
}

// Aqui viene lo bueno, se declaran los metodos
// Se crea el metodo para solicitar el numero
void juego::Solicitar()
{
    // Se crea una variable de tipo entero llamada Intento
     int Intento;
    // A dicha variable se le asigna el valor que entre por consola mediante el CIN
        cout<<"\nAdivina un numero entre 0 - 20: ";
        cin>>Intento;
    // Encapsulamos el valor de Intento
        Set_NumI(Intento);
}

    // Creamos el metodo donde va la logica del juego
void juego::Juego()
{
    // Se crean dos variables de tipo int, una de ellas icializada en 5
    int Secreto,vidas=5;
    // Creamos una variable de tipo bool que nos ayudara a saber cuando se ha ganado el juego
    bool Gano;
    // Creamos una variable o semilla random de tipo entero para escoger el numero a adivinar
    srand(time(0));
    // A la variable secreto le asignamos dicho numero
    Secreto=rand()%20;
    // Mostramos un mensaje con el numero de vidas que queremos empiece el jugador
    cout<<"\nUD CUENTA CON ["<<vidas<<"] VIDAS"<<endl;
    // Creamos un DO-WHILE
    do{
    cout<<"\n_____________________________________"<<endl;
     // Llamamos al metodo Solicitar() para pedir el numero
    Solicitar();
    if(Get_NumI()==Secreto)
    {
    // Decimos que si el numero ingresado es el mismo creado por la variable random, muestra un mensaje de felicitaciones
    // Limpiamos y cambiamos el color de la consola mediante SYSTEM llamado por la libreria <stdlib.h>
    system("cls");
    system("color E0");
            cout<<"###############################################################################"<<endl;
            cout<<""<<endl;
            cout<<"##########                                                            #########"<<endl;
            cout<<"##########                    ERES LA VERGA, GANASTE ;v               #########"<<endl;
            cout<<"##########                                                            #########"<<endl;
            cout<<""<<endl;
            cout<<"###############################################################################\n"<<endl;
            // Le asignamos a Gano el valor TRUE
            Gano=true;
            cout<<"\n";
            system("pause");
    }
    // De lo contrario 1er nivel
     else
     {
            system("cls");
           // Decrementamos en 1 la variable Vidas
            vidas--;
            // Mostramos las vidas restantes
            cout<<"\nTe quedan ["<<vidas<<"] vidas"<<endl;
            // Decimos que si Vidas es igual a 0, muestramos un mensaje diciendo que perdio
            if(vidas==0)
            {
            // Limpiamos y cambiamos el color de la consola
                system("cls");
                system("color C0");
                cout<<"###############################################################################"<<endl;
                cout<<""<<endl;
                cout<<"##########                                                            #########"<<endl;
                cout<<"##########                           PERDISTE :'v                     #########"<<endl;
                cout<<"##########                                                            #########"<<endl;
                cout<<""<<endl;
                cout<<"###############################################################################\n"<<endl;
                system("pause");
            }
            // De lo contrario 2do nivel
            else
            {
            // Si el numero ingresado en mayor al proporcionado por la variable random, mostramos un mensje diciendo que el numero buscado es menor
            // Cuando en el IF solo hay una funcion que ejecutar, se pueden omitir las llaves
                if(Get_NumI()>Secreto)
                    cout<<"\nEl numero secreto es menor"<<endl;
            // Si el numero ingresado en menor al proporcionado por la variable random, mostramos un mensje diciendo que el numero buscado es mayor
                if(Get_NumI()<Secreto)
                    cout<<"\nEl numero secreto es mayor"<<endl;

            }

     }
     // El ciclo DO-WHILE repetira todas las acciones dichas anteriormente siempre y cuando las vidas sean mayores a 0 y la variable Gano sea diferente de TRUE
    }while(vidas>0&&Gano!=true);
}



