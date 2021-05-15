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
        Equipamiento(string Casco, string Armadura, string Arma);
        string getCasco();
        string getArmadura();
        string getArma();
        void setCasco(string);
        void setArmadura(string);
        void setArma(string);
        void imprime();
    private:
        string Casco;
        string Armadura;
        string Arma;
    
};

Equipamiento::Equipamiento(){
    Casco= "Vacio";
    Armadura= "Vacio";
    Arma=  "Puño" ;
}

Equipamiento::Equipamiento(string casco, string armadura, string arma){
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
