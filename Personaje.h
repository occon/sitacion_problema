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
        Personaje(string, Profesion, Equipamiento);
        string getNombre();
        Profesion getFeatures();
        Equipamiento getEquipado();
        void setNombre(string);
        void setFeatures(Profesion features);
        void setEquipado(Equipamiento eq);
        void imprime();
    
    private:
        string Nombre;
        Profesion Features;
        Equipamiento Equipado;
    
};

Personaje::Personaje(){
    Nombre= "-";
}

Personaje::Personaje(string nombre, Profesion car, Equipamiento Eq){
    Nombre=nombre;
    Features= car;
    Equipado= Eq;
}

//Getters
string Personaje::getNombre(){
    return Nombre;
}

Profesion Personaje::getFeatures(){
    return Features;
}

Equipamiento Personaje::getEquipado(){
    return Equipado;
}


//Setters
void Personaje::setNombre(string nombre){
    Nombre= nombre;
}

void Personaje::setEquipado(Equipamiento eq){
    Equipado=eq;
}

void Personaje::setFeatures(Profesion features){
    Features=features;
}

//Funcion imprimir
void Personaje::imprime(){
    cout << "Personaje" << endl << "Nombre: " << Nombre << endl;
    Features.imprime();
    Equipado.imprime();

}
#endif /* Personaje_h */
