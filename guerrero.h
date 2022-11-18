#include <string>
using namespace std;

#include <string>
using namespace std;

//clase Personaje

class Personaje{
private:
    std:: string nombrePER;
    int lvldanoPER;
    int lvlvidaPER;
    int lvlvelocidadPER;

public:
    Personaje();
    Personaje(std::string nomPER, int danPER, int vidPER, int velPER):\
    nombrePER(nomPER), lvldanoPER(danPER), lvlvidaPER(vidPER), lvlvelocidadPER(velPER){};

    std:: string get_nombrePER();
    int get_lvldanoPER();
    int get_lvlvidaPER();
    int get_lvlvelocidadPER();

    void set_nombrePER(std::string );
    void set_lvldanoPER(int );
    void set_lvlvidaPER(int );
    void set_lvlvelocidadPER(int );
};

//clase Arma

class Arma{
private:
    std::string tipoAR;
    std:: string nombreAR;
    int lvldanoAR;

public:
    Arma();
    Arma(std::string tipAR, std::string nomAR, int danAR): tipoAR(tipAR), nombreAR(nomAR), lvldanoAR(danAR){};

    std::string get_tipoAR();
    std:: string get_nombreAR();
    int get_lvldanoAR();

    void set_tipoAR(std::string );
    void set_nombreAR(std::string );
    void set_lvldanoAR(int );
};

//clase Oponente

class Oponente{
private:
    std:: string nombreOP;
    int lvlvidaOP;
    int lvldanoOP;

public:
    Oponente();
    Oponente(std::string nomOP, int vidOP, int danOP): nombreOP(nomOP), lvlvidaOP(vidOP), lvldanoOP(danOP){};

    std:: string get_nombreOP();
    int get_lvlvidaOP();
    int get_lvldanoOP();

    void set_nombreOP(std::string );
    void set_lvlvidaOP(int );
    void set_lvldanoOP(int );
};


//funciones Personaje

std:: string Personaje::get_nombrePER(){
    return nombrePER;
}

int Personaje::get_lvldanoPER(){
    return lvldanoPER;
}

int Personaje::get_lvlvidaPER(){
    return lvlvidaPER;
}

void Personaje::set_nombrePER(std::string nomPER){
    nombrePER = nomPER;
}

//funciones Arma

std::string Arma::get_tipoAR(){
    return tipoAR;
}

std:: string Arma::get_nombreAR(){
    return nombreAR;
}

int Arma::get_lvldanoAR(){
    return lvldanoAR;
}

void Arma::set_tipoAR(std::string tipAR){
    tipoAR = tipAR;
}

void Arma::set_nombreAR(std::string nomAR){
    nombreAR = nomAR;
}

//funciones Oponente

std:: string Oponente::get_nombreOP(){
    return nombreOP;
}

int Oponente::get_lvlvidaOP(){
    return lvlvidaOP;
}

int Oponente::get_lvldanoOP(){
    return lvldanoOP;
}

void Oponente::set_nombreOP(std::string nomOP){
    nombreOP = nomOP;
}

//Se cambio la idea de proyecto para adaptarlo a lo que se vera en el curso
//Por eso faltan declarar clases y funciones que estan en el UML
