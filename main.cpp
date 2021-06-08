//include statements
#include <iostream>
#include <string>
#include <fstream>
#include "GraphNode.h"
#include "EigenGraph.h"


//namespaces
using namespace std;

int main() {
    GraphNode node;
    int v;

    cout << "Number of vertices on the graph: ";
    cin >> v;
    cout << endl;
    for(int i=0; i<v; i++) {
        string data;
        cout << "Value of vertex " << i + 1 << ": ";
        cin >> data;
        ItemType vertex;
        vertex.initialize(data);
        cout << endl;
        cout << "Number of edges for vertex " << i + 1 << ": ";
        int e;
        cin >> e;
        int *edges = new int[e];
        cout << endl;
        cout << "Vertices connect to vertex " << i+1 << ":" << endl;
        for (int j = 0; j < e; j++) {
            int edge = v + 1;
            while (edge > v) {
                cin >> edge;
                if (edge == i+1) {
                    cout << "ERROR: Vertex cannot be connected with itself, please try again." << endl;
                } else if (edge <= v) {
                    edges[j] = edge;
                } else {
                    cout << "Error: Vertex does not exist, please try again." << endl;
                }
            }
        }
        node.insert(vertex, e, edges);
    }
    EigenGraph eigen(node.getLaplacian(), node.getNumOfVertex());
    char command = 'f';
    while(command != 'q') {
        cout << "d - print the degree matrix, a - print adjacency matrix, l - print graph laplacian, "
                "e - print eigenvalues of the laplacian, v - print eigenvectors of the laplacian, and q - quit" << endl;
        cout << endl;
        cin >> command;
        if(command=='d') {
            cout << "Printing degree matrix..." << endl;
            node.printDegreeMatrix();
            cout << endl;
        } else if(command=='a') {
            cout << "Printing adjaceny matrix..." << endl;
            node.printAdjacenyMatrix();
            cout << endl;
        } else if(command=='l') {
            cout << "Printing graph Laplacian..." << endl;
            node.printLaplacian();
            cout << endl;
        } else if(command=='e') {
            cout << "The eigenvalues of this graph are:" << endl;
            eigen.eValues();
        } else if(command=='v') {
            cout << "The eigenvalues of this graph are..." << endl;
            eigen.eVectors();
        } else if(command=='q') {
            cout << "Exiting Program" << endl;
            cout << endl;
        } else {
            cout << "Please enter valid input!" << endl;
            cout << endl;
        }
    }
    return 0;
}
