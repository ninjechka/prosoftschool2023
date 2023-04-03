#include "mainwindow.h"
#include <QTimer>
#include <QRandomGenerator>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    m_mainWidget = new QWidget(this);

    const int width = 400;
    const int height = 800;

    setCentralWidget(m_mainWidget);
    resize(width, height);

    QRandomGenerator generator;
    m_timer = new QTimer(this);

    int time = generator.global()->bounded(100, 1000);
    m_timer->start(time);

    connect(m_timer, &QTimer::timeout, this, [this, &generator]() {
        int time = generator.global()->bounded(100, 1000);
        m_timer->start(time);

        const int buttonWidth = 30;

        int y = generator.global()->bounded(100);
        int x = generator.global()->bounded(geometry().width() - buttonWidth);

        QPushButton* button = new QPushButton("*", this);
        button->setGeometry(x, y, buttonWidth, buttonWidth);
        button->show();

        connect(button, &QPushButton::released, this, [button]() {
            button->deleteLater();
        });

        QTimer* bTimer = new QTimer(button);
        bTimer->start(generator.global()->bounded(100, 400));

        connect(bTimer, &QTimer::timeout, this, [this, button]() {
            int y =button->pos().y();
            int step = button->underMouse() ? 10 : 5;

            button->move(button->pos().x(), y + step);

            if (y >= geometry().height())
            {
                setWindowTitle("You LOOSE!");
                m_mainWidget->setStyleSheet("background-color:red");
                button->deleteLater();
            }
        });
    });
}


MainWindow::~MainWindow()
{
    m_mainWidget->deleteLater();
}


