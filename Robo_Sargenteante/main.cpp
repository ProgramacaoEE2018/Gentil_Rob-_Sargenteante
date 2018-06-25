#include "sgtbo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Sgtbo w;
    w.show();
    QString nome;

    return a.exec();
}
