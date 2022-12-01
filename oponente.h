/*
 * Proyecto Juego
 * Laura Helena Molina Jiménez
 * A01706282
 * 01/12/2022
 */

/*
 * Clase Opoente contiene los métodos genéricos para el manejo de oponente.
 *
 */

#ifndef OPONENTE_H
#define OPONENTE_H

#include "guerrero.h"
#include <string>
using namespace std;

#include <string>
using namespace std;

//clase Oponente

class Oponente{

    //Crear esqueleto de un oponente
    private:
    std:: string nombreOP;
    int lvlvidaOP;
    int lvldanoOP;

public:
    Oponente();
    Oponente(std::string nomOP, int vidOP, int danOP): nombreOP(nomOP), lvlvidaOP(vidOP), lvldanoOP(danOP){};

    std:: string get_nombreOP();
    int get_lvlvidaOP();
    int get_lvldanoOP();

    void set_nombreOP(std::string );
    void set_lvlvidaOP(int );
    void set_lvldanoOP(int );
    void bajarVIDA(int x);
    int ataca(Personaje &p);
};

//funciones Oponente

std:: string Oponente::get_nombreOP(){
    return nombreOP;
}

int Oponente::get_lvlvidaOP(){
    return lvlvidaOP;
}

int Oponente::get_lvldanoOP(){
    return lvldanoOP;
}

void Oponente::set_nombreOP(std::string nomOP){
    nombreOP = nomOP;
}

void bajarVIDA(int x){
    lvlvidaOP() = lvlvidaOP() - x;
}

int ataca(Personaje &p){
    p.bajarVIDA(get_lvldanoOP());
}

#endif
