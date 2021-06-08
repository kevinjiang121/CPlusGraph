//include statements
#include <iostream>
#include <string>
#include <Eigen/Eigenvalues>

//header guard
#ifndef CPLUSGRAPH_EIGEN_H
#define CPLUSGRAPH_EIGEN_H

//namespaces
using namespace std;
using namespace Eigen;

//declare Eigen class
class EigenGraph {
public:
    //constructors and destructors
    EigenGraph();
    EigenGraph(int **l, int size);
    ~EigenGraph();

    //method
    void eValues();
    void eVectors();
private:
    Matrix<float, Dynamic, Dynamic> graphM;
    int numOfVertex;
};

#endif
