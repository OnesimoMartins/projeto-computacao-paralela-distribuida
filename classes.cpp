#include "list"

class Assunto{
public:
    int id;
    double pontuacoes;
};

class Documento{
public:
    int id;
    std::list<Assunto*> assuntos;
};

class Armario{
    public:
     int id;
     std::list<Documento> lista;
};

class InicilizadorPrograma{
private:
    int numeroArmarios;
    int numeroDocumentos;
    int numeroAssuntos;
    std::list<Documento*> docs;

    static int* lerFicheiro(){
        //TODO: read the file of the content
        static int  arr[] = {1, 2, 3};
        return arr;
    }

    void CriarObjetos(){

        for (int i=0;i<numeroDocumentos;i++) {
            auto doc= new Documento();
            for (int j = 0; j < numeroAssuntos; ++j) {
                auto  assunto=new Assunto();
                doc->assuntos.push_back(assunto);
            }
            docs.push_back(doc);
        }
    }

public:
     InicilizadorPrograma(){
        int* variaveis=lerFicheiro();
        this->numeroArmarios=variaveis[0];
        this->numeroDocumentos=variaveis[1];
        this->numeroAssuntos=variaveis[2];
     };

};
