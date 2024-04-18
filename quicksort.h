#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <QThread>
#include <QObject>
#include <QVector>
#include <algorithm>
class QuickSort:public QThread
{
    Q_OBJECT
public:
    //QuickSort(QObject *parent = nullptr);
    //void sort(int piv,int r,int l);
    void recvArr(QVector<int> arr);
    QuickSort(QObject* parent = nullptr);
    QVector<int> m_arr;


signals:
    void finish(QVector<int>arr);
protected:
    void run();
};

#endif // QUICKSORT_H
