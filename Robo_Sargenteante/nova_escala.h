#ifndef NOVA_ESCALA_H
#define NOVA_ESCALA_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class nova_escala;
}

class nova_escala : public QDialog
{
    Q_OBJECT

public:
    explicit nova_escala(QWidget *parent = 0);
    ~nova_escala();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::nova_escala *ui;
};

#endif // NOVA_ESCALA_H
