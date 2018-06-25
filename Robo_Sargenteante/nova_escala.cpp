#include "nova_escala.h"
#include "ui_nova_escala.h"

nova_escala::nova_escala(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nova_escala)
{
    ui->setupUi(this);
    connect(this, SIGNAL(accepted()), qApp, SLOT(setStyleSheet(QString)));
}

nova_escala::~nova_escala()
{
    delete ui;
}

void nova_escala::on_buttonBox_accepted()
{
    QMessageBox::critical(this, "ERRO", "não foi possivel inserir escala");
}
