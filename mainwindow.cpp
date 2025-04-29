#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int num1 = 0;
int num2 = 0;
long long res = 0;
QString str = "";

void MainWindow::on_plusBtn_clicked()
{
    num1 = ui->firstNum->text().toInt();
    num2 = ui->secondNum->text().toInt();
    res = num1 + num2;
    str = QString::number(res);
    ui->resultNum->setText(str);
}


void MainWindow::on_minusBtn_clicked()
{
    num1 = ui->firstNum->text().toInt();
    num2 = ui->secondNum->text().toInt();
    res = num1 - num2;
    str = QString::number(res);
    ui->resultNum->setText(str);
}


void MainWindow::on_divBtn_clicked()
{
    num1 = ui->firstNum->text().toInt();
    num2 = ui->secondNum->text().toInt();
    num1 != 0 ? res = num1 / num2 : res = 0;
    str = QString::number(res);
    ui->resultNum->setText(str);
}


void MainWindow::on_timesBtn_clicked()
{
    num1 = ui->firstNum->text().toInt();
    num2 = ui->secondNum->text().toInt();
    res = num1 * num2;
    str = QString::number(res);
    ui->resultNum->setText(str);
}

