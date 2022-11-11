#include <string>
using namespace std;

#include <string>
using namespace std;

class conejito{
private:
    std::string razaCON;
    std:: string nombreCON;
    int lvlhambreCON;
    int lvlafectoCON;

public:
    conejito();
    conejito(std::string raCON, std::string nomCON, int hamCON, int afecCON): razaCON(raCON), nombreCON(nomCON), lvlhambreCON(hamCON), lvlafectoCON(afecCON){};

    std::string get_razaCON();
    std:: string get_nombreCON();
    int get_lvlhambreCON();
    int get_lvlafectoCON();

    void set_razaCON(std::string );
    void set_nombreCON(std::string );
    void set_lvlhambreCON(int );
    void set_lvlafectoCON(int );
};

class gatito{
private:
    std::string razaGAT;
    std:: string nombreGAT;
    int lvlhambreGAT;
    int lvlafectoGAT;

public:
    gatito();
    gatito(std::string raGAT, std::string nomGAT, int hamGAT, int afecGAT): razaGAT(raGAT), nombreGAT(nomGAT), lvlhambreGAT(hamGAT), lvlafectoGAT(afecGAT){};

    std::string get_razaGAT();
    std:: string get_nombreGAT();
    int get_lvlhambreGAT();
    int get_lvlafectoGAT();

    void set_razaGAT(std::string );
    void set_nombreGAT(std::string );
    void set_lvlhambreGAT(int );
    void set_lvlafectoGAT(int );
};

class perrito{
private:
    std::string razaPER;
    std:: string nombrePER;
    int lvlhambrePER;
    int lvlafectoPER;

public:
    perrtio();
    perrito(std::string raPER, std::string nomPER, int hamPER, int afecPER): razaPER(raPER), nombrePER(nomPER), lvlhambrePER(hamPER), lvlafectoPER(afecPER){};

    std::string get_razaPER();
    std:: string get_nombrePER();
    int get_lvlhambrePER();
    int get_lvlafectoPER();

    void set_razaPER(std::string );
    void set_nombrePER(std::string );
    void set_lvlhambrePER(int );
    void set_lvlafectoPER(int );
};


//funciones conejito
std::string conejito::get_razaCON(){
    return razaCON;
}

std:: string conejito::get_nombreCON(){
    return nombreCON;
}

int conejito::get_lvlhambreCON(){
    return lvlhambreCON;
}

int conejito::get_lvlafectoCON(){
    return lvlafectoCON;
}

void conejito::set_razaCON(std::string raCON){
    razaCON = raCON;
}

void conejito::set_nombreCON(std::string nomCON){
    nombreCON = nomCON;
}

//funciones gatito

std::string gatito::get_razaGAT(){
    return razaGAT;
}

std:: string gatito::get_nombreGAT(){
    return nombreGAT;
}

int gatito::get_lvlhambreGAT(){
    return lvlhambreGAT;
}

int gatito::get_lvlafectoGAT(){
    return lvlafectoGAT;
}

void gatito::set_razaGAT(std::string ra){
    razaGAT = ra;
}

void gatito::set_nombreGAT(std::string nom){
    nombreGAT = nom;
}

//funciones perrito

std::string perrito::get_razaPER(){
    return razaPER;
}

std:: string perrito::get_nombrePER(){
    return nombrePER;
}

int perrito::get_lvlhambrePER(){
    return lvlhambrePER;
}

int perrito::get_lvlafectoPER(){
    return lvlafectoPER;
}

void perrito::set_razaPER(std::string ra){
    razaPER = ra;
}

void perrito::set_nombrePER(std::string nom){
    nombrePER = nom;
}
