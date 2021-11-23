#include "Bebida.h"

Bebida::Bebida()
{
    //ctor
}

Bebida::Bebida(std::string nome, double preco, std::string id, int qtd, char tipo, std::string categoria, std::string sabor,
               int volume)
: Produto(nome, preco, id, qtd, tipo, categoria, sabor)
{
    this->volume = volume;
}

Bebida::~Bebida()
{
    //dtor
}

void Bebida::setVolume(int vol){
    volume = vol;
}

int Bebida::getVolume(){
    return volume;
}
