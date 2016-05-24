#ifndef MJWINDOW_H
#define MJWINDOW_H

#include <QMainWindow>

namespace Ui {
class MJWindow;
}

class MJWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MJWindow(QWidget *parent = 0);
    ~MJWindow();

private:
    Ui::MJWindow *ui;
};

#endif // MJWINDOW_H
