#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::setClientPort(int p){

}

void MainWindow::on_buttonConnect_clicked(){

}

void MainWindow::on_buttonQuit_clicked(){

}
void MainWindow::updateLogStateChange(){

}
void MainWindow::brokerDisconnected(){

}
void MainWindow::on_buttonPublish_clicked(){

}
void MainWindow::on_buttonSubscribe_clicked(){

}
