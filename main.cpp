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
    node.insert(vertex, 2);
    node.insert(vertex,1);
    node.insert(vertex,0);
    node.printDegreeMatrix();
    return 0;
}
