#include "manualconfirmation.h"
#include "ui_manualconfirmation.h"

ManualConfirmation::ManualConfirmation(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ManualConfirmation)
{
    ui->setupUi(this);
}

ManualConfirmation::~ManualConfirmation()
{
    delete ui;
}

