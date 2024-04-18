#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <generate.h>
#include <BubbleSort.h>
#include <quicksort.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Generate* gen = new Generate;
    BubbleSort* bubble = new BubbleSort;
    QuickSort* quick =  new QuickSort;

    //2.启动子线程
    connect(this,&MainWindow::starting,gen,&Generate::recvNum);
    connect(ui->start,&QPushButton::clicked,this,[=](){
        //emit 只是一个关键字 没有任何特殊作用 只能方便阅读
        //与直接调用starting方法没什么区别
        emit starting(10000);
        gen->start();
    });



    //冒泡函数的执行过程
    //接受子线程发送的数据
    connect(gen,&Generate::sendArray,bubble,&BubbleSort::recvArr);
    connect(gen,&Generate::sendArray,quick,&QuickSort::recvArr);

    connect(gen,&Generate::sendArray,this,[=](QVector<int> list){
        quick->start();
        //现在已经有了数据了 启动另外一个线程
        bubble->start();

        for(int i =0;i<list.size();i++){
            ui->randomList->addItem(QString::number(list.at(i)));
        }

    });
    connect(bubble,&BubbleSort::finish,this,[=](QVector<int> arr){
        for(int i =0;i<arr.size();i++){
            ui->bubbleSort->addItem(QString::number(arr.at(i)));
        }
    });

    //快速排序


    connect(quick,&QuickSort::finish,this,[=](QVector<int> arr){
        qDebug()<<"快排完成";
        for(int i =0;i<arr.size();i++){
            qDebug()<<arr[i];
            ui->quickSort->addItem(QString::number(arr.at(i)));
        }
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}


