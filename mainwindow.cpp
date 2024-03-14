#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Подключаем сигнал clicked() кнопки pushButton к слоту onStartButtonClicked()
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::onStartButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onStartButtonClicked()
{
    qDebug() << "Start button clicked";
    QMessageBox::information(this, "information", "Старт программы!");
}
