#include "Graph.h"

void Graph::addNode(string name){
    Node n{std::move(name)};

    //bessere Lösung: LOC reduzieren (SE)
    if(find(nodes.begin(), nodes.end(), n) != nodes.end()){
        throw ("This Node is already in the list!");
    }
    nodes.push_back(n);

    //normaler Denkweise
    if(find(nodes.begin(), nodes.end(), n) == nodes.end()){
        nodes.push_back(n);
    }
    else
        throw ("This Node is already in the list!");

//        if(find(nodes.begin(), nodes.end(), n) != nodes.end()){
//            throw ("This Node is already in the list!");
//        }
};

void Graph::addEdge(const string& from, const string& to, int weight){
    //assert (weight >= 0);//hier geht auch aber nicht schön wie im print(), siehe unten
    auto itFrom = find(nodes.begin(), nodes.end(),  Node{from});
    auto itTo = find(nodes.begin(), nodes.end(),  Node{to});

    if(itFrom == nodes.end() || itTo == nodes.end())
        return;

    auto p = make_pair(&(*itTo), weight);
    itFrom->adjacency.push_back(p);
    // ** itFrom->adjacency.insert(p); **

    // undirected graph:
    p = make_pair(&(*itFrom), weight);
    itTo->adjacency.push_back(p);
    // ** itTo->adjacency.insert(p); **
    if ( weight < 0 ){
        throw ("Egde weight is negative!");
    }
};

void Graph::print(){
    for(auto& node: nodes){
        cout << "\n Adjacency list of node " << node.name <<"\n"<<  node.name;
        for(auto& adjacendNode: node.adjacency){
            cout << " -> " << adjacendNode.first->name << " : "<< adjacendNode.second ;
            assert(adjacendNode.second >= 0);
        }
        cout << endl;
    }
}
