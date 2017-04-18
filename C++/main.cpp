// Se importan las librerias necesarias y la clase juego donde estan los metodos
#include <iostream>
#include <stdlib.h>
#include "juego.h"

using namespace std;

int main()
{
    // se crea un objeto de la clase juego (Instanciación)
    juego* obj1 = new juego();
    // Se crean dos variables de tipo string, una para saber si el usuario desea salir del juego
    // Y otra para pedir el nombre de el mismo
    string nombre, parar = "";
    // Se le asigna a nombre el valor ingresado por pantalla
    cout<<"Cual Es Tu Nombre ?"<<endl;
    cin>>nombre;
    // Limpiamos y cambiamos el color de la consola
    system("cls");
    system("color E0");
    // Se muestra un mensaje de bienvenida con su nombre
            cout<<"###############################################################################"<<endl;
            cout<<""<<endl;
            cout<<"##########                                                            #########"<<endl;
            cout<<"                               Bienvenido ["+nombre+"]                         "<<endl;
            cout<<"##########                                                            #########"<<endl;
            cout<<""<<endl;
            cout<<"###############################################################################\n"<<endl;
            system("pause");
    // Se crea un ciclo DO-WHILE
    do{
    // Limpiamos y cambiamos el color de la consola
    system("cls");
    system("color 0A");
    cout<<"_________________________________________________________________________\n"<<endl;
    cout<<"                          JUEGO ADIVINAR NUMERO "<<endl;
    cout<<"_________________________________________________________________________\n"<<endl;
    // Se llama al metodo Juego() mediante la instanciación
    obj1->Juego();
    // Limpiamos y cambiamos el color de la consola
    system("cls");
    system("color 0F");
    // A la variable salir se le asignara el valor ingresado en pantalla
    // Este dira si el usuario desea salir o no del juego
    cout<<"*************************************************************************"<<endl;
    cout<<"\nDeseas Salir? YES/NOT"<<endl;
    cout<<">>--> ";
    cin>>parar;
    // Se  repetira el juego mientras que el usuario no escriba YES en la peticion
    }while(parar!="YES");

}
