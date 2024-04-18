/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QListWidget *randList;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *bubbleList;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *quickList;
    QPushButton *start;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        randList = new QListWidget(groupBox);
        randList->setObjectName("randList");

        horizontalLayout->addWidget(randList);


        horizontalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        bubbleList = new QListWidget(groupBox_2);
        bubbleList->setObjectName("bubbleList");

        horizontalLayout_2->addWidget(bubbleList);


        horizontalLayout_4->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName("groupBox_3");
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        quickList = new QListWidget(groupBox_3);
        quickList->setObjectName("quickList");

        horizontalLayout_3->addWidget(quickList);


        horizontalLayout_4->addWidget(groupBox_3);


        verticalLayout->addWidget(widget);

        start = new QPushButton(centralwidget);
        start->setObjectName("start");

        verticalLayout->addWidget(start);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\351\232\217\346\234\272\346\225\260", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\206\222\346\263\241\346\216\222\345\272\217\347\273\223\346\236\234", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\345\277\253\351\200\237\346\216\222\345\272\217\347\273\223\346\236\234", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
