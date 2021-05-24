//
//  Equipamiento.h
//  SituacionProblema
//
//  Created by Lydia Delgado uriarte on 14/05/21.
//

#ifndef LaserMan_h
#define LaserMan_h

class LaserMan: public Personaje{
    public:
        LaserMan();
        LaserMan(int);
        int getNumCharges();
        void setNumCharges(int);
        void shootLaser;
        void imprime();
    private:
        int numCharges;
    
};


LaserMan::LaserMan(): Personaje(){
}

LaserMan::LaserMan(int numch): Personaje(string name, int level, ){
    numCharges= numch;
}


//Getters
int LaserMan::getNumCharges(){
    return numCharges;
}


//Setters
void LaserMan::setnumCharges(int numch){
    NumCharges=numch;
}


//Funciones
void LaserMan::shootLaser{
    
}

//Funcion imprime
void LaserMan::imprime(){
    cout << "nombre" ;
}
#endif /* Laserman_h */
