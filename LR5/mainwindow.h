#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "queue.h"
#include "addwindow.h"
#include "ring.h"
#include "ringviewwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    _Queue Q;
    Ui::MainWindow *ui;
    QStringList QueueToStringList();
    void RefreshListWidget();
    _Ring * QueueToRing();
};

#endif // MAINWINDOW_H
