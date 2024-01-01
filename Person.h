//
// Created by hanyi on 1/1/2024.
//

#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H


#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:

    int salary;
    // Constructor
    Person(const std::string &n, int a) : name(n), age(a) {}

    // Member functions
    void setName(const std::string& n){
        name = n;
    }
    void setName2(const std::string n){ // warning: prefer reference than copy
        name = n;
    }

    std::string* getNameBadIfPersonGetDesdroyedThe_namePtr_PoninsToDeallocatedMemory(){
        return &name;
    }

    [[nodiscard]] std::string getName() const {
        //Keeping encapsulation principles in mind, it is safer and more common to
        // return by value (or constant reference) rather than returning a pointer to an internal private member:
        return name;
    }

    void setAge(int a);

    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};


#endif //UNTITLED_PERSON_H
