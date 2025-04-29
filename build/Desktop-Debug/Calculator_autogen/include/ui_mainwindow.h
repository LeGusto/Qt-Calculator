/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *firstNum;
    QLineEdit *secondNum;
    QPushButton *plusBtn;
    QPushButton *minusBtn;
    QPushButton *divBtn;
    QPushButton *timesBtn;
    QLabel *label_3;
    QLineEdit *resultNum;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(392, 280);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 40, 91, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 70, 111, 20));
        firstNum = new QLineEdit(centralwidget);
        firstNum->setObjectName("firstNum");
        firstNum->setGeometry(QRect(150, 40, 113, 26));
        secondNum = new QLineEdit(centralwidget);
        secondNum->setObjectName("secondNum");
        secondNum->setGeometry(QRect(150, 70, 113, 26));
        plusBtn = new QPushButton(centralwidget);
        plusBtn->setObjectName("plusBtn");
        plusBtn->setGeometry(QRect(120, 140, 21, 26));
        minusBtn = new QPushButton(centralwidget);
        minusBtn->setObjectName("minusBtn");
        minusBtn->setGeometry(QRect(160, 140, 21, 26));
        divBtn = new QPushButton(centralwidget);
        divBtn->setObjectName("divBtn");
        divBtn->setGeometry(QRect(200, 140, 21, 26));
        timesBtn = new QPushButton(centralwidget);
        timesBtn->setObjectName("timesBtn");
        timesBtn->setGeometry(QRect(240, 140, 21, 26));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 210, 58, 18));
        resultNum = new QLineEdit(centralwidget);
        resultNum->setObjectName("resultNum");
        resultNum->setGeometry(QRect(150, 210, 113, 26));
        resultNum->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "First number:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Second number:", nullptr));
        plusBtn->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        minusBtn->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        divBtn->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        timesBtn->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
