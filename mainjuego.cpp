#include <iostream>
#include <string>
#include "guerrero.h"

int main(){

    //mago
    Mago personaje_1("Hu Dhin I");
    //caballero
    Caballero personaje_2("Laurel de Carim");
    //godin
    Godin personaje_7("Diego");

    Arma arma_1("arco", "destructora", 10);
    Oponente oponente_1("Capitalismo", 130, 10);

    std::cout << "Bienvenidx a la aventura"<< endl;
    std::cout << "Selecciona un guerrero"<< endl;
    std::cout << personaje_1.get_nombrePER()<< endl;
    std::cout << personaje_2.get_lvlvidaPER()<< endl;
    std::cout << arma_1.get_lvldanoAR()<< endl;
    std::cout << oponente_1.get_lvlvidaOP();

};
