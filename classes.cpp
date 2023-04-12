#include "list"

class Assunto{
public:
    int id;
    double pontuacoes;
};

class Documento{
public:
    int id;
    std::list<std::list<Assunto>> assuntos;
};

class Armario{
    public:
     int id;
     std::list<std::list<Documento>> lista;
};

class InicilizadorPrograma{
private:
    int numeroArmarios;
    int numeroDocumentos;
    int numeroAssuntos;

    int* lerFicheiro(){
        //TODO: read the file of the content

        static int  arr[] = {1, 2, 3};
        return arr;
    }

public:
     InicilizadorPrograma(){
        int* variaveis=lerFicheiro();
        this->numeroArmarios=variaveis[0];
        this->numeroDocumentos=variaveis[1];
        this->numeroAssuntos=variaveis[2];
     };

};
