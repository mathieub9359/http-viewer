#include "mainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setFixedSize(600, 600);
    m_button = new QPushButton("hello", this);
}
