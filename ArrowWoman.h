//
//  ArrowWoman.h
//

#ifndef ArrowWoman_h
#define ArrowWoman_h
using namespace std;

class ArrowWoman{
    public:
        void shootArrow();
        void getNumArrows(int);
        int setNumArrows();
        void imprime();
    
    private:
        int numArrows;
};

ArrowWoman(){ //Constructor default
    numArrows=0;
}

Profesion::Profesion(int arrows){
    numArrows=arrows;
}



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
