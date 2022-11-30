#ifndef MANUALCONFIRMATION_H
#define MANUALCONFIRMATION_H

#include <QMainWindow>
#include "dialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ManualConfirmation; }
QT_END_NAMESPACE

class ManualConfirmation : public QMainWindow
{
    Q_OBJECT

public:
    ManualConfirmation(QWidget *parent = nullptr);
    ~ManualConfirmation();
    void readFile();
    void confirm();
    void closeWindow();
    int getIndex(){return index;}
    int getContainerSize(){return container.size();}
    void showDialog(int index);



private:
    Ui::ManualConfirmation *ui;
    QList<QString> container;
    QList<QStringList> files;
    int index;
    const int EQUAL=0;
    const int INEQUAL=1;
    const int DOUBT=2;
    Dialog*d;

private slots:
    void writeFile(int judge);
    void showCPP();
    void writeEQUAL();
    void writeINEQUAL();
    void writeDOUBT();

};
#endif // MANUALCONFIRMATION_H
