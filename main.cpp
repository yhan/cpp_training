#include <iostream>
#include <string>
#include <memory> // To include smart pointers
//#include <limits>

#include "Person.h"

using namespace std;

int main() {

    std::string name = "Alice";
    int age = 30;
    auto p = new Person(name, age);

    string *namePtr = p->getNameBadIfPersonGetDestroyedThe_namePtr_PointsToDeallocatedMemory();
    cout << *namePtr; // deference the pointer to get the name

    auto gotName = p->getName();
    cout << "name is: " << name;

    p->displayInfo();

    //Person person2;

    return 0;
}
