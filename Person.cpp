#include <string>
#include "Person.h"

/**
* For instance, in functions which are intended to create a copy of an object such as a copy constructor or an
* assignment operator,
* instead of passing the argument as a const reference (which is the traditional method),
* you now pass it by value and then you "move" this value to the intended object using std::move().
* This process can improve performance by avoiding unnecessary copy operations.
* */
//Person::Person(const std::string& n, int a): name(n), age(a){}

Person::Person(std::string &n, int a) :name(std::move(n)), age(a) {}

/* Benefit of initializer:
*
*  avoid doing : name =n; which will make an empty string then changes its value
*  construct my member variables : here is the way to construct them: Initializer!
*
* */
//Person::Person(const std::string &n, int a) : name(n), age(a)  {
//}

void Person::setAge(int a) {
    age = a;
}

// Member functions
void Person::setName(const std::string &n) {
    name = n;
}

void Person::setName2(const std::string n) { // warning: prefer reference than copy
    name = n;
}

std::string Person::getName() {
    //Keeping encapsulation principles in mind, it is safer and more common to
    // return by value (or constant reference) rather than returning a pointer to an internal private member:
    return name;
}


std::string * Person::getNameBadIfPersonGetDestroyedThe_namePtr_PointsToDeallocatedMemory() {
    return &name;
}

void Person::displayInfo()  {
    std::cout << "Name: " << Person::name << ", Age: " << Person::age << std::endl;
}

