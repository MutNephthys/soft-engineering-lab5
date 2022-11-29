#include "manualconfirmation.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ManualConfirmation w;
    w.show();
    return a.exec();
}
