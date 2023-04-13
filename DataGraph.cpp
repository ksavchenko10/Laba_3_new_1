#include "DataGraph.h"


DataGraph::DataGraph() {}

void DataGraph::insert (QString key, float val) {
   map.insert(key, val);
}


QMap<QString, float> * DataGraph::getMap() {
    return &map;
}
