#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "joueurwindow.h"
#include "mjwindow.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    MJWindow *v;
    JoueurWindow *w;


private slots:
    void mjclicked();
    void playclicked();
};

#endif // MAINWINDOW_H
