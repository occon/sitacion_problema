//
//  Personaje.h
//  SituacionProblema
//
//  Created by Lydia Delgado uriarte on 14/05/21.
//

#ifndef Personaje_h
#define Personaje_h
#include "Profesion.h"
#include "Equipamiento.h"
using namespace std;

class Personaje{
    public:
        Personaje();
        Personaje(string, int);
        string getNombre();
        string getNivel();
        string setNivel();
        string setNombre();
        void correr();
        void saltar();
    
    private:
        string Nombre;
        int Nivel;;
    
};

Personaje::Personaje(){
    Nombre= "-";
    Nivel = 0;
}

Personaje::Personaje(string nombre, int nivel){
    Nombre=nombre;
    Nivel=nivel;
}

//Getters
string Personaje::getNombre(){
    return Nombre;
}

Profesion Personaje::getNivel(){
    return Nivel;
}

//Setters
void Personaje::setNombre(string nombre){
    Nombre= nombre;
}

void Personaje::setNivel(int nivel){
    Nivel= nivel;
}



//Funcion imprimir
void Personaje::imprime(){
    cout << "Personaje" << endl << "Nombre: " << Nombre << endl;
    cout << "Nivel: " << Nivel << endl;

}
#endif /* Personaje_h */
