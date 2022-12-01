//clase Juego

class Juego{

    //Crear esqueleto de juego
    private:
    string nombreJUE;
    Mago mag;
    Caballero cab;
    Godin god;
    Oponente npc;
public:
    Juego();
    Juego(std::string nombreJUE, Mago, Caballero,\
    Godin, Oponente npc);

    std:: string get_nombreJUE();
    int get_guerreros();
    int get_npc();

    void set_nombreJUE(std::string );
    void set_guerreros(Personaje );
    void set_npc(Oponente );

    std:: string startgame();
};
