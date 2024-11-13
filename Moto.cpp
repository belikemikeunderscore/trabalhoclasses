#include "Moto.h"

Moto::Moto(string Nome_veiculo, string guidao) : Veiculo(Nome_veiculo)
{
    this->guidao = guidao;
}

void Moto::detalhes(){
    Veiculo::detalhes();
    cout << "Guidao: " << guidao << endl;
}