#ifndef RANDOM_H
#define RANDOM_H
#include <QThread>
#include <qvector>
#include <QElapsedTimer>
#include <QtGlobal>
#endif // RANDOM_H
class Random:public QThread{
public:
    int m_num;
    void get_num(int num);
    explicit Random(QObject* parent = nullptr);

private:
    void genrateVerctor();

};
