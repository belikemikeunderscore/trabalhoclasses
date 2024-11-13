#ifndef CARRO
#define CARRO

#include "Veiculo.h"

class Carro : public Veiculo{
    private:
        int portas;
    public:
    Carro(string nome_veiculo, int portas);

    void detalhes() override;
};

#endif