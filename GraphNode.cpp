//include statements
#include "GraphNode.h"

GraphNode::GraphNode() {
    start = NULL;
}

GraphNode::~GraphNode() {

}

void GraphNode::insert(ItemType vertex, int degree) {
    insertHelper(vertex, degree);
}

void GraphNode::deleteItem(ItemType vertex) {

}

void GraphNode::get(ItemType &item, bool &found) const {

}

void GraphNode::getLaplacian() {

}

void GraphNode::getAdjacency() {

}

void GraphNode::getDegreeMatrix() {

}

void GraphNode::insertHelper(ItemType vertex, int degree) {
    currentPos = start;
    Node *temp;
    int position = 0;
    if(start == NULL) {
        currentPos = new Node();
        currentPos->vertex = vertex;
        currentPos->next = NULL;
        currentPos->degree = degree;
        currentPos->position = 1;
        start = currentPos;
    } else if (start->next==NULL) {
        currentPos = new Node();
        currentPos->vertex = vertex;
        currentPos->degree = degree;
        currentPos->position = (start->position)+1;
        start->next = currentPos;
    } else {
        while (currentPos->next != NULL) {
            currentPos = currentPos->next;
            position = currentPos->position;
        }
        temp = new Node();
        temp->vertex = vertex;
        temp->degree = degree;
        temp->position = position + 1;
        currentPos->next = temp;
    }
}

void GraphNode::print() {
    cout << "Hello World" << endl;
}

void GraphNode::printGraph() {
    currentPos = start;
    if(start==NULL) {
        cout << "empty graph" << endl;
        return;
    }
    printNode();
    while(currentPos->next != NULL) {
        currentPos = currentPos->next;
        printNode();
    }
}

void GraphNode::printNode() {
    if(start == NULL) {
        cout << "empty graph" << endl;
    } else {
        if(currentPos!=NULL) {
            cout << currentPos->position << endl;
        } else {
            cout << "ERROR in printNode" << endl;
        }
    }
}

