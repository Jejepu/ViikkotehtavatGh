#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //display alustus
    ui->Display->setText(QString::number(result));

    //painikkeiden yhdistys
    connect(ui->CountButton, QPushButton::clicked, this, &MainWindow::countClickedHandler);
    connect(ui->ResetButton, QPushButton::clicked, this, &MainWindow::resetClickedHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::countClickedHandler()  //Count button lisää +1
{
    result ++;
    ui->Display->setText(QString::number(result));
}

void MainWindow::resetClickedHandler()
{
    result = 0;
    ui->Display->setText(QString::number(result));
}

