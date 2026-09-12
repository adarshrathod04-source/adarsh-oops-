#include <iostream>                     // Includes cout
using namespace std;                    // Uses standard namespace

class Base                              // Base class
{
public:

    Base()                              // Base default constructor
    {
        cout << "Default Base Class" << endl;
    }

    Base(int b)                         // Base parameterized constructor
    {
        cout << "Parameterized Base Class: "
             << b << endl;
    }
};

class Derived : public Base             // Derived class inherits Base
{
public:

    Derived()                           // Derived default constructor
    {
        cout << "Default Derived Class" << endl;
    }

    Derived(int d)                      // Derived parameterized constructor
    {
        cout << "Parameterized Derived Class: "
             << d << endl;
    }
};

int main()                              // Main function
{
    Derived d1;                         // Creates object using default constructor

    Derived d2(9);                      // Calls Derived(int)

    return 0;                           // Ends program
}