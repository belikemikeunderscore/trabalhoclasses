#include "Carro.h"

Carro::Carro(string Nome_veiculo, int numeroportas) : Veiculo(Nome_veiculo)
{
    portas = numeroportas;
}

void Carro::detalhes(){
    Veiculo::detalhes();
    cout << "Portas: " << portas << endl;
}