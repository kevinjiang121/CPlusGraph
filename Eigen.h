//include statements
#include <iostream>
#include <string>

//header guard
#ifndef CPLUSGRAPH_EIGEN_H
#define CPLUSGRAPH_EIGEN_H

//namespaces
using namespace std;

//declare Eigen class
class Eigen {
public:
    //constructors and destructors
    Eigen();
    ~Eigen();

    //method
    void eigenvalues(int **l);
    void eigenvectors(int **l);
private:
};

#endif
