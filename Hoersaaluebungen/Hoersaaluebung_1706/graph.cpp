#include "graph.h"


void Graph::addNode(std::string name)
{
    Node n;
    n.city = name;
    nodeList.push_back(n);
}
