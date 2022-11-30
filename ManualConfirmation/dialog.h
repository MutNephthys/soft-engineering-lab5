#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QApplication>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr,int index=0,int max=0);
    ~Dialog();
    void setLabel(int index,int max);


private:
    Ui::Dialog *ui;
    QWidget *parent;
private slots:
    void  closeWindow();
};

#endif // DIALOG_H
