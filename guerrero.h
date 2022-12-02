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
#include "oponente.h"
#include<iostream>

#include <string>
using namespace std;


//Declaracion de clase Personaje
class Personaje{

    private:
        //Declaracion variables de instancia
        std:: string nombrePER;
        int lvldanoPER;
        int lvlvidaPER;
        int lvlvelocidadPER;

    public:
        //Constructor
        Personaje();
        /*
        * Constructor por default
        *
        * @param string nomPER, int danPER, int vidPER, int velPER
        * @return Objeto Personaje
        */
        Personaje(std::string nomPER, int danPER, int vidPER, int velPER):\
        nombrePER(nomPER), lvldanoPER(danPER), lvlvidaPER(vidPER),\
        lvlvelocidadPER(velPER){};

        //Declaracion de metodos del objeto
        std:: string get_nombrePER();
        int get_lvldanoPER();
        int get_lvlvidaPER();
        int get_lvlvelocidadPER();

        void set_nombrePER(std::string );
        void set_lvldanoPER(int );
        void set_lvlvidaPER(int );
        void set_lvlvelocidadPER(int );
};

/*
 * getter nombre
 *
 * @param
 * @return string: nombre del personaje
*/
std:: string Personaje::get_nombrePER(){
    return nombrePER;
}

/*
 * getter dano
 *
 * @param
 * @return string: dano del personaje
*/
int Personaje::get_lvldanoPER(){
    return lvldanoPER;
}

/*
 * getter vida
 *
 * @param
 * @return string: vida del personaje
*/
int Personaje::get_lvlvidaPER(){
    return lvlvidaPER;
}

/*
 * getter velocidad
 *
 * @param
 * @return string: velocidad del personaje
*/
int Personaje::get_lvlvelocidadPER(){
    return lvlvelocidadPER;
}

/*
 * setter nombre
 *
 * @param string nomPER
 * @return
*/
void Personaje::set_nombrePER(std::string nomPER){
    nombrePER = nomPER;
}

/*
 * setter vida
 *
 * @param string vidPER
 * @return
*/
void Personaje::set_lvlvidaPER(int vidPER){
    lvlvidaPER = vidPER;
}

/*
 * setter dano
 *
 * @param string danPER
 * @return
*/
void Personaje::set_lvldanoPER(int danPER){
    lvldanoPER = danPER;
}

/*
 * setter velocidad
 *
 * @param string velPER
 * @return
*/
void Personaje::set_lvlvelocidadPER(int velPER){
    lvlvelocidadPER = velPER;
}

//Declaro objeto mago que hereda de Personaje
class Mago: public Personaje{
    public:
        //Constructor
        Mago();
        /*
        * Constructor por default
        *
        * @param string nomPER, int danPER , int vidPER, int velPER
        * @return Objeto Mago
        */
        Mago(std::string nomPER):Personaje(nomPER, 40, 60, 2){};

        //Metodos del obejto
        void hechizaOP(Mago m, Oponente &o);
};

/*
 * Metodo que recibe Mago m y Oponente o
 * Guarda getter vida de Oponente y getter dano de Personaje
 * como variables que se restan y se guardan en una variable que
 * funciona como parametro del setter vida de Oponente
 *
 * @param Mago m, Oponente o
 * @return
*/
void Mago::hechizaOP(Mago m, Oponente &o){
    int vidaOP = o.get_lvlvidaOP();
    int danoPER = m.get_lvldanoPER() + 10;
    int vida_finOP = vidaOP - danoPER;
    o.set_lvlvidaOP(vida_finOP);
}

//Declaro objeto caballero que hereda de Personaje
class Caballero: public Personaje{
    public:
        //Constructor
        Caballero();
        /*
        * Constructor por default
        *
        * @param string nomPER, int danPER, int vidPER, int velPER
        * @return Objeto Caballero
        */
        Caballero(std::string nomPER):Personaje(nomPER, 30, 100, 3){};

        //Metodos del obejto
        void especialOP(Caballero c, Oponente &o);
};

/*
 * Metodo que recibe Caballero c y Oponente o
 * Guarda getter vida de Oponente y getter dano de Personaje
 * como variables que se restan y se guardan en una variable que
 * funciona como parametro del setter vida de Oponente
 *
 * @param Caballero c, Oponente o
 * @return
*/
void Caballero::especialOP(Caballero c, Oponente &o){
    int vidaOP = o.get_lvlvidaOP();
    int danoPER = c.get_lvldanoPER() + 15;
    int vida_finOP = vidaOP - danoPER;
    o.set_lvlvidaOP(vida_finOP);
}

//Declaro objeto godin que hereda de Personaje
class Godin: public Personaje{
    public:
        //Constructor
        Godin();
        /*
        * Constructor por default
        *
        * @param string nomPER, int danPER, int vidPER, int velPER
        * @return Objeto Godin
        */
        Godin(std::string nomPER):Personaje(nomPER, 50, 40, 1){};

        //Metodos del obejto
        void resilienciaOP(Godin g, Oponente &o);
};

/*
 * Metodo que recibe Godin g y Oponente o
 * Guarda getter vida de Oponente y getter dano de Personaje
 * como variables que se restan y se guardan en una variable que
 * funciona como parametro del setter vida de Oponente
 *
 * @param Godin g, Oponente o
 * @return
*/
void Godin::resilienciaOP(Godin g, Oponente &o){
    int vidaOP = o.get_lvlvidaOP();
    int danoPER = g.get_lvldanoPER() + 30;
    int vida_finOP = vidaOP - danoPER;
    o.set_lvlvidaOP(vida_finOP);
}


#endif // GUERRERO_H
