#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <set>
#include <list>
#include <algorithm>
#include <map>
#include <cassert>

using namespace std;

class Graph{

private:
    struct Node{
        string name{};

        list<pair<Node*, int>> adjacency {};

        // ** Alternative marked in comments with map instead of list<pair>: **
        // map<Node*, int> adjacency {};

        bool operator==(const Node& other) const{
            return name == other.name;
        }
    };
    list<Node> nodes{};

public:
    void addNode(string name);
    void addEdge(const string& from, const string& to, int weight);
    void print();
};

#endif // GRAPH_H
