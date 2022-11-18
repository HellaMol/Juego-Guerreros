#include <iostream>
#include <string>
#include "mascotas.h"

int main(){

    //mago
    Personaje personaje_1("Hu Dhin I", 20, 50, 2);
    //caballero
    Personaje personaje_2("Laurel de Carim", 30, 100, 3);
    //asesino
    Personaje personaje_3("Illona", 35, 85, 4);
    //mago
    Personaje personaje_4("Howl", 20, 60, 3);
    //asesino
    Personaje personaje_5("Gilles", "", 50, 70, 2);
    //tanque
    Personaje personaje_6("Warren", 10, 150, 1);
    //godin
    Personaje personaje_7("Diego", 50, 40, 1);

    Arma arma_1("arco", "destructora", 10);
    Oponente oponente_1("Capitalismo", 130, 10);

    std::cout << "Bienvenidx a la aventura"<< endl;
    std::cout << "Selecciona un guerrero"<< endl;
    std::cout << personaje_1.get_nombrePER()<< endl;
    std::cout << arma_1.get_lvldanoAR()<< endl;
    std::cout << oponente_1.get_lvlvidaOP();

};
