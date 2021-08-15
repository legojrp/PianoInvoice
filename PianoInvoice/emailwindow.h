#ifndef EMAILWINDOW_H
#define EMAILWINDOW_H

#include <QMainWindow>

namespace Ui {
class EmailWindow;
}

class EmailWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EmailWindow(QWidget *parent = nullptr);
    ~EmailWindow();

private:
    Ui::EmailWindow *ui;
};

#endif // EMAILWINDOW_H
