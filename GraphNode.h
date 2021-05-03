//include statements
#include <iostream>
#include <string>
#include <algorithm>
#include "ItemType.h"

//header guards
#ifndef CPLUSGRAPH_GRAPHNODE_H
#define CPLUSGRAPH_GRAPHNODE_H

//namespaces
using namespace std;

//declare GradeNode class
class GraphNode {
public:
    //structs
    struct Node {
        ItemType vertex;//data that is held at a node
        Node *next;//next node in linked list
        int degree;//amount of edges connect to a node
        int position;//position on the linked list (1st, 2nd, etc)
    };//Node

    //constructors and destructors
    GraphNode();
    ~GraphNode();

    //methods
    //calls the insertHelper method. Requires vertex and the number of edges connected
    //to the vertex. Does not return anything.
    void insert(ItemType vertex, int degree);
    void deleteItem(ItemType vertex);
    void get(ItemType &item, bool &found) const;
    void getLaplacian();
    void getAdjacency();
    //gets Degree Matrix. Requires no parameters. Returns the degree Matrix.
    int** getDegreeMatrix();
    //prints degree matrix. Requires no parameters. Returns nothing.
    void printDegreeMatrix();

    //test methods
    void print();//simple hello world test print
    void printGraph();//prints the linked list in order. Requires no parameters, returns nothing.
    void printNode();//prints the degree of the current Node. Requires no parameters, returns nothing.

    //helper method
    //helps insert. Requires a vertex and the number of edges attached
    //for parameters. Insert the node as the next node on the linked list.
    //returns nothing.
    void insertHelper(ItemType vertex, int degree);
private:
    Node *start;//first item on linked list.
    Node *currentPos;//current position on the linked list.
    int numOfVertex;//number of nodes/vertex on the linked list/graph.
};


#endif
