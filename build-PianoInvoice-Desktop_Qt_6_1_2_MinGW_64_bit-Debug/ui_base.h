/********************************************************************************
** Form generated from reading UI file 'base.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASE_H
#define UI_BASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Base
{
public:
    QAction *actionSomthing;
    QAction *actionHelp_Window;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QPushButton *Export;
    QPushButton *NewColumn;
    QPushButton *Save;
    QPushButton *ManualEdit;
    QPushButton *Restore;
    QPushButton *Settings;
    QPushButton *NewRow;
    QLabel *AutoSave;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Base)
    {
        if (Base->objectName().isEmpty())
            Base->setObjectName(QString::fromUtf8("Base"));
        Base->resize(800, 600);
        actionSomthing = new QAction(Base);
        actionSomthing->setObjectName(QString::fromUtf8("actionSomthing"));
        actionHelp_Window = new QAction(Base);
        actionHelp_Window->setObjectName(QString::fromUtf8("actionHelp_Window"));
        centralwidget = new QWidget(Base);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(151, 0));
        groupBox->setMaximumSize(QSize(151, 16777215));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        Export = new QPushButton(groupBox);
        Export->setObjectName(QString::fromUtf8("Export"));

        gridLayout_3->addWidget(Export, 0, 0, 1, 1);

        NewColumn = new QPushButton(groupBox);
        NewColumn->setObjectName(QString::fromUtf8("NewColumn"));

        gridLayout_3->addWidget(NewColumn, 2, 2, 1, 1);

        Save = new QPushButton(groupBox);
        Save->setObjectName(QString::fromUtf8("Save"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Save->sizePolicy().hasHeightForWidth());
        Save->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(Save, 1, 2, 1, 1);

        ManualEdit = new QPushButton(groupBox);
        ManualEdit->setObjectName(QString::fromUtf8("ManualEdit"));

        gridLayout_3->addWidget(ManualEdit, 3, 2, 1, 1);

        Restore = new QPushButton(groupBox);
        Restore->setObjectName(QString::fromUtf8("Restore"));

        gridLayout_3->addWidget(Restore, 0, 2, 1, 1);

        Settings = new QPushButton(groupBox);
        Settings->setObjectName(QString::fromUtf8("Settings"));

        gridLayout_3->addWidget(Settings, 3, 0, 1, 1);

        NewRow = new QPushButton(groupBox);
        NewRow->setObjectName(QString::fromUtf8("NewRow"));

        gridLayout_3->addWidget(NewRow, 2, 0, 1, 1);

        AutoSave = new QLabel(groupBox);
        AutoSave->setObjectName(QString::fromUtf8("AutoSave"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(AutoSave->sizePolicy().hasHeightForWidth());
        AutoSave->setSizePolicy(sizePolicy2);
        AutoSave->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));

        gridLayout_3->addWidget(AutoSave, 1, 0, 1, 1);


        horizontalLayout->addWidget(groupBox);

        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 9)
            tableWidget->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setShowGrid(true);
        tableWidget->setCornerButtonEnabled(true);

        horizontalLayout->addWidget(tableWidget);

        Base->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Base);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        Base->setMenuBar(menubar);
        statusbar = new QStatusBar(Base);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Base->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSomthing);
        menuHelp->addAction(actionHelp_Window);

        retranslateUi(Base);

        QMetaObject::connectSlotsByName(Base);
    } // setupUi

    void retranslateUi(QMainWindow *Base)
    {
        Base->setWindowTitle(QCoreApplication::translate("Base", "Base", nullptr));
        actionSomthing->setText(QCoreApplication::translate("Base", "Save", nullptr));
        actionHelp_Window->setText(QCoreApplication::translate("Base", "Help Window", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Base", "Actions", nullptr));
        Export->setText(QCoreApplication::translate("Base", "*Export*", nullptr));
        NewColumn->setText(QCoreApplication::translate("Base", "New Column", nullptr));
        Save->setText(QCoreApplication::translate("Base", "Save", nullptr));
        ManualEdit->setText(QCoreApplication::translate("Base", "Manually Edit Email", nullptr));
        Restore->setText(QCoreApplication::translate("Base", "Restore", nullptr));
        Settings->setText(QCoreApplication::translate("Base", "Open Settings", nullptr));
        NewRow->setText(QCoreApplication::translate("Base", "New Row", nullptr));
        AutoSave->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Base", "Student Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Base", "Email", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Base", "no. of lessons", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Base", "price", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Base", "total due", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Base", "books cost", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Base", "music ordered", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Base", "greeting", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Base", "closing", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Base", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("Base", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Base: public Ui_Base {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASE_H
