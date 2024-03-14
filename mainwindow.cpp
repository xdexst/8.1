#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Подключаем сигнал clicked() кнопки pushButton к слоту onStartButtonClicked()
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::onStartButtonClicked);
    connect(ui->stopButton, &QPushButton::clicked, this, &MainWindow::onStopButtonClicked);
    connect(ui->pauseButton, &QPushButton::clicked, this, &MainWindow::onPauseButtonClicked);
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
void MainWindow::onStopButtonClicked()
{
    QMessageBox::information(this, "information", "Программа прекращена!");
}
void MainWindow::onPauseButtonClicked()
{
    QMessageBox::information(this, "Внимание", "Программа приостановлена");
}
