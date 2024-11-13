#ifndef VEICULO
#define VEICULO

/**
 * protected: classes com heranças
 * private: nao pode ser vista por outras fora da class
 * public: publico
 */


#include <iostream>
using namespace std;

class Veiculo{
    protected:
        string nome_veiculo;


    public:
        Veiculo(string nome_veiculo);


    virtual void detalhes();

};
#endif