#include <iostream>
#include <string>
#include "guerrero.h"

std::string guerrero;

int main(){

    //mago
    Mago personaje_1("Hu Dhin I");
    //caballero
    Caballero personaje_2("Laurel de Carim");
    //godin
    Godin personaje_3("Diego");

    Arma arma_1("arco", "destructora", 10);
    Oponente oponente_1("Capitalismo", 130, 10);

    std::cout << "Bienvenidx a la aventura"<< endl;
    std::cout << "En este juego tendras que enfrentarte a un oponente"<<\
    endl;
    std::cout << "Selecciona un guerrero"<< endl;
    std::cout << "a. "<< personaje_1.get_nombrePER()<< endl;
    std::cout << "b. "<< personaje_2.get_nombrePER()<< endl;
    std::cout << "c. "<< personaje_3.get_nombrePER()<< endl;
    std::cin >> guerrero;
    while (guerrero != "a" && guerrero != "b" && guerrero != "c"){
        std::cout << "Selecciona una respuesta valida: a, b o c"<< endl;
    }
    if (guerrero == "a"){
        std::cout << "Tienes el poder del guerrero "<<\
        personaje_1.get_nombrePER()<< endl;
        std::cout << "Las estadisticas de tu guerrero son:"<< endl;
        std::cout << "Vida: "<< personaje_1.get_lvlvidaPER()<< endl;
        std::cout << "Dano: "<< personaje_1.get_lvldanoPER()<< endl;
        std::cout << "Velocidad: "<<\
        personaje_1.get_lvlvelocidadPER()<< endl;
    }
    else if (guerrero == "b"){
        std::cout << "Tienes el poder del guerrero "<<\
        personaje_2.get_nombrePER()<< endl;
        std::cout << "Las estadisticas de tu guerrero son:"<< endl;
        std::cout << "Vida: "<< personaje_2.get_lvlvidaPER()<< endl;
        std::cout << "Dano: "<< personaje_2.get_lvldanoPER()<< endl;
        std::cout << "Velocidad: "<<\
        personaje_2.get_lvlvelocidadPER()<< endl;
    }
    if (guerrero == "c"){
        std::cout << "Tienes el poder del guerrero "<<\
        personaje_3.get_nombrePER()<< endl;
        std::cout << "Las estadisticas de tu guerrero son:"<< endl;
        std::cout << "Vida: "<< personaje_3.get_lvlvidaPER()<< endl;
        std::cout << "Dano: "<< personaje_3.get_lvldanoPER()<< endl;
        std::cout << "Velocidad: "<<\
        personaje_3.get_lvlvelocidadPER()<< endl;
    }
    std::cout << personaje_2.get_lvlvidaPER()<< endl;
    std::cout << arma_1.get_lvldanoAR()<< endl;
    std::cout << oponente_1.get_lvlvidaOP();

};

