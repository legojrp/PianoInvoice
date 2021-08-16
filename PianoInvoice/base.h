#ifndef BASE_H
#define BASE_H

#include <QMainWindow>
#include "emailwindow.h"
#include "settings.h"
#include <QTreeWidgetItem>
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



    void on_tableWidget_cellChanged(int row, int column);

    void on_NewRow_clicked();

    void on_NewColumn_clicked();

private:
    Ui::Base *ui;
    EmailWindow emailwindow;
    Settings settings;
};
#endif // BASE_H
