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
    //int n=2;
    int edge1[2] = {2,6};
    int edge2[2] = {1,3};
    int edge3[2] = {2,4};
    int edge4[2] = {3,5};
    int edge5[2] = {4,6};
    int edge6[2] = {5,1};
    vertex.initialize("Graph");
    node.insert(vertex, 2, edge1);
    node.insert(vertex, 2, edge2);
    node.insert(vertex, 2, edge3);
    node.insert(vertex, 2, edge4);
    node.insert(vertex,2, edge5);
    node.insert(vertex,2, edge6);
    node.printLaplacian();
    return 0;
}
