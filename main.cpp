#include "Carro.h"
#include "Moto.h"

int main(){
    Carro car1("Carrinho", 3);
    Carro car2("Carrinho2", 5);


    Moto moto1("Vrum1","Guidão");
    Moto moto2("Vrum2","guidao");


    car1.detalhes();
    car2.detalhes();

    moto1.detalhes();
    moto2.detalhes();

    return 0;
    };