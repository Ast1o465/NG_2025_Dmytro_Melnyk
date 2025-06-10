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

void MainWindow::on_b_0_clicked()
{
    ui->Le_display->setText(ui->Le_display->text() + "0");
}

void MainWindow::on_b_1_clicked()
{
    ui->Le_display->setText(ui->Le_display->text() + "1");
}

void MainWindow::on_b_plus_clicked()
{
    ui->Le_display->setText(ui->Le_display->text() + "+");
}


void MainWindow::on_b_equal_clicked()
{

}
