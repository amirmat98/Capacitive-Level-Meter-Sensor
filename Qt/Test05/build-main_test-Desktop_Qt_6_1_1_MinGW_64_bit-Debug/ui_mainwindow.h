/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Sherkat_logo_pic;
    QLabel *label;
    QLabel *university_logo_pic;
    QWidget *widget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLCDNumber *lcdNumber;
    QProgressBar *progressBar;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1030, 714);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Sherkat_logo_pic = new QLabel(centralwidget);
        Sherkat_logo_pic->setObjectName(QString::fromUtf8("Sherkat_logo_pic"));
        Sherkat_logo_pic->setGeometry(QRect(850, 10, 170, 150));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Sherkat_logo_pic->sizePolicy().hasHeightForWidth());
        Sherkat_logo_pic->setSizePolicy(sizePolicy1);
        Sherkat_logo_pic->setPixmap(QPixmap(QString::fromUtf8(":/img/10320742921.jpg")));
        Sherkat_logo_pic->setScaledContents(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 10, 671, 141));
        university_logo_pic = new QLabel(centralwidget);
        university_logo_pic->setObjectName(QString::fromUtf8("university_logo_pic"));
        university_logo_pic->setGeometry(QRect(10, 10, 150, 150));
        sizePolicy1.setHeightForWidth(university_logo_pic->sizePolicy().hasHeightForWidth());
        university_logo_pic->setSizePolicy(sizePolicy1);
        university_logo_pic->setPixmap(QPixmap(QString::fromUtf8(":/img/800px-University_of_Tehran_logo.svg.png")));
        university_logo_pic->setScaledContents(true);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(570, 180, 450, 450));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 181, 521, 451));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lcdNumber = new QLCDNumber(layoutWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        QFont font;
        font.setPointSize(37);
        font.setBold(false);
        lcdNumber->setFont(font);
        lcdNumber->setSegmentStyle(QLCDNumber::Filled);
        lcdNumber->setProperty("intValue", QVariant(82));

        gridLayout->addWidget(lcdNumber, 2, 0, 1, 1);

        progressBar = new QProgressBar(layoutWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setAcceptDrops(false);
        progressBar->setLayoutDirection(Qt::LeftToRight);
        progressBar->setValue(24);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        gridLayout->addWidget(progressBar, 3, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(36);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setTextFormat(Qt::RichText);
        label_2->setScaledContents(false);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1030, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Sherkat_logo_pic->setText(QString());
        label->setText(QString());
        university_logo_pic->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "                   height", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
