#include <iostream>
#include <string>
#include <memory> // To include smart pointers
//#include <limits>

#include "Person.h"

using namespace std;

int main() {
    auto* p = new Person("hllo", 24);
    string* namePtr = p->getNameBadIfPersonGetDesdroyedThe_namePtr_PoninsToDeallocatedMemory();
    cout << *namePtr; // deference the pointer to get the name

    string name = p->getName();
    cout << "name is: " << name;

    p->salary = 1000;
    return 0;
}
