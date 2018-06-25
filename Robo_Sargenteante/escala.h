#ifndef ESCALA_H
#define ESCALA_H
#include <iostream>
#include <vector>
#include "militar.h"



class Escala
{
    std::vector<int> dias;
    std::vector<Militar> servidores;
public:
    Escala();
    Escala(std::vector<int> a)
    {
        dias = a;
    }
    void Adicionar_Militar(Militar);
    void Realizar_Troca(Militar, Militar);
    void Baixar_Militar(Militar);
};

#endif // ESCALA_H
