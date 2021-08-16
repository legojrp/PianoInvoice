#include "base.h"
#include "ui_base.h"

Base::Base(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Base)
{
    ui->setupUi(this);
    ui->AutoSave->setStyleSheet("background-color: rgb(76, 255, 200)");
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




//ui->AutoSave->setStyleSheet("background-color: rgb(255, 00, 00)");

   //autosave::s_autosave();

void Base::on_tableWidget_cellChanged(int row, int column)
{
     //autosave::s_autosave();
    ui->AutoSave->setStyleSheet("background-color: rgb(255, 00, 00)");
}


void Base::on_NewRow_clicked()
{
    ui->tableWidget->insertRow( ui->tableWidget->rowCount() );
}


void Base::on_NewColumn_clicked()
{
    ui->tableWidget->insertColumn( ui->tableWidget->columnCount() );
}

