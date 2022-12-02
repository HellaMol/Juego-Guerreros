/*
 * Proyecto Juego
 * Laura Helena Molina Jiménez
 * A01706282
 * 01/12/2022
 */

/*
 * En este proyecto se hizo un juego funcional
 * donde el usuario elige un personaje y acciones
 * para luchar contrar un oponente. Cada personaje
 * tiene diferentes habilidades y diferentes
 * estadisticas, para darle mas variedad al juego.
 */

//Bibliotecas
#include <iostream> //para imprimir.
#include "guerrero.h" //donde estan los objetos del proyecto.
#include "oponente.h"
#include "juego.h"

std::string guerrero;
std::string accion;

int main(){

    //Se generan objetos:
    Mago mago("Hu Dhin I");
    Caballero caballero("Laurel de Carim");
    Godin godin("Diego");
    Oponente oponente("Capitalismo", 130, 10);
    Juego juego;

    std::cout << "Bienvenidx a la aventura"<< endl;
    std::cout << "En este juego tendras que enfrentarte a un oponente"<<\
    endl;
    std::cout << "Selecciona un guerrero"<< endl;
    std::cout << "a. "<< mago.get_nombrePER()<< endl;
    std::cout << "b. "<< caballero.get_nombrePER()<< endl;
    std::cout << "c. "<< godin.get_nombrePER()<< endl;

    std::cin >> guerrero;
    //Ciclo para que volver a elegir una opcion valida en caso de error.
    while (guerrero != "a" && guerrero != "b" && guerrero != "c"){

        std::cout << "Selecciona una respuesta valida: a, b o c"<< endl;
        std::cin >> guerrero;
    }

    //Opciones a elegir de personaje.
    if (guerrero == "a"){
        std::cout << "Tienes el poder del guerrero "<<\
        mago.get_nombrePER()<< endl;
        std::cout << "Las estadisticas de tu guerrero son:"<< endl;
        std::cout << "Vida: "<< mago.get_lvlvidaPER()<< endl;
        std::cout << "Dano: "<< mago.get_lvldanoPER()<< endl;
        std::cout << "Velocidad: "<<\
        mago.get_lvlvelocidadPER()<< endl;
    }
    else if (guerrero == "b"){
        std::cout << "Tienes el poder del guerrero "<<\
        caballero.get_nombrePER()<< endl;
        std::cout << "Las estadisticas de tu guerrero son:"<< endl;
        std::cout << "Vida: "<< caballero.get_lvlvidaPER()<< endl;
        std::cout << "Dano: "<< caballero.get_lvldanoPER()<< endl;
        std::cout << "Velocidad: "<<\
        caballero.get_lvlvelocidadPER()<< endl;
    }
    else if (guerrero == "c"){
        std::cout << "Tienes el poder del guerrero "<<\
        godin.get_nombrePER()<< endl;
        std::cout << "Las estadisticas de tu guerrero son:"<< endl;
        std::cout << "Vida: "<< godin.get_lvlvidaPER()<< endl;
        std::cout << "Dano: "<< godin.get_lvldanoPER()<< endl;
        std::cout << "Velocidad: "<<\
        godin.get_lvlvelocidadPER()<< endl;
    }

    std::cout << "A lo largo de la historia, incontables guerreros han "<<\
    endl<< "luchado contra un enemigo en comun. EL CAPITALISMO."<<\
    endl<< "Derrotalo antes de que te derrote a ti."<< endl;

    //Ciclo para que la batalla continue hasta que la vida del
    // personaje o del oponentellegue a 0.
    while (oponente.get_lvlvidaOP() > 0 &&\
    mago.get_lvlvidaPER() > 0 && caballero.get_lvlvidaPER() > 0 &&\
    godin.get_lvlvidaPER() > 0){

        std::cout << "Informacion de "<< oponente.get_nombreOP()<< endl;
        std::cout << "Vida: "<< oponente.get_lvlvidaOP()<< endl;
        std::cout << "Que haras?"<< endl;

        //Se imprimen posibles acciones dependiendo del personaje elegido.
        if (guerrero == "a"){
            std::cout << "1. Golpear al enemigo"<< endl;
            std::cout << "2. Lanzar hechizo"<< endl;
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

        //Ciclo para que volver a elegir una opcion valida en caso de error.
        while (accion != "1" && accion != "2" && accion != "3"){

        std::cout << "Selecciona una respuesta valida:"<<\
        " 1 o 2"<< endl;
        std::cin >> accion;
        }

        //Se imprime accion elegida y se manda a llamar metodo que ejecuta
        //esta accion.
        if (guerrero == "a"){
            if (accion == "1"){
                std::cout << "Golpeas al enemigo!!!"<< endl;
                juego.atacaOP(mago, oponente);
            }
            else if (accion == "2"){
                std::cout << "Lanzas hechizo!!!"<< endl;
                mago.hechizaOP(mago, oponente);
            }
        }
        else if (guerrero == "b"){
            if (accion == "1"){
                std::cout << "Golpeas al enemigo!!!"<< endl;
                juego.atacaOP(caballero, oponente);
            }
            else if (accion == "2"){
                std::cout << "Ataque especial!!!"<< endl;
                caballero.especialOP(caballero, oponente);
            }
        }
        else if (guerrero == "c"){
            if (accion == "1"){
                std::cout << "Golpeas al enemigo!!!"<< endl;
                juego.atacaOP(godin, oponente);
            }
            else if (accion == "2"){
                std::cout << "Utilizas el poder de la resiliencia"<< endl;
                godin.resilienciaOP(godin, oponente);
            }
        }

        std::cout << "Informacion de "<< oponente.get_nombreOP()<< endl;
        std::cout << "Vida: "<< oponente.get_lvlvidaOP()<< endl;
        std::cout << "Capitalismo va a atacar"<< endl;

        //Oponente ataca al personaje elegido despues de hacer una accion.
        if (guerrero == "a"){
            juego.atacaPER(oponente, mago);
            std::cout << "Informacion de "<< mago.get_nombrePER()<< endl;
            std::cout << "Vida: "<< mago.get_lvlvidaPER()<< endl;
            }
        else if (guerrero == "b"){
            juego.atacaPER(oponente, caballero);
            std::cout << "Informacion de "<<\
            caballero.get_nombrePER()<< endl;
            std::cout << "Vida: "<< caballero.get_lvlvidaPER()<< endl;
        }
        else if (guerrero == "c"){
            juego.atacaPER(oponente, godin);
            std::cout << "Informacion de "<< godin.get_nombrePER()<< endl;
            std::cout << "Vida: "<< godin.get_lvlvidaPER()<< endl;
        }
    }

        //Se imprime resultado de la batalla.
        if (mago.get_lvlvidaPER() <= 0 || caballero.get_lvlvidaPER() <= 0 ||\
        godin.get_lvlvidaPER() <= 0){
            std::cout << "Perdiste contra CAPITALISMOOO "<< endl;
        }

        else if (oponente.get_lvlvidaOP() <= 0){
            std::cout << "GANASTE contra CAPITALISMOOO, felicidades!!! "<<\
            endl;
        }
        else if (oponente.get_lvlvidaOP() <= 0 &&\
        mago.get_lvlvidaPER() <= 0 || caballero.get_lvlvidaPER() <= 0 ||\
        godin.get_lvlvidaPER() <= 0){
            std::cout << "E m p a t e "<< endl;
        }
};

