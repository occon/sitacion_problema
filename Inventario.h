//
//  Inventario.h
//  SituacionProblema
//
//  Created by Lydia Delgado uriarte on 14/05/21.
//

#ifndef Inventario_h
#define Inventario_h
#include "Dinero.h"

class Inventario{
    public:
        Inventario();
        Inventario(Dinero, string, string);
        Dinero getMoney();
        string getAlimento();
        string getItem();
        void setMoney(Dinero);
        void setAlimento(string);
        void setItem(string);
    
    private:
        Dinero Money;
        string Alimento;
        string Item;
        
        
};


//Getters


//Setters

#endif /* Inventario_h */
