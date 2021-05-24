//
//  main.cpp
//  SituacionProblema
//
//  Created by Lydia Delgado Uriarte & Hugo dgar Palomares Estrella on 14/05/21.
//

#include <iostream>
using namespace std;
/*
//Función para crear personaje
void CrearPersonaje(Personaje pj){
    string nombre,clase;
    int ans=0, prof=0, fin=0;
    cout << "Bienvenido, primero que nada como quieres que se llame tu personaje?" << endl;
    cin >> nombre;
    cout << "Estas seguro que quieres que tu personaje se llame: " << nombre << " ? Escribe 1 si tu respuesta es si, cualquier otro caracter si es un no" << endl;
    cin >> ans;
    while (fin!=1){
        while (ans!= 1){
            cout << "Entonces como quieres que se llame tu personaje?" << endl;
            cin >> nombre;
            cout << "Estas seguro que quieres que tu personaje se llame: " << nombre << " ? Escribe 1 si tu respuesta es si, cualquier otro caracter es un no" << endl;
            cin >> ans;
        }
        ans=0;
        cout << endl << endl << endl << "Es hora de escoger una clase, existen 4 diferentes las cuales le dan habilidades especiales y características únicas a tu personaje."<< endl << "Clase [1] Mago: Habilidad de usar magia, menor vida" <<endl;
        cout << "Clase [2] Arquero: Habilidad de daño distancia y golpes críticos, hace menor daño cercano"<< endl;
        cout <<"Clase [3] Asesino: Habilidad de ganar más recompensas de criaturas, puede pasar turno" << endl;
        while (ans!= 1){
            cout << " _____________________________" << endl;
            cout << "|   Que clase escoges?        |"<< endl;
            cout << "|-----------------------------|" << endl;
            cout << "|        [1] LaserMan         |" << endl;
            cout << "|        [2] Genius           |" << endl;
            cout << "|        [3] ArrowWoman       |" << endl;
            cout << "|_____________________________|" << endl << "Selecciono la clase: ";
            cin >> prof;
            if (prof== 1 ){
                cout << "Estas seguro que quieres que tu personaje sea un Mago? Escribe 1 si tu respuesta es si, cualquier otro caracter es no" << endl;
                cin >> ans;
            }
            else if(prof==2){
                cout << "Estas seguro que quieres que tu personaje sea un Arquero? Escribe 1 si tu respuesta es si, cualquier otro caracter si es no" << endl;
                cin >> ans;
            }
            else if(prof==3){
                cout << "Estas seguro que quieres que tu personaje sea un Asesino? Escribe 1 si tu respuesta es si, cualquier otro caracter si es no" << endl;
                cin >> ans;
            }
            else{
                cout << "Escoge una opción valida" << endl ;
            }
        }
        if (prof==1){
            clase_asignada.setVida(60);
            clase_asignada.setClase("Mago");
            clase_asignada.setHabilidad("Magia");
        }
        else if (prof==2){
            clase_asignada.setVida(90);
            clase_asignada.setClase("Arquero");
            clase_asignada.setHabilidad("Daño distancia");
        }
        else{
            clase_asignada.setVida(80);
            clase_asignada.setClase("Asesino");
            clase_asignada.setHabilidad("Robar");
        }
        pj.setNombre(nombre);
        pj.getFeatures(); //Asigna nombre al personaje
      
        
        
        cout << endl << endl << "Estas seguro que quieres que estos sean los datos finales? Escriba 1 si la respuesta es si" << endl;
        cout << "--------------------------------------" << endl;
        cout << "               Personaje        " << endl;
        cout << "--------------------------------------" << endl;
        cout << "Nombre: " << nombre << endl;
        clase_asignada.imprime();
        cout << endl << "------------------------------------" << endl;
        cin >> fin ;
        ans=0;
    }
   
}

    


//Función para mostrar personaje
void MostrarPersonaje(Personaje pj, Profesion clase_asignada, Equipamiento equipado){
    
}

//Función para
*/
int main(){/*
    int Pjcreado=0 ;
    char opcion, o='1';
    Personaje pj[];
    Profesion clase_asignada;
    //Inventario arregloeq[100];
    do{
        cout << endl;
        cout << " ________________________________" << endl;
        cout << "|                                |" << endl;
        cout << "|             Menú               |" << endl;
        cout << "|________________________________|" << endl;
        cout << "|                                |" << endl;
        cout << "| 1. Crear Personaje             |"<< endl;
        cout << "| 2. Mostrar personajes          |"<< endl;
        cout << "| 3. Finalizar juego             |" << endl;
        cout << "|________________________________|" << endl;
        cout << "" << endl << endl << "Opcion: ";
        cin >> opcion ;
        switch (opcion){
            case '1':
                while (o != '*'){
                    crearPersonaje(pj[]);
                    cout << "Ingresa * para dejar de agregar personajes, cualquier otro caracter para seguir agregando" << endl;
                    cin >> o;

                }
                CrearPersonaje(pj,clase_asignada);
                
                    Pjcreado++;
                
                break;
                
            case '2':
                if (Pjcreado==0){
                    CrearPersonaje(pj,clase_asignada);
                    Pjcreado++;
                }
                else{
                    cout << "Ya creaste un personaje" << endl;
                }
                break;
            case '3':
                break;
                
            case '4':
                if (Pjcreado==0){
                    cout << "No has creado ningún personaje" << endl;
                }
                else{
                    MostrarPersonaje(pj, clase_asignada, equipado);
                }
                break;
                
            case '5':
                break;
                
            case '6':
                
                break;
                
            case'7':
                cout << "Gracias por jugar" << endl << endl;
                break;
        }
        
    }while (opcion != '7');*/
    return 0;
}

