/*
 * Proyecto Juego
 * Laura Helena Molina Jiménez
 * A01706282
 * 01/12/2022
 */

/*
 * Clase Personaje contiene los métodos genéricos para el manejo de personajes
 * y tiene 3 clases hijas que son especializaciones de personajes:
 * Mago, Caballero y Godin
 *
 */

#ifndef GUERRERO_H
#define GUERRERO_H

#include<iostream>

#include "oponente.h"
#include <string>
using namespace std;

#include <string>
using namespace std;

//clase Personaje



class Personaje{

    //Crear esqueleto de un personaje
    private:

    std:: string nombrePER;
    int lvldanoPER;
    int lvlvidaPER;
    int lvlvelocidadPER;

    public:

    //Personaje default
    Personaje();
    Personaje(std::string nomPER, int danPER, int vidPER, int velPER):\
    nombrePER(nomPER), lvldanoPER(danPER), lvlvidaPER(vidPER), lvlvelocidadPER(velPER){};

    //Funciones get
    std:: string get_nombrePER();
    int get_lvldanoPER();
    int get_lvlvidaPER();
    int get_lvlvelocidadPER();

    //Funciones set
    void set_nombrePER(std::string );
    void set_lvldanoPER(int );
    void set_lvlvidaPER(int );
    void set_lvlvelocidadPER(int );
    void bajarVIDA(int x);
    void ataca(Personaje &p);

    //Funciones
    int golpe();

};

//clase Mago

class Mago: public Personaje{

    public:

    Mago(std::string nomPER):Personaje(nomPER, 20, 50, 2){};
    //Funciones
    int curar();
    int hechizo(Oponente &b);
};

//clase Godin

class Caballero: public Personaje{

    public:

    Caballero(std::string nomPER):Personaje(nomPER, 30, 100, 3){};

    //Funciones
    int ataque();
};

//clase Godin

class Godin: public Personaje{

    public:

    Godin(std::string nomPER):Personaje(nomPER, 50, 40, 1){};

    //Funciones
    int resiliencia();
};

//funciones Personaje

std:: string Personaje::get_nombrePER(){
    return nombrePER;
}

int Personaje::get_lvldanoPER(){
    return lvldanoPER;
}

int Personaje::get_lvlvidaPER(){
    return lvlvidaPER;
}

int Personaje::get_lvlvelocidadPER(){
    return lvlvelocidadPER;
}

void Personaje::set_nombrePER(std::string nomPER){
    nombrePER = nomPER;
}

void Personaje::set_lvlvidaPER(int vidPER){
    lvlvidaPER = vidPER;
}

void Personaje::set_lvldanoPER(int danPER){
    lvldanoPER = danPER;
}

void Personaje::set_lvlvelocidadPER(int velPER){
    lvlvelocidadPER = velPER;
}
#endif
