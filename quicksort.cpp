
#include "quicksort.h"

#include <QElapsedTimer>
#include <QDebug>


void QuickSort::recvArr(QVector<int> arr)
{
    m_arr = arr;
}

QuickSort::QuickSort(QObject *parent):QThread{parent}
{

}

void QuickSort::run()
{
    //现在已经接收到了这个函数
    //直接调用std中的算法
    qDebug()<<"快排正在执行,线程是"<<QThread::currentThread()<<" "<<m_arr.size();

    QElapsedTimer time;
    time.start();
    std::sort(m_arr.begin(),m_arr.end());
    qDebug()<<"快速拍戏所用时间:"<<time.elapsed();
    finish(m_arr);
}

