#ifndef BASE_H
#define BASE_H

#include <QMainWindow>
#include "emailwindow.h"
#include "settings.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Base; }
QT_END_NAMESPACE

class Base : public QMainWindow
{
    Q_OBJECT

public:
    Base(QWidget *parent = nullptr);
    ~Base();

private slots:
    void on_Save_clicked();

private:
    Ui::Base *ui;
    EmailWindow emailwindow;
    Settings settings;
};
#endif // BASE_H
