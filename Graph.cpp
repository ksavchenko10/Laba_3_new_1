#include "Graph.h"

void Graph::setData(DataGraph* data)
{
    bar = new QBarSeries();
    pie = new QPieSeries();
    int count = 0;
    for (auto i = data->getMap()->begin(); i != data->getMap()->end(); i++)
    {
        if (count > 20) break; // берём первые 20 данных из бд
        //if (count > 100) break; // берём первые 100 данных из бд
        pie->append(i.key(), i.value());
        QBarSet* barS = new QBarSet(i.key());
        *barS << i.value();
        bar->append(barS);
        count++;
    }
}
