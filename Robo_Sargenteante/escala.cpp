#include "escala.h"

Escala::Escala()
{

}
void Escala::Adicionar_Militar(Militar m)
{
    servidores.push_back(m);
}
void Escala::Realizar_Troca(Militar m1, Militar m2)
{
    m1.Trocar_Servico(m2);
}
void Escala::Baixar_Militar(Militar m)
{
    m.Tornar_inapto();
}
