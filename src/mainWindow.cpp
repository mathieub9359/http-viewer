#include "mainWindow.h"

#include <QHBoxLayout>
#include <QComboBox>
#include <QWidget>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setFixedSize(800, 600);

    QWidget *central = new QWidget(this);
    setCentralWidget(central);

    QVBoxLayout *vLayout = new QVBoxLayout(central);
    vLayout->addSpacing(30);

    QWidget *inputContainer = new QWidget();
    QHBoxLayout *hInputLayout = new QHBoxLayout(inputContainer);
    hInputLayout->setContentsMargins(0, 0, 0, 0);
    m_dropdownMenu = new QComboBox();
    m_dropdownMenu->addItems({"GET", "POST", "PUT", "PATCH", "DELETE", "HEAD", "OPTIONS"});
    hInputLayout->addWidget(m_dropdownMenu);
    m_serverInput = new QLineEdit();
    m_serverInput->setFixedWidth(400);
    hInputLayout->addWidget(m_serverInput);
    vLayout->addWidget(inputContainer, 0, Qt::AlignHCenter);

    vLayout->addSpacing(10);

    QWidget *buttonContainer = new QWidget();
    QHBoxLayout *hButtonLayout = new QHBoxLayout(buttonContainer);
    hButtonLayout->setContentsMargins(0, 0, 0, 0);
    m_submitButton = new QPushButton("Send");
    hButtonLayout->addWidget(m_submitButton);
    buttonContainer->setFixedWidth(inputContainer->sizeHint().width());
    vLayout->addWidget(buttonContainer, 0, Qt::AlignHCenter);

    vLayout->addStretch();
}