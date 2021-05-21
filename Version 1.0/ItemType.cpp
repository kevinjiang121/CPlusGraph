//include statements
#include "ItemType.h"

ItemType::ItemType() {
    this->value = "";
}//ItemType

string ItemType::getValue() {
    return this->value;
}//getValue

void ItemType::initialize(string str) {
    this->value = str;
}//initialize

void ItemType::print() {
    cout << this->value << endl;
}//print
