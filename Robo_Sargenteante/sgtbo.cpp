#include "sgtbo.h"
#include "ui_sgtbo.h"

Sgtbo::Sgtbo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Sgtbo)
{
    ui->setupUi(this);
    nmilitar = new Novo_Militar(this);
    nescala = new nova_escala(this);



}

Sgtbo::~Sgtbo()
{
    delete ui;
}

void Sgtbo::on_bI_Militar_clicked()
{
   nmilitar ->exec();
}

void Sgtbo::on_bI_Escala_clicked()
{
    nescala ->exec();
}

void Sgtbo::on_bA_Militar_clicked()
{
    QMessageBox::critical(this, "ERRO", "Insira um militar primeiro");
}

void Sgtbo::on_bFazer_Escala_clicked()
{
    QMessageBox::critical(this, "ERRO", "Insira uma escala primeiro");
}
