#include "manualconfirmation.h"
#include "ui_manualconfirmation.h"
#include <QFile>
#include <QList>
#include <QDebug>
#include <QIODevice>
#include <QPushButton>
#include <QApplication>

ManualConfirmation::ManualConfirmation(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ManualConfirmation)
{
    readFile();
    ui->setupUi(this);
    //closeWindow();
    index=0;
    confirm();
}

ManualConfirmation::~ManualConfirmation()
{
    delete ui;
}

void ManualConfirmation::readFile()
{
    QFile toConfirm("../output/equal.csv");
    toConfirm.open(QFile::ReadOnly);
    while(!toConfirm.atEnd())
    {
        QTextStream in(&toConfirm);
        QString str=in.readLine(); //"file1,file2"
        while(!in.atEnd())
        {
            str=in.readLine();
            container.push_back(str);
            //qDebug()<<"This is a string: "<<str;
        }
    }
    for(int i=0;i<container.size();i++)
    {
        files.append(container[i].split(','));
        //qDebug()<<files[0]<<" "<<files[1];
    }
    toConfirm.close();
}

void ManualConfirmation::showCPP()
{
    index++;
    if(index >= container.size()){
        index = container.size() - 1;
        return;
    }
    QString s1="../"+files[index][0];
    QString s2="../"+files[index][1];
    QFile f1(s1);
    QFile f2(s2);
    f1.open(QFile::ReadOnly);
    f2.open(QFile::ReadOnly);
    ui->label_3->setText(files[index][0]);
    ui->label_4->setText(files[index][1]);
    QString cpp1;
    QString cpp2;
    while(!f1.atEnd())
    {
        QTextStream in(&f1);
        while(!in.atEnd())
        {
            QString line1=in.readLine();
            cpp1.append(line1+'\n');
        }
    }
    while(!f2.atEnd())
    {
        QTextStream in(&f2);
        while(!in.atEnd())
        {
            QString line2=in.readLine();
            cpp2.append(line2+'\n');
        }
    }
    ui->label->setText(cpp1);
    ui->label_2->setText(cpp2);
    f1.close();
    f2.close();

}

void ManualConfirmation::writeFile(int judge)
{
    QFile r("../output/result.csv");
    r.open(QFile::Append);
    QString line=container[index]+",";
    if(judge==EQUAL)
    {
        line+="equal";
    }
    else if(judge==INEQUAL)
    {
        line+="inequal";
    }
    else if(judge==DOUBT)
    {
        line+="doubt";
    }
    QTextStream out(&r);
    out<<line.toUtf8()<<Qt::endl;
    r.close();
    showDialog(index);
}

void ManualConfirmation::writeEQUAL()
{
    writeFile(EQUAL);
}
void ManualConfirmation::writeINEQUAL()
{
    writeFile(INEQUAL);

}
void ManualConfirmation::writeDOUBT()
{
    writeFile(DOUBT);

}
void ManualConfirmation::confirm()
{
    QFile r("../output/result.csv");
    r.open(QFile::WriteOnly);
    QTextStream title(&r);
    title << "file1,file2,result" << Qt::endl;
    r.close();
    if(index<container.size())
    {
        qDebug()<<index;
        showDialog(index);
        connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(writeEQUAL()));
        connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(writeINEQUAL()));
        connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(writeDOUBT()));
        connect(ui->pushButton_4,SIGNAL(clicked(bool)),this,SLOT(showCPP()));
    }
    else
    {
        closeWindow();
    }
    //ui->label->clear();
    //ui->label_2->clear();
}
void ManualConfirmation::showDialog(int index)
{
    Dialog*newd=new Dialog(this,index,container.size());
    newd->setLabel(index,container.size());
    newd->exec();
}
void ManualConfirmation::closeWindow()
{
    d=new Dialog(this,index,container.size());
    d->show();
}
