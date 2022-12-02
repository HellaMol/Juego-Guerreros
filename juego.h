/*
 * Proyecto Juego
 * Laura Helena Molina Jiménez
 * A01706282
 * 01/12/2022
 */

/*
 * Clase Juego, maneja los metodos que interactuan entre
 * Personaje y Oponente
 *
 */

#ifndef JUEGO_H
#define JUEGO_H
#include <string>
#include <iostream>

#include "oponente.h"
#include "guerrero.h"

//clase Juego

class Juego{

    private:
        //Declara atributo de Juego
        std::string nombreJUE;

    public:
        //Metodos miembros de la clase
        std:: string get_nombreJUE();

        void atacaPER(Oponente o, Personaje &p);
        void atacaOP(Personaje p, Oponente &o);


};

/*
 * Utliza las clases Oponente y Personaje.
 * Recibe o y p
 * Genera interaccion entre las clases
 * Guarda getter vida de Personaje y getter dano de Oponente
 * como variables que se restan y se guardan en una variable que
 * funciona como parametro del setter vida de Perssonaje
 *
 * @param Godin g, Oponente o
 * @return
 */

void Juego:: atacaPER(Oponente o, Personaje &p){

    int vidaPER = p.get_lvlvidaPER();
    int danoOP = o.get_lvldanoOP();
    int vida_finPER = vidaPER - danoOP;
    p.set_lvlvidaPER(vida_finPER);

}

/*
 * Utliza las clases Oponente y Personaje.
 * Recibe p y o
 * Genera interaccion entre las clases
 * Guarda getter vida de Oponente y getter dano de Personaje
 * como variables que se restan y se guardan en una variable que
 * funciona como parametro del setter vida de Oponente
 *
 * @param Godin g, Oponente o
 * @return
 */
void Juego:: atacaOP(Personaje p, Oponente &o){

    int vidaOP = o.get_lvlvidaOP();
    int danoPER = p.get_lvldanoPER();
    int vida_finOP = vidaOP - danoPER;
    o.set_lvlvidaOP(vida_finOP);

}

#endif // JUEGO_H
