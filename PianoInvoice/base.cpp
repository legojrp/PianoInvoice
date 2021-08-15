#include "base.h"
#include "ui_base.h"

Base::Base(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Base)
{
    ui->setupUi(this);
}

Base::~Base()
{
    delete ui;
}
//emailwindow = New EmailWindow(this);
//EmailWindow->show();
//settings = New Settings(this);
//Settings->show();

void Base::on_Save_clicked()
{
    ui->AutoSave->setStyleSheet("background-color: rgb(00, 255, 00)");
}

