#include <iostream>                     // Provides cout
using namespace std;                    // Avoids writing std::

class Base                              // Defines Base class
{
public:                                 // Public section

    Base()                              // Default constructor
    {
        cout << "Default Base Class" << endl;
        // Prints message when default constructor executes
    }

    Base(int b)                         // Parameterized constructor
    {
        cout << "Parameterized Base Class: "
             << b << endl;
        // Prints message and received value
    }
};

class Derived : public Base             // Derived inherits Base
{
    // No constructor is written here
};

int main()                              // Main function
{
    Derived d1;                         // Creates d1
    // Base default constructor executes

    Derived d2(9);                      // Creates d2 with argument 9
    // Important: this requires a matching derived constructor
    // in standard C++, so the original teaching snippet
    // is only conceptual here.

    return 0;                           // Ends program
}