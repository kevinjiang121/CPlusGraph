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
    /*
    int v;

    cout << "Number of vertices on the graph:  ";
    cin >> v;
    for(int i=0; i<v; i++) {
        string data;
        cout << "What is stored in vertex " << i+1 << ": ";
        cin >> data;
        ItemType vertex;
        vertex.initialize(data);
        cout << "Number of edges that vertex "<< i+1 << " has: ";
        int e;
        cin >> e;
        int *edges = new int[e];
        cout << "Enter the vertex/vertices that vertex" <<
        for(int j=0; j<e; j++) {
            int edge;
        }
    }
     */

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
