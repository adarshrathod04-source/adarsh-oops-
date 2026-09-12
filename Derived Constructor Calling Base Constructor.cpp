#include <iostream>                     // Includes input/output
using namespace std;                    // Uses standard namespace

class Base                              // Defines Base class
{
public:

    Base()                              // Default constructor
    {
        cout << "Default Base Class" << endl;
    }

    Base(int b_arg)                     // Parameterized constructor
    {
        cout << "Parameterized Base Class: "
             << b_arg << endl;
    }
};

class Derived : public Base             // Derived inherits Base
{
public:

    Derived() : Base()                  // Calls Base default constructor
    {
        cout << "Default Derived Class" << endl;
    }

    Derived(int d_arg) : Base(d_arg)    // Calls Base parameterized constructor
    {
        cout << "Parameterized Derived Class: "
             << d_arg << endl;
    }
};

int main()                              // Main function
{
    Derived d1;                         // Calls Base() then Derived()

    Derived d2(9);                      // Calls Base(9) then Derived(9)

    return 0;                           // End program
}