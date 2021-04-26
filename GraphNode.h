//include statements
#include <iostream>
#include <string>
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
    void insert(ItemType key);
    void deleteItem(ItemType key);
    void get(ItemType &item, bool &found) const;
    void getLaplacian();
    void getAdjacency();
    void getDegreeMatrix();
    void print();
private:
    Node *start;
};


#endif
