#include <iostream>                       // Includes cout
using namespace std;                      // Uses standard namespace

class Base                                // Base class
{
public:

    void Msg()                            // Base Msg function
    {
        cout << "Base Class" << endl;     // Prints Base Class
    }
};

class Derived : public Base               // Derived inherits Base
{
public:

    void Msg()                            // Overrides Base::Msg()
    {
        cout << "Derived Class" << endl; // Prints Derived Class

        Base::Msg();                      // Calls Base class Msg()
    }
};

int main()                                // Main function
{
    Derived d;                            // Creates Derived object

    d.Msg();                              // Calls Derived Msg()

    return 0;                             // End program
}