#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include <QObject>
#include <QThread>
class BubbleSort:public QThread{
    Q_OBJECT
public:

    QVector<int> m_arr;
    void recvArr(QVector<int> arr);
    explicit BubbleSort(QObject* parent = nullptr);
signals:
    void finish(QVector<int> arr);
protected:
    void run();



};

#endif // BUBBLESORT_H
