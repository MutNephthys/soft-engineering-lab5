#ifndef MANUALCONFIRMATION_H
#define MANUALCONFIRMATION_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ManualConfirmation; }
QT_END_NAMESPACE

class ManualConfirmation : public QMainWindow
{
    Q_OBJECT

public:
    ManualConfirmation(QWidget *parent = nullptr);
    ~ManualConfirmation();

private:
    Ui::ManualConfirmation *ui;
};
#endif // MANUALCONFIRMATION_H
