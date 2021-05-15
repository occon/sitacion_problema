//
//  Profesion.h
//  SituacionProblema
//
//  Created by Lydia Delgado uriarte on 14/05/21.
//

#ifndef Profesion_h
#define Profesion_h
using namespace std;

class Profesion{
    public:
        Profesion();
        Profesion(int , string , string );
        int getVida();
        string getClase();
        string getHabilidad();
        void setVida(int);
        void setClase(string);
        void setHabilidad(string);
        void imprime();
    
    private:
        int Vida;
        string Clase;
        string Habilidad;
    
};

Profesion::Profesion(){ //Constructor default
    Vida= 0 ;
    Clase= "-" ;
    Habilidad= "-" ;
}

Profesion::Profesion(int vida, string clase, string habilidad){ //Constructor con valores
    Vida = vida;
    Clase = clase;
    Habilidad = habilidad;
}

Profesion mago(60,"Mago","Magia");
Profesion arquero(60,"Arquero","Distancia");
Profesion asesino(60,"Asesino","Robar");

//Getters
int Profesion::getVida(){
    return Vida;
}

string Profesion::getClase(){
    return Clase;
}

string Profesion::getHabilidad(){
    return Habilidad;
}

//Setters
void Profesion::setVida(int vida){
    Vida=vida;
}

void Profesion::setClase(string clase){
    Clase= clase;
}

void Profesion::setHabilidad(string habilidad){
    Habilidad=habilidad;
}



//Funciones

void Profesion::imprime(){
    cout <<"Profesión del personaje: " << Clase << endl << "Hp: " << Vida << endl << "Habilidad: " << Habilidad << endl;
}

#endif /* Profesion_h */
