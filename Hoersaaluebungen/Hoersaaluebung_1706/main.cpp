#include "graph.h"

int main()
{
    Graph g;
    g.addNode("Berlin");//0
    g.addNode("Koeln");//1
    g.addNode("Frankfurt");//2
    g.addNode("Stuttgart");//3
    g.addNode("Muenchen");//4

    //Berlin
    g.nodeList.at(0).addPair( g.nodeList.at(1), 380 );
    g.nodeList.at(0).addPair( g.nodeList.at(2), 435 );
    g.nodeList.at(0).addPair( g.nodeList.at(4), 630 );

    //Köln
    //g.addPair( g.nodeList.at(0), 380 );// repeated
    g.nodeList.at(1).addPair( g.nodeList.at(3), 250 );

    //Frankfurt
    //g.addPair( g.nodeList.at(0), 435 );//repeated
    g.nodeList.at(2).addPair( g.nodeList.at(3), 170 );

    //Stuttgart
    //g.nodeList.at(3).addPair( g.nodeList.at(1), 250 );//repeated
    g.nodeList.at(3).addPair( g.nodeList.at(4), 270 );

    //München
//    g.addPair( g.nodeList.at(1), 270 );//repeated
//    g.addPair( g.nodeList.at(4), 630 );//repeated


    for (auto& x : g.nodeList)
    {
        for (auto it = x.adjList.begin(); it != x.adjList.end(); it++)
        {
            std::cout << x.city << " is " << it->second << " km"
                      << " away from " << it->first.city << std::endl;
        }
    }
}

