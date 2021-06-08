//include statements
#include "EigenGraph.h"

EigenGraph::EigenGraph() {

}

EigenGraph::EigenGraph(int **l, int size) {
    graphM.resize(size, size);
    graphM.setZero();
    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            graphM(i,j)=l[i][j];
        }
    }
    numOfVertex=size;
}

EigenGraph::~EigenGraph() {

}

void EigenGraph::eValues() {
    EigenSolver<MatrixXf> es(graphM, false);
    for(int i=0; i<numOfVertex; i++) {
        if(es.eigenvalues()(i).real()<0.00005 && es.eigenvalues()(i).real()>-0.00005) {
            cout << 0 << endl;
        } else {
            cout << es.eigenvalues()(i).real() << endl;
        }
    }
}

void EigenGraph::eVectors() {
    EigenSolver<MatrixXf> es(graphM);
    for(int i=0; i<numOfVertex; i++) {
        cout << es.eigenvectors().col(i).real() << endl;
        cout << endl;
    }
}

