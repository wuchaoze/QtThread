
#include "BubbleSort.h"
#include <QDebug>
#include <iostream>
using namespace std;
//冒泡排序类


void BubbleSort::recvArr(QVector<int> arr)
{
    //vector中 = 是进行了值拷贝
    m_arr = arr;
}

BubbleSort::BubbleSort(QObject *parent)
: QThread{parent}
{

}



void BubbleSort::run()
{
    qDebug()<<"bubble函数执行,arr数组的大小："<<m_arr.size();
    int temp;
    //int k = m_arr.size()-1;
    for(int i = 0;i<m_arr.size();i++){
        //qDebug()<<"i="<<i<<"k="<<k;
        for(int j = 0;j<m_arr.size()-i-1;j++){
            if(m_arr[j]>m_arr[j+1]){
                temp = m_arr[j];
                m_arr[j] = m_arr[j+1];
                m_arr[j+1] = temp;
            }
        }


    }

    emit finish(m_arr);
}

