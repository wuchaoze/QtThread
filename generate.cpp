#include "generate.h"
#include <QVector>
#include <QElapsedTimer>
#include <QRandomGenerator>
#include <random>
#include <QDebug>
Generate::Generate(QObject *parent)
:QThread{parent}
{


}

void Generate::recvNum(int num)
{
    m_num = num;
}



void Generate::run()
{
    qDebug()<<"所用线程的地址"<<QThread::currentThread();
    QVector<int> list;
    QElapsedTimer time;
    time.start();
    for(int i = 0;i<m_num;i++)
        list.push_back(rand()%100000);
    int milsec = time.elapsed();
    qDebug()<<"所用时间"<< milsec<<"毫秒";

    emit sendArray(list);
}

