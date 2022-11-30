/********************************************************************************
** Form generated from reading UI file 'manualconfirmation.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANUALCONFIRMATION_H
#define UI_MANUALCONFIRMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManualConfirmation
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ManualConfirmation)
    {
        if (ManualConfirmation->objectName().isEmpty())
            ManualConfirmation->setObjectName("ManualConfirmation");
        ManualConfirmation->resize(800, 600);
        centralwidget = new QWidget(ManualConfirmation);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 60, 391, 471));
        QFont font;
        font.setBold(false);
        label->setFont(font);
        label->setMouseTracking(false);
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Plain);
        label->setLineWidth(1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(400, 60, 391, 471));
        label_2->setFrameShape(QFrame::Box);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 540, 161, 31));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(230, 540, 161, 31));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(410, 540, 171, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setEnabled(true);
        label_3->setGeometry(QRect(10, 40, 391, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label_3->setFont(font1);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAutoFillBackground(false);
        label_3->setFrameShape(QFrame::Box);
        label_3->setFrameShadow(QFrame::Plain);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(400, 40, 391, 21));
        label_4->setFont(font1);
        label_4->setFrameShape(QFrame::Box);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(210, 10, 371, 16));
        QFont font2;
        font2.setPointSize(10);
        label_5->setFont(font2);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(600, 540, 171, 31));
        ManualConfirmation->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ManualConfirmation);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        ManualConfirmation->setMenuBar(menubar);
        statusbar = new QStatusBar(ManualConfirmation);
        statusbar->setObjectName("statusbar");
        ManualConfirmation->setStatusBar(statusbar);

        retranslateUi(ManualConfirmation);

        QMetaObject::connectSlotsByName(ManualConfirmation);
    } // setupUi

    void retranslateUi(QMainWindow *ManualConfirmation)
    {
        ManualConfirmation->setWindowTitle(QCoreApplication::translate("ManualConfirmation", "ManualConfirmation", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("ManualConfirmation", "equal", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ManualConfirmation", "inequal", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ManualConfirmation", "doubt", nullptr));
        label_3->setText(QCoreApplication::translate("ManualConfirmation", "File1", nullptr));
        label_4->setText(QCoreApplication::translate("ManualConfirmation", "File2", nullptr));
        label_5->setText(QCoreApplication::translate("ManualConfirmation", "Please compare the two files and click the button to judge.", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ManualConfirmation", "next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManualConfirmation: public Ui_ManualConfirmation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUALCONFIRMATION_H
