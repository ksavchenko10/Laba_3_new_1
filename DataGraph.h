#ifndef DATAGRAPH_H
#define DATAGRAPH_H

#include <QString>
#include <QMap>

class DataGraph
{
public:
    void insert (QString key, float val);
    QMap<QString, float> * getMap();
public:
    DataGraph();
private:
    QMap<QString, float> map;
};


#endif // DATAGRAPH_H
