#include <iostream>
#include <string>
#include <memory> // To include smart pointers
//#include <limits>

#include "Person.h"
#include "Person2.h"

using namespace std;

int main() {

    std::string name = "Alice";
    auto* p = new Person(name, 42);
    auto backup = *p;
    p->displayInfo();
    name = "Alice Modif";
    p->displayInfo();
    delete p;

    // destructor: is called after delete...

    std::cout << "after deleted person, name=" << name << endl;
    std::cout << "p's name=" << backup.getName()  << endl;

    // destructor: without delete it is called here.

    return 0;
}
