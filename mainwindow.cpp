#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    ui->radioButton->setText("Список");
    ui->radioButton_2->setText("Тут пока ничего нет");


    ui->comboBox->addItem("Легко");
    ui->comboBox->addItem("Просто");
    ui->comboBox->addItem("Нормально");
    ui->comboBox->addItem("Тяжко");
    ui->comboBox->addItem("Эпично");


    ui->pushButton->setText("Жмякни меня");


    ui->pushButton->setCheckable(true);


    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

      int currentValue = ui->progressBar->value();

      currentValue += 10;

      if (currentValue > 100) {
          currentValue = 0;
      }

      ui->progressBar->setValue(currentValue);
  }

