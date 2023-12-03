#include <iostream>
#include <string>
//#include

// Bring the std::string class into the current scope
using namespace std;

int main() {
             // '<<': insertion operator (from)
    cout << "Type your name " << endl;
    string name;

             // '>>': extraction operator (into)
    cin >> name;

    cout << "Hello, " << name << endl;
    return 0;
}
