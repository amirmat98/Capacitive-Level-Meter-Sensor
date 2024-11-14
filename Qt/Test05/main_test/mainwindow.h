#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <QQuickView>
#include <QSerialPort>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void serialRecived();

private:
    Ui::MainWindow *ui;
    QQuickView *view;
    QWidget *qmlwidget;
};
#endif // MAINWINDOW_H
