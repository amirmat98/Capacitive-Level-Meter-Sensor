#include "mainwindow.h"
#include "ui_mainwindow.h"

QSerialPort serial;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBar->setValue((ui->lcdNumber->value()/100)*100);

    view = new QQuickView(QUrl(QLatin1String("qrc:/main.qml")));
    //view = new QQuickView(QUrl(QLatin1String("qrc:/Percent.qml")));

    qmlwidget = QWidget::createWindowContainer(view,this);
    QGridLayout *layout = new QGridLayout(ui->widget);
    ui->widget->setLayout(layout);
    ui->widget->layout()->addWidget(qmlwidget);
    //setCentralWidget(qmlwidget);

    serial = new QSerialPort(this)
    serial->setProtName("com4");
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    serial->open(QIODevice::ReadWrite);
    //s erial.write("ok");
    connect(serial , SIGNAL(readyRead()) , this , SLOT(serialReceived));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::serialRecived()
{
    QByteArray ba;
    ba = serial->readAll();
    ui->lcdNumber->setValue(ba);
}

