#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent,int index,int max) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    this->parent = parent;
    this->setModal(true);
    this->setWindowTitle("FINISHED");
    ui->setupUi(this);
    if(index<max-1)
    {
        connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(close()));
    }
    else
    {
        connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(closeWindow()));
    }
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::closeWindow()
{
    close();
    parent->close();
}

void Dialog::setLabel(int index,int max)
{
    if(index==0)
    {
        ui->textEdit->setText("Click OK to begin judging.");
    }
    else if(index < max - 1)
    {
        QString tips="Succeeded.";
        tips.append('\n');
        tips+="Click OK to judge the next group of files";
        ui->textEdit->setText(tips);
    }
    else
    {
        QString tips="All files have been judged.";
        tips.append('\n');
        tips+="Please click the Close button to exit the window";
        ui->textEdit->setText(tips);
    }
    ui->textEdit->show();
}
