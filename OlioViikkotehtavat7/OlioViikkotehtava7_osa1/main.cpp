#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(320, 240);
    w.show();
    w.setWindowTitle(
        QApplication::translate("toplevel", "Laskin"));
    //käynnistää ohjelman
    return a.exec();
}
