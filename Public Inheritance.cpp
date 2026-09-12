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

class Child : public Parent                // Public inheritance
{
public:

    void accessData()
    {
        // privateData = 10;                // ERROR: private inaccessible

        protectedData = 20;                // Allowed
        publicData = 30;                   // Allowed
    }
};

class GrandChild : public Child             // Public inheritance again
{
public:

    void accessData()
    {
        protectedData = 40;                // Still protected
        publicData = 50;                   // Still public
    }
};