#ifndef GRAPH_H
#define GRAPH_H
#include "iostream"
#include <list>
#include <vector>

struct Node
{
    std::string city;

    /**
     * @brief adjList
     *
     */
    std::list< std::pair<Node, double> > adjList;

    void addPair(Node other, double weight)
    {
        auto pair = std::make_pair(other, weight);
        adjList.emplace_back(pair);
    }
};
struct Edge
{
    Node* predecessor;
    Node* successor;
    double weight = 0.0;
};
struct AdjNode
{
    Node* node;
    double weight;
};
class Graph
{
public:
    Graph() = default;
    Graph(const Graph& rhs) = delete;// assign 2 graph is forbidden
    void addNode(std::string);
    std::vector<Node> nodeList;
};

#endif // GRAPH_H
