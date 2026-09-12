#include <iostream>                         // Includes cout
using namespace std;                        // Uses standard namespace

class Parent                                // Base class
{
private:
    int privateData;                        // Private member

protected:
    int protectedData;                     // Protected member

public:
    int publicData;                        // Public member
};

class Child : protected Parent              // Protected inheritance
{
public:

    void accessData()
    {
        // privateData = 10;                // ERROR

        protectedData = 20;                // Allowed
        publicData = 30;                   // Becomes protected
    }
};

class GrandChild : protected Child         // Protected inheritance again
{
public:

    void accessData()
    {
        protectedData = 40;                // Accessible
        publicData = 50;                   // Accessible internally
    }
};