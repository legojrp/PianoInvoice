/********************************************************************************
** Form generated from reading UI file 'emailwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMAILWINDOW_H
#define UI_EMAILWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmailWindow
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EmailWindow)
    {
        if (EmailWindow->objectName().isEmpty())
            EmailWindow->setObjectName(QString::fromUtf8("EmailWindow"));
        EmailWindow->resize(800, 600);
        menubar = new QMenuBar(EmailWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        EmailWindow->setMenuBar(menubar);
        centralwidget = new QWidget(EmailWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        EmailWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(EmailWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        EmailWindow->setStatusBar(statusbar);

        retranslateUi(EmailWindow);

        QMetaObject::connectSlotsByName(EmailWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EmailWindow)
    {
        EmailWindow->setWindowTitle(QCoreApplication::translate("EmailWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmailWindow: public Ui_EmailWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMAILWINDOW_H
