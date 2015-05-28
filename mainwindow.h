#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
    void keyPressEvent(QKeyEvent *);
    void bornpicture();
    void init();
private slots:
    void on_lcdNumber_overflow();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    int a2048[17];
    int count;
    int over;
    int n;
    int i;
    int k;
    int j;
    int l;
    int p;
    int score;
};

#endif // MAINWINDOW_H
