#ifndef MOTO
#define MOTO


#include "Veiculo.h"

class Moto : public Veiculo{
    private:
        string guidao;
    public:
        Moto(string nome_veiculo, string guidao);

        void detalhes() override;
};


#endif