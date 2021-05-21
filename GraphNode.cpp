//include statements
#include "GraphNode.h"

GraphNode::GraphNode() {
    start = NULL;
}

GraphNode::~GraphNode() {

}

void GraphNode::insert(ItemType vertex, int degree, int *edge) {
    //call method
    insertHelper(vertex, degree, edge);
}//insert

void GraphNode::deleteItem(ItemType vertex) {

}

void GraphNode::get(ItemType &item, bool &found) const {

}

int ** GraphNode::getLaplacian() {
    //instaniate degreeG
    int ** degreeM = getDegreeMatrix();
    int ** adjacenyM = getAdjacency();
    int ** G = new int*[numOfVertex];
    for(int i = 0; i<numOfVertex; i++) {
        G[i] = new int[numOfVertex];
    }//for
    for(int i=0; i<numOfVertex; i++) {
        for(int j=0; j<numOfVertex; j++) {
            G[i][j]=degreeM[i][j]-adjacenyM[i][j];
        }
    }
    return G;
}

void GraphNode::printLaplacian() {
    int ** G = getLaplacian();
    for(int i=0; i<numOfVertex; i++) {
        for(int j = 0; j<numOfVertex; j++) {
            cout << G[i][j] << " ";
        }//for
        cout << endl;//makes it look more like matrix
    }//for
}

int** GraphNode::getAdjacency() {
    //instaniate degreeA
    int ** degreeA = new int*[numOfVertex];
    for(int i = 0; i<numOfVertex; i++) {
        degreeA[i] = new int[numOfVertex];
    }//for
    for(int i=0; i<numOfVertex; i++) {
        for(int j=0; j<numOfVertex; j++) {
            degreeA[i][j]=0;
        }
    }
    currentPos = start;
    for(int i=0; i<numOfVertex; i++) {
        int *edge = currentPos->edge;
        for(int j=0; j<currentPos->degree; j++) {
            degreeA[i][edge[j]-1] = 1;
        }
        currentPos = currentPos->next;
    }//for
    return degreeA;
}

void GraphNode::printAdjacenyMatrix() {
    int ** degreeA = getAdjacency();
    for(int i=0; i<numOfVertex; i++) {
        for(int j = 0; j<numOfVertex; j++) {
            cout << degreeA[i][j] << " ";
        }//for
        cout << endl;//makes it look more like matrix
    }//for
}

int** GraphNode::getDegreeMatrix() {
    //instaniate degreeM
    int ** degreeM = new int*[numOfVertex];
    for(int i = 0; i<numOfVertex; i++) {
        degreeM[i] = new int[numOfVertex];
    }//for
    currentPos = start;
    //this nested for loops inserts values into degree matrix
    for(int i=0; i<numOfVertex; i++) {
        for(int j=0; j<numOfVertex; j++) {
            if(i==j) { //only inputs degree on diagonal
                degreeM[i][j] = currentPos->degree;
                currentPos = currentPos->next;
            } else {
                degreeM[i][j] = 0;
            }//if else
        }//for
    }//for
    return degreeM;
}//getDegreeMatrix

void GraphNode::printDegreeMatrix() {
    int ** degreeM = getDegreeMatrix();
    for(int i=0; i<numOfVertex; i++) {
        for(int j = 0; j<numOfVertex; j++) {
            cout << degreeM[i][j] << " ";
        }//for
        cout << endl;//makes it look more like matrix
    }//for
}//printDegreeMatrix

void GraphNode::insertHelper(ItemType vertex, int degree, int *edge) {
    currentPos = start;
    Node *temp;
    int position = 0;
    if(start == NULL) { //this inserts if graph if empty
        currentPos = new Node();
        currentPos->vertex = vertex;
        currentPos->next = NULL;
        currentPos->degree = degree;
        currentPos->position = 1;
        currentPos->edge = edge;
        start = currentPos;
    } else if (start->next==NULL) { //this inserts if graph only has 1 node
        currentPos = new Node();
        currentPos->vertex = vertex;
        currentPos->degree = degree;
        currentPos->position = (start->position)+1;
        currentPos->edge = edge;
        start->next = currentPos;
    } else { //inserts for all other cases
        while (currentPos->next != NULL) {
            currentPos = currentPos->next;
            position = currentPos->position;
        }
        temp = new Node();
        temp->vertex = vertex;
        temp->degree = degree;
        temp->position = position + 1;
        temp->edge = edge;
        currentPos->next = temp;
        numOfVertex = position + 1;
    } //if else
}//insertHelper

void GraphNode::print() {
    cout << "Hello World" << endl;
}//print

void GraphNode::printGraph() {
    currentPos = start;
    if(start==NULL) {
        cout << "empty graph" << endl;
        return;
    }//if
    //prints through calling printNode
    printNode();
    while(currentPos->next != NULL) {
        currentPos = currentPos->next;
        printNode();
    }//while
}//printGraph

void GraphNode::printNode() {
    if(start == NULL) {
        cout << "empty graph" << endl;
    } else {
        if(currentPos!=NULL) { //prints the degree of currnt node
            cout << currentPos->degree << endl;
        } else {
            cout << "ERROR in printNode" << endl;
        }//if else
    }//if else
} //printNode

