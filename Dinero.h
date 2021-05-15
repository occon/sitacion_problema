//
//  Dinero.h
//  SituacionProblema
//
//  Created by Lydia Delgado uriarte on 14/05/21.
//

#ifndef Dinero_h
#define Dinero_h

class Dinero{
    public:
        Dinero();
        Dinero(int Diamantes, double CoinsOro, double CoinsPlata);
        int getDiamantes();
        double getCoinsOro();
        double getCoinsPlata();
    private:
        int Diamantes;
        double CoinsOro;
        double CoinsPlata;

};


#endif /* Dinero_h */
