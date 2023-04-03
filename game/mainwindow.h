#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    QTimer *m_timer;
    QWidget* m_mainWidget;

    void checkBound();
};
#endif // MAINWINDOW_H
