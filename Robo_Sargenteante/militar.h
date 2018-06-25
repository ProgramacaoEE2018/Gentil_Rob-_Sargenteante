#ifndef MILITAR_H
#define MILITAR_H
#include <iostream>


class Militar
{
    std::string nome;
    int DiasSemServir;
    bool apto;
public:

    Militar();
    Militar( std::string b)
    {
        nome = b;
        DiasSemServir = 1;
        apto = true;
    }
    void Alterar_Militar(int, bool);

    Militar Trocar_Servico(Militar);

    void Tornar_inapto();

};

#endif // MILITAR_H
