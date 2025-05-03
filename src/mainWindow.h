#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QComboBox>
#include <QLineEdit>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

private:
    QComboBox *m_dropdownMenu;
    QLineEdit *m_serverInput;
    QPushButton *m_submitButton;
};
#endif // MAINWINDOW_H
