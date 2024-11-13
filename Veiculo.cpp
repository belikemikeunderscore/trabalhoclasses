#include <Veiculo.h>

Veiculo::Veiculo(string Nome_veiculo){
    this->nome_veiculo = Nome_veiculo;
};

void Veiculo::detalhes(){
    cout << "nome do veiculo: " << nome_veiculo << endl;
};