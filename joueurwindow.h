#ifndef JOUEURWINDOW_H
#define JOUEURWINDOW_H

#include "formcrea.h"

#include <QMainWindow>

namespace Ui {
class JoueurWindow;
}

class JoueurWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit JoueurWindow(QWidget *parent = 0);
    ~JoueurWindow();

private:
    Ui::JoueurWindow *ui;
    FormCrea *contenu;

private slots:
    void newClicked();
};

#endif // JOUEURWINDOW_H
