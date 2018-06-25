#ifndef NOVO_MILITAR_H
#define NOVO_MILITAR_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class Novo_Militar;
}

class Novo_Militar : public QDialog
{
    Q_OBJECT

public:
    explicit Novo_Militar(QWidget *parent = 0);
    ~Novo_Militar();

private slots:
    void on_ok_button_accepted();

private:
    Ui::Novo_Militar *ui;
};

#endif // NOVO_MILITAR_H
