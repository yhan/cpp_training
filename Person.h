#include <iostream>
#include <string>

class Person {
private:


    std::string name;
    int age;

public:

    // Constructor
    //Person(const std::string &n, int a);
    Person(std::string &n, int a);

    void setName(const std::string &n);

    void setName2(std::string n);

    void setAge(int a);

    std::string getName();

    std::string *getNameBadIfPersonGetDestroyedThe_namePtr_PointsToDeallocatedMemory();

    void displayInfo();
};
