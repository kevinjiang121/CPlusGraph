//include statements
#include <iostream>
#include <string>

//header guards
#ifndef CPLUSGRAPH_ITEMTYPE_H
#define CPLUSGRAPH_ITEMTYPE_H

//namespaces
using namespace std;

//declares ItemType class
class ItemType {
public:
    //constructor
    ItemType();

    //methods
    void initialize(string str);
    string getValue();
    void print();
private:
    string value;
};

#endif //CPLUSGRAPH_ITEMTYPE_H
