#ifndef GENERATE_H
#define GENERATE_H

#include <QObject>
#include <QThread>
class Generate : public QThread
{
    Q_OBJECT
public:
    explicit Generate(QObject *parent = nullptr);
    void recvNum(int num);
protected:
    void run();

signals:
    void sendArray(QVector<int> arr);
private:
    int m_num;
};

#endif // GENERATE_H
