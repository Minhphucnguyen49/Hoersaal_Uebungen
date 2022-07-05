#include "Graph.h"
#include <exception>

int main()
try {
    Graph g;
    g.addNode("Koeln");
    g.addNode("Frankfurt");
    g.addNode("Berlin");
    g.addNode("Muenchen");
    g.addNode("Stuttgart");
    g.addNode("Stuttgart");

    g.addEdge("Frankfurt", "Berlin", -435);
    //g.addEdge("Frankfurt", "Berlin", 435);
    g.addEdge("Frankfurt", "Stuttgart", 170);
    g.addEdge("Koeln", "Berlin", 380);
    g.addEdge("Koeln", "Stuttgart", 250);
    g.addEdge("Stuttgart", "Muenchen", 270);
    g.addEdge("Berlin", "Muenchen", 630);


    g.print();
    return 0;
}
catch (const char* &e)
{
    std::cerr << e << std::endl;
}
catch (const std::invalid_argument &ia)
{
    std::cerr << ia.what() << std::endl;
}
