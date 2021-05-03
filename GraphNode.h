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
        ItemType vertex;
        Node *next;
        int degree;
        int position;
    };

    //constructors and destructors
    GraphNode();
    ~GraphNode();

    //methods
    void insert(ItemType vertex, int degree);
    void deleteItem(ItemType vertex);
    void get(ItemType &item, bool &found) const;
    void getLaplacian();
    void getAdjacency();
    int** getDegreeMatrix();
    void printDegreeMatrix();

    //test methods
    void print();
    void printGraph();
    void printNode();

    //helper method
    void insertHelper(ItemType vertex, int degree);
private:
    Node *start;
    Node *currentPos;
    int numOfVertex;
};


#endif
