#include <iostream>
#include <string>
#include "guerrero.h"
#include "oponente.h"
#include "juego.h"

std::string guerrero;
std::string accion;

int main(){

    //mago
    Mago personaje_1("Hu Dhin I");
    //caballero
    Caballero personaje_2("Laurel de Carim");
    //godin
    Godin personaje_3("Diego");

    //oponente
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
    else if (guerrero == "c"){
        std::cout << "Tienes el poder del guerrero "<<\
        personaje_3.get_nombrePER()<< endl;
        std::cout << "Las estadisticas de tu guerrero son:"<< endl;
        std::cout << "Vida: "<< personaje_3.get_lvlvidaPER()<< endl;
        std::cout << "Dano: "<< personaje_3.get_lvldanoPER()<< endl;
        std::cout << "Velocidad: "<<\
        personaje_3.get_lvlvelocidadPER()<< endl;
    }

    std::cout << "A lo largo de la historia, incontables guerreros han "<<\
    endl<< "luchado contra un enemigo en comun. EL CAPITALISMO."<<\
    endl<< "Derrotalo antes de que te derrote a ti."<< endl;

    //while (oponente_1.get_lvlvidaOP() != 0 &&\
    //personaje_1.get_lvlvidaPER() != 0 || personaje_2.get_lvlvidaPER()!= 0 ||\
    //personaje_3.get_lvlvidaPER()!= 0)
        std::cout << "Información de "<< oponente_1.get_nombreOP()<< endl;
        std::cout << "Vida: "<< oponente_1.get_lvlvidaOP()<< endl;
        std::cout << "Que haras?"<< endl;

        if (guerrero == "a"){
            std::cout << "1. Golpear al enemigo"<< endl;
            std::cout << "2. Lanzar hechizo"<< endl;
            if (personaje_1.get_lvlvidaPER() != 50){
                std::cout << "3. Curarte"<< endl;
            }
        }
        else if (guerrero == "b"){
            std::cout << "1. Golpear al enemigo"<< endl;
            std::cout << "2. Ataque especial"<< endl;
        }
        else if (guerrero == "c"){
            std::cout << "1. Golpear al enemigo"<< endl;
            std::cout << "2. Resiliencia"<< endl;
        }

        std::cin >> accion;

        if (guerrero == "a"){
            if (accion == "1"){
                std::cout << "Golpeas al enemigo!!!"<< endl;
            }
            else if (accion == "2"){
                std::cout << "Ataque especial!!!"<< endl;
            }
            else if (accion == "2"){
                std::cout << "Has recuperado vida!!!"<< endl;
            }
        }
        else if (guerrero == "b"){
            if (accion == "1"){
                std::cout << "Golpeas al enemigo!!!"<< endl;
            }
            else if (accion == "2"){
                std::cout << "3. Curarte"<< endl;
            }
        }
        else if (guerrero == "c"){
            if (accion == "1"){
                std::cout << "Golpeas al enemigo!!!"<< endl;
            }
            else if (accion == "2"){
                std::cout << "Utilizas el poder de la resiliencia"<< endl;
            }
        }
};

