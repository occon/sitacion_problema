//
//  Genius.h
//
//  Created by Lydia Delgado uriarte on 14/05/21.
//

#ifndef Genius
#define Genius

class Genius{
    public:
        Genius();
        Genius(int);  
        int setNumAnswers();
        int getNumAnswers();
        void telepathy();
        void freeze();
    
    private:
        int numAnswers;      
};

Genius::Genius(){
    numAnswers=0;
}

Genius::Genius(int Ans){
    numAnswers= Ans;
}




//Getters


//Setters

#endif /* Genius */
