#include <iostream>
#include <string>

class Person {

private:
    std::string &name; // ctor will get a reference to ctor parameter name
    //std::string name; // ctor will get a copy
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

    // destructor is in header file, not impl
    ~Person(){
        name.clear();
        std::cout << "destr: name='" << name << "'" << std::endl;
    }
};
