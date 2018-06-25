#include "novo_militar.h"
#include "ui_novo_militar.h"


Novo_Militar::Novo_Militar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Novo_Militar)
{
    ui->setupUi(this);
    connect(this, SIGNAL(accepted()), qApp, SLOT(setStyleSheet(QString)));

}

Novo_Militar::~Novo_Militar()
{
    delete ui;
}

void Novo_Militar::on_ok_button_accepted()
{

    QMessageBox::critical(this, "ERRO", "não foi possivel inserir militar");

}
