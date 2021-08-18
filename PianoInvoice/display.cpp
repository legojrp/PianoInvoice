#include "display.h"
#include <QString>
#include "..\..\UserDataHandledCpp\UserDataHandler.cpp"
#include "ui_base.h"
#include <QTableWidgetItem>
#include <iostream>
#include <fstream>
void displayTo(){

};
void fromDisplay(Ui::Base *ui){
    std::ofstream file("C:\\Users\\");
bool xy = false;
int x = 0;
int y = 0;
while (xy == false){
    QTableWidgetItem* item = ui->tableWidget->item(x, y);
    if (item->text() != nullptr){

    }
}
};


