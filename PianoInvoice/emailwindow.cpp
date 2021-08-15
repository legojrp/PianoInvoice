#include "emailwindow.h"
#include "ui_emailwindow.h"

EmailWindow::EmailWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EmailWindow)
{
    ui->setupUi(this);
}

EmailWindow::~EmailWindow()
{
    delete ui;
}
