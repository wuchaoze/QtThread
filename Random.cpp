#include "Random.h"
#include <QtGlobal>
void Random::get_num(int num)
{
    m_num = num;
}

Random::Random(QObject *parent)
{

}

void Random::genrateVerctor()
{
    QVector<int> arr ;

    QElapsedTimer time;
    time.start();
    for(int i = 0;i<m_num;i++){


        //arr.push_back(qrand()%10000);
    }
}
