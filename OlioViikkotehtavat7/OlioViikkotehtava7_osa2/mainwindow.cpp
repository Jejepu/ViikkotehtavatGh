#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //display alustus
    ui->num1->setText(number1);
    ui->num2->setText(number2);
    ui->result->setText(QString::number(result));


    //painikkeiden yhdistys
    connect(ui->N0, QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N1, QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N2, QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N3, QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N4, QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N5, QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N6, QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N7, QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N8, QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N9, QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->clear, QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);
    connect(ui->enter, QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);
    connect(ui->add, QPushButton::clicked, this, &MainWindow::addSubMulDivHandler);
    connect(ui->sub, QPushButton::clicked, this, &MainWindow::addSubMulDivHandler);
    connect(ui->mul, QPushButton::clicked, this, &MainWindow::addSubMulDivHandler);
    connect(ui->div, QPushButton::clicked, this, &MainWindow::addSubMulDivHandler);




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler(int n) //päättää meneekö number 1 vai 2
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    if(!clickedButton) return;

    int digitValue = clickedButton->text().toInt();

    if(state == 1){
        number1 += QString::number(digitValue);
        ui->num1->setText(number1);
    }
    else{
        number2 += QString::number(digitValue);
        ui->num2->setText(number2);
    }
}

void MainWindow::clearAndEnterClickHandler()
{
    //Clear näppäin asettaa state = 1, number1 =””, number2=””
    //ja nollaa QLineEdit ikkunat.
    //Enter näppäin muuttaa number1 ja number2 Qstring arvot
    //float arvoiksi ja tekee operand muuttujan mukaisen
    //laskutoimituksen ja tallentaa tuloksen result muuttujaan,
    //jonka tulos kirjoitetaan tietysti QLineEdit ikkunaan.

    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    if(!clickedButton) return;
    if(clickedButton == ui->clear)   //jos painettu painike clear
    {
        number1.clear();
        number2.clear();
        result = 0;
        ui->num1->clear();
        ui->num2->clear();
        ui->result->setText("0");
        state = 1; }//

        else if(clickedButton == ui->enter){
        float number1Float = number1.toFloat();   //muutta number1 ja 2 floatiksi
        float number2Float = number2.toFloat();

        switch (operand) {
        case 0: result = number1Float + number2Float; break;
        case 1: result = number1Float - number2Float; break;
        case 2: result = number1Float * number2Float; break;
        case 3: result = number1Float / number2Float; break;
            return;
        }


        }
    ui->result->setText(QString::number(result));
    }

void MainWindow::addSubMulDivHandler()
{

    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    if(!clickedButton) return;

    if(clickedButton == ui->add) operand = 0;
    else if (clickedButton == ui->sub) operand = 1;
    else if (clickedButton == ui->mul) operand = 2;
    else if (clickedButton == ui->div) operand = 3;

    state = 2;
    }
    //+,-,* tai / näppäin tallentaa operand muuttujaan numeron 0,1,2,3
//    sen mukaan mitä operaatiota oli painettu
    //ja vaihtaa state = 1 => state = 2,
//    jolloin numeronäppäimet ”keräävät” merkkejä number2 muuttujaan.



void MainWindow::resetLineEdits()
{
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
}
