#include "militar.h"

Militar::Militar()
{

}
void Militar::Alterar_Militar(int a, bool b)
{
    DiasSemServir = a;
    apto = b;
}
Militar Militar::Trocar_Servico(Militar m)
{
    return m;
}
void Militar::Tornar_inapto()
{
    apto = false;
}
