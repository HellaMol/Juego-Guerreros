#include <iostream>
#include <string>
#include "mascotas.h"

int main(){

    conejito conejito_1("blanco", "bombon", 100, 100);
    gatito gatito_1("esfinge", "bingus", 100, 100);
    std::cout << conejito_1.get_razaCON()<< endl;
    std::cout << gatito_1.get_nombreGAT();

};
