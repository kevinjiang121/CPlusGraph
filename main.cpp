//include statements
#include <iostream>
#include <string>
#include <fstream>
#include "GraphNode.h"

//namespaces
using namespace std;

int main() {
    GraphNode node;
    ItemType vertex;
    vertex.initialize("Graph");
    node.insert(vertex, 5);
    node.insert(vertex, 4);
    node.insert(vertex, 3);
    //node.printNode();
    node.insert(vertex, 2);
    //node.printNode();
    node.insert(vertex,1);
    //node.printNode();
    node.insert(vertex,0);

    node.printGraph();
    return 0;
}
