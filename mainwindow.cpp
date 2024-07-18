#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QListWidgetItem> // Include this header file
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QIODevice>

const QString path = "tasks.txt"; // Define the path to the file

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QFile file(path);

    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) // Ensure the file is opened in text mode
    {
        QMessageBox::information(0, "error", file.errorString());
    }
    QTextStream in(&file);

    while (!in.atEnd())
    {
        QListWidgetItem* item = new QListWidgetItem(in.readLine(), ui->listWidget);
        ui->listWidget->addItem(item);
        item->setFlags(item->flags() | Qt::ItemIsEditable);
    }
    file.close();
}

MainWindow::~MainWindow()
{
    delete ui;
    QFile file(path);

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) // Ensure the file is opened in write-only text mode
    {
        QMessageBox::information(0, "error", file.errorString());
    }
    QTextStream out(&file);

    for (int i = 0; i < ui->listWidget->count(); ++i)
    {
        out << ui->listWidget->item(i)->text() << "\n";
    }
    file.close();
}

void MainWindow::on_btnadd_clicked()
{
    QListWidgetItem* item = new QListWidgetItem(ui->txttask->text(), ui->listWidget);
    ui->listWidget->addItem(item);
    // Allow the user to edit the text
    item->setFlags(item->flags() | Qt::ItemIsEditable);
    // Clear the input field for the next task
    ui->txttask->clear();
    ui->txttask->setFocus();
}

void MainWindow::on_btnremove_clicked()
{
    QListWidgetItem* item = ui->listWidget->takeItem(ui->listWidget->currentRow());
    delete item;
}

void MainWindow::on_btnremoveall_clicked()
{
    ui->listWidget->clear();
}
