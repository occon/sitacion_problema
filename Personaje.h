//
//  Personaje.h
//  SituacionProblema
//
//  Created by Lydia Delgado uriarte on 14/05/21.
//

#ifndef Personaje_h
#define Personaje_h


class Personaje{
    public:
        Personaje();
        Personaje(string, int);
        void getNombre(string);
        int getNivel();
        void setNivel(int);
        string setNombre();
        void correr();
        void saltar();
    
    protected:
        string Nombre;  
        int Nivel;
    
};

Personaje::Personaje(){
    Nombre= "-";
    Nivel = 0;
}

Personaje::Personaje(string nombre, int nivel){
    Nombre= nombre;
    Nivel= nivel;
}

//Getters
string Personaje::getNombre(){
    return Nombre;
}

int Personaje::getNivel(){
    return Nivel; 
}

//Setters
void Personaje::setNombre(string nombre){
    Nombre= nombre;
}

void Personaje::setNivel(int nivel){
    Nivel= nivel; 
} 

void Personaje::saltar(){
    cout << "Saltar" << endl;
}

void Personaje::correr(){
    cout << "Correr" << endl;
}

//Funcion imprimir
void Personaje::imprime(){
    cout << "Personaje" << endl << "Nombre: " << Nombre << endl;
    cout << "Nivel: " << Nivel << endl;

}
#endif /* Personaje_h */
