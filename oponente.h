/*
 * Proyecto Juego
 * Laura Helena Molina Jiménez
 * A01706282
 * 01/12/2022
 */

/*
 * Clase Oponente contiene los métodos genéricos para el manejo
 * Y creacion del oponente
 */

#ifndef OPONENTE_H
#define OPONENTE_H

#include <string>
using namespace std;

//Declaracion de clase Oponente
class Oponente{
    private:
        //Declaracion variables de instancia
        std:: string nombreOP;
        int lvlvidaOP;
        int lvldanoOP;

    public:
        //Constructor
        Oponente();
        /*
        * Constructor por default
        *
        * @param string nomOP, int vidOP, int danOP
        * @return Objeto Oponente
        */
        Oponente(std::string nomOP, int vidOP, int danOP):\
        nombreOP(nomOP), lvlvidaOP(vidOP), lvldanoOP(danOP){};

        //Declaracion de metodos del objeto
        std:: string get_nombreOP();
        int get_lvlvidaOP();
        int get_lvldanoOP();

        void set_nombreOP(std::string );
        void set_lvlvidaOP(int );
        void set_lvldanoOP(int );
};

/*
 * getter nombre
 *
 * @param
 * @return string: nombre del oponente
*/
std:: string Oponente::get_nombreOP(){
    return nombreOP;
}

/*
 * getter vida
 *
 * @param
 * @return string: vida del oponente
*/
int Oponente::get_lvlvidaOP(){
    return lvlvidaOP;
}

/*
 * getter dano
 *
 * @param
 * @return string: dano del oponente
*/
int Oponente::get_lvldanoOP(){
    return lvldanoOP;
}

/*
 * setter vida
 *
 * @param string vidOP
 * @return
*/
void Oponente::set_lvlvidaOP(int vidOP){
    lvlvidaOP = vidOP;
}

/*
 * setter nombre
 *
 * @param string nomOP
 * @return
*/
void Oponente::set_nombreOP(std::string nomOP){
    nombreOP = nomOP;
}

/*
 * setter dano
 *
 * @param string danOP
 * @return
*/
void Oponente::set_lvldanoOP(int danOP){
    lvldanoOP = danOP;
}

#endif // OPONENTE_H
