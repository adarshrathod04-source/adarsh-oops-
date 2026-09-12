#include <iostream>                     // Includes cout
using namespace std;                    // Uses standard namespace

class Base                              // Base class
{
public:

    void Msg()                          // Base class Msg()
    {
        cout << "Base Class" << endl;   // Displays Base Class
    }
};

class Derived : public Base             // Derived inherits Base
{
public:

    void Msg()                           // Derived has same function
    {
        cout << "Derived Class" << endl; // Displays Derived Class
    }
};

int main()                              // Main function
{
    Base b;                              // Creates Base object
    b.Msg();                             // Calls Base::Msg()

    Derived d;                           // Creates Derived object
    d.Msg();                             // Calls Derived::Msg()

    return 0;                            // End program
} 