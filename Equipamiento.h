//
//  Equipamiento.h
//  SituacionProblema
//
//  Created by Lydia Delgado uriarte on 14/05/21.
//

#ifndef Equipamiento_h
#define Equipamiento_h

class Equipamiento{
    public:
        Equipamiento();
        Equipamiento(int);
        int getnumCharges();
        void shootLaser;
        void imprime();
    private:
        int numCharges;
    
};

LaserMan::LaserMan(){

Equipamiento::Equipamiento(int ){
    Casco= casco;
    Armadura= armadura;
    Arma= arma;
    
}

//Getters
string Equipamiento::getCasco(){
    return Casco;
}

string Equipamiento::getArmadura(){
    return Armadura;
}

string Equipamiento::getArma(){
    return Arma;
}

//Setters
void Equipamiento::setCasco(string casco){
    Casco=casco;
}

void Equipamiento::setArmadura(string armadura){
    Armadura=armadura;
}

void Equipamiento::setArma(string arma){
    Arma= arma;
}

//Funcion imprime
void Equipamiento::imprime(){
    cout << "Equipamiento" << endl << "Casco: " << Casco << endl << "Armadura: " << Armadura << endl << "Arma: " << Arma;
}
#endif /* Equipamiento_h */
