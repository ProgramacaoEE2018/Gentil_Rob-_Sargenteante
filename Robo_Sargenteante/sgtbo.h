#ifndef SGTBO_H
#define SGTBO_H
#include "militar.h"
#include "escala.h"
#include "nova_escala.h"
#include "novo_militar.h"
#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class Sgtbo;
}

class Sgtbo : public QMainWindow
{
    Q_OBJECT

public:
    explicit Sgtbo(QWidget *parent = 0);
    ~Sgtbo();

private slots:
    void on_bI_Militar_clicked();

    void on_bI_Escala_clicked();

    void on_bA_Militar_clicked();

    void on_bFazer_Escala_clicked();

private:
    Novo_Militar *nmilitar;
    nova_escala *nescala;
    Ui::Sgtbo *ui;
};

#endif // SGTBO_H
